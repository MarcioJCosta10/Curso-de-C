#include <stdio.h>
#include <stdlib.h>
            " E se tivermos Campos de Bit (bitfields)?"
        - Campos de bits permitem acessar diretamente os bits, ou um único bit,
          dentro de um byte, sem fazer o uso dos operadores bit a bit
        - Nesse caso o que vamos fazer? Devemos seguir o alinhamento pelo maior membro(int)
          Algumas coisas que precisamos saber:
        - Neste caso, os campos de bits se comportam como 4 bytes (32 bits), mas no exemplo que temos aqui vou usar apenas
        12 bits são usados

        struct st1{   // Temos 6 bytes ?
            short s;  // 2bytes
            char c;   // 1 byte
                      // Fiz 3 campos de bytes aqui
            int fp:1; //
            int ny:4; //
            int se:7; //
                      // Resultam em 12 bits (1 + 4 + 7 ) equivalente a 3 bytes

            "Como o compilador vai alinhar isso tudo?"
        struct st1{   // Teremos 8 bytes no total
            short s;  // 2bytes
            char c;   // 1 byte
            char pad1;// 1 byte // Alinho pois os campos de bits tem que estar todos dentro da mesma palavra //s =_ _ c =_ .  (_ _ _ _)
            int fp:1; //                                                                                     //  fp+ny+se+pad (_ _ _ _)
            int ny:4; //
            int se:7; // 12 bits(fp+ny+se ou seja 1 +4 + 7)
            int pad2:20 //20 bits = fecho 4 bytes (12 + 20)
             "Essa foi a maneira que o compilador alinhou ele completou os bits qu ele precisava ali"

             "Outra coisa importante"

             - Importante: Os campos de bits não podem ultrapassar o tamanho da "palavra", isto é,
             devem estar contidos dentro de uma mesma "palavra". Se eu começar um novo campo de bit eu preciso ver se tem espaço
             onde eu estou se não vou ter que começar uma nova palavra.
             Exemplo:

                 struct st1{ // Tem no total 8 bytes ?
                    int fp1:31;
                    int fp2:31;
                    int ny:1;
                    int ny2:1;

                    Mas não é o que acontece, porque, pois preciso alinhar

                 struct st1{ // Terá no total 12 bytes.
                    int fp1:31;
                    int pad1:1; // 4 bytes (31+1)              //fd1+pad1
                    int fp2:31;                                //fp2+ny1
                    int ny:1;   // 31 + 1 = fechou a palavra   //ny2+pad2
                    int ny2:1;
                    int pad2:31; // 4 bytes (31+1)

                 };


                 "E se tivermos aninhamento de structs?"
            - Nesta caso, as estruturas internas também vão querer se alinhar com o maior membro (short)

            struct st2{ // 3 bytes ?
                short s; // 2 bytes
                char c;  // 1 byte
            };
            struct str1{ // 4 bytes?
                char c1;  // 1 byte
                struct st2 x;// 3 bytes
            };
            "Será que é isso mesmo vamos confirmar ?"

            struct st2{ // Na verdade tem 4 bytes
                short s; // 2 bytes
                char c;  // 1 byte
                char pad;// 1 byte
            };
            struct str1{ // 6 bytes
                char c1;  // 1 byte
                char pad; // 1 byte
                struct st2 x;// 4 bytes //
                                // Mas quem é o maior campo? é o short, então será alinhado de 2 em 2 bytes

                                                // c1 pad = 2 bytes
                                                // s      = 2 bytes
                                                // c  pad = 2 bytes
            };
            - Estranho mas é a regra que o compilador aplica, tem tem um short ele é o maior
            então ele vai alinhar pelo maior -

            "Bom, deu para ver como funciona a questão do alinhamento"

            "Reorganizando a estrutura"
        - Agora que sabemos como o compilador alinha e insere bytes extras dentro da struct, podemos
        reorganizar os seus campos para economizar espaço.
        - A ideia é organizar os campos por ordem de alinhamento, do maior numero de bytes para o menor.

        Temos esse exemplo:

        struct st1{ // 24 bytes
            char c; // 1 byte
            char pad1[7]; // 7 bytes - alinhamento pois temos um double que é 8 bytes - e o alinhamento vai pelo maior
            double p;     // 8 bytes
            short x;    // 2 bytes
            char pad2[6]; // 6 bytes - alinhamento
        } ;

        struct st2{     // 16 bytes -- Economia de 8 bytes só mudando a posição dos campos dentro da estrutura
            double p;   // 8 bytes
            short x;    // 2 bytes
            char c;     // 1 byte - Lembrando que o char não tem regra e se tiver espaço ele encaixa na mesma palavra
            char pad[5];// 5 byte - para fechar a palavra (alinhar)

        };

        - Nossa reorganização diminuiu de 24 para 16 bytes.
        Parece pouco, mas imagine uma lista encadeada com 200 mil dessas estruturas.
        - Se podemos economizar toda essa memória, por que a linguagem C não permite que
        o compilador reorganize os dados para salvar espaço ?
        - Resposta: A linguagem C foi originalmente concebida para escrever sistemas operacionais
        e códigos perto do hardware. Reorganização automática iria interferir com a capacidade do
        programador de trabalhar com estruturas que precisem de um layout exato em nível de bits e bytes.
        Oh! Aquele sistema de hardware trabalha com certa configuração de bit e bytes nessa ordem para ele receber informação, se deixar
        a reorgnização automática não consigo fazer essa interface
        Exemplo: Dispositivo de hardware mapeado na memória.

        Posso forçar um alinhamento?

        "Substituindo regras de alinhamento"
        - Podemos forçar o compilador a não usar as regras normais de alinhamento do processador.
        - Para isso, alguns compiladores possuem a diretiva "#pragma pack(n)".
         Oh! Eu não quero usar minhas regras de alinhamento ex: int força alinar de 4 em 4 bytes
        - Essa diretiva informa que os dados devem seguir o alinhamento de "n" bytes, onde "n"é uma  potência de 2.

        struct st1{ // 11 bytes?
            char  c; //1 byte
            double p; // 8 bytes
            short  x; // 2 bytes
        };
        struct st1 {   // 24 bytes
            char c;    // 1 byte
            char pad1[7];// 7 byte
            double p;   // 8 bytes
            short x;    // 2 bytes
            char pad2[6]; // 6 bytes
        };

        #pragma pack(2)  // Estou alinhando de 2 em 2 bytes
        struct st1{ // 12 byts
            char c; // 1 bytes
            char pad1[]; // 1 byte
            double p;   // 8 bytes      // p = _ _   O double será empilhado de 2 em 2
            short x;  // 2 byte                _ _
        };                              //     _ _
                                        //     _ _

        - Essa técnica de "#pragma pack(n)" deve ser usada com cautela, pois
        gera código mais lentos e de maior custo .
        - Podemos economizar o mesmo tanto de memória apenas reorganizando a estrutura.
        Quando usar?
        - Essa diretiva é util quando as estruturas precisam de um layout exato em nivel de
        bits e bytes. Exemplo: dispositivo de hardware mapeado na memória














        };



int main()
{
    printf("Hello world!\n");
    return 0;
}
