#include <stdio.h>
#include <stdlib.h>
                    "Alinhamento e preenchimento de estruturas"
        - Muitas vezes, o tamanho da estutura n�o � igual a soma de seus membros
        - Tome a senguinte struct como exemplo

struct st1{ // 5 bytes  na minha estrutura sendo:
    char c; // 1 byte
    int  x; // 4 bytes

};
// Se eu der um printf para saber o tamanho da minha estrutura ter� 8 bytes
printf("%d", sizeof(struct st1)); // Ter� 8 bytes pois por
                                // Essa diferen�a se d� por causa da quest�o do alinhamento de preenchimento;

                    "Alinhamento e preenchimento de estruturas"
    - Ent�o por qu� 8 e n�o 5 bytes?
    - Ocorre que a struct foi preenchida com bytes extra para satisfazer a restri��o de alinhamento
    struct st1{
        char c; // 1 byte + 3bytes de padding
        int  x; // 4 bytes
        char pad[3]// 3 bytes extras colocados na frente do char c para satisfazer a restri��o de preenchimento
    };
    printf("%d",sizeof(struct st1)); // Ter� 8 bytes


                     "Alinhamento e preenchimento de estruturas"
                     Mas por que o computador faz isso?

        - Quando o computador l� dados da mem�ria, ele o faz sempre usando o tamanho da "palavra" do sistema
        - Exemplo 4 bytes em um sistema 32-bits
        - O que o alinhamento vai fazer? O alinhamento faz com que o endere�o dos dados sempre esteja em uma posi��o de mem�ria
        que � m�ltiplo do tamanho da "palavra", isso facilita as leituras em sequ�ncia

    struct st1 {// Tem no total 8 bytes             //0
        char c; //1 byte                            //4
        int  x; //4 bytes                           //8
    char pad[3] //3 bytes                           //12 c = _ . . . (.) detro dos tres pontos colocamos o pad para alinhar a 4 bytes do x
                                                    //16 x = _ _ _ _
                                                    //20
    };                                              //24

                        "Mas porque alinhar os dados?"

            - O alinhamento impacta no desempenho e funcionamento correto do programa
            - Acesso mais r�pido a mem�ria
                - Porque facilita a gera��o de endere�o de mem�ria
                - Sem alinhamento, mais acessos podem ser necess�rio para recuperar um dados

            - Para alinhar os dados, podem ser necess�rio inserir alguns bytes n�o nomeados entre os dados
                    - Inserir alguns bytes: preenchimento ou padding
                    - Isso permite por exempo que membros de uma array de struc fiquem todos adequadamente alinhados na mem�ria com seus multiplos tamanho/palavra
                    //c _ . . . pad
                    //x _ _ _ _

                        "Como funciona realmente o alinhamento "
            - Isso dependedo do tipo que estou trabalhando
            - Diferentes tipos de dados podem ter diferentes regras de alinhamento: int(4 bytes), short (2 bytes) etc
            - Num sistema 32-bits, o tipo int precisa estar alinhado (4 bytes ), o que faz com que 3 bytes sejam inseridos entre char e o int.

             struct st1{// Tem no total 9 bytes mas vou ter que alinhar isso daqui ent�o coloco alguma coisa entre o char e o int
                char* p; // 4 bytes
                char  c; // 1 byte
                int   x; // 4 bytes
                };

                "Com Alinamento"
            struct st1{ // Ter�  no total 12 bytes
                char* p;     // 4bytes                      //*p = _ _ _ _
                char  c;     // 1byte                       // c = _ . . .  ((.)pad )
                char pad[3]; // 3bytes                      // x = _ _ _ _
                int x;       // 4bytes

            };


                "Como funciona realmente o alinhamento "
            - Mais um exemplo: mesmo que n�o tivessemos o tipo int para ainhar precisariamos inserir 3 bytes ap�s o char
            - Deste modo, um array de struct estaria sempre com alinhamento de 4 bytes

            struct st1{ // Tem 5 bytes no total
                char* p;//4 bytes  // Vou te que alinhar de 4 em 4 bytes
                char  c;//1 byte
            };
            struct st1{ // Ap�s alinhado passa a ter 8 bytes    //q[0]   *p _ _ _ _
                char *p; //4bytes                               //        c _ . . .
                char c;  //1byte                                //q[1]   *p _ _ _ _
                char pad[3];//3bytes                            //        c _ . . .
                                                                //q[2]   *p _ _ _ _
            };                                                  //        c _ . . .
            struct st1 q[4]; //8 bytes cada!                    //q[3]   *p _ _ _ _
                                                                //        c _ . . .
                                                                //q[4]   *p _ _ _ _
                                                                //        c _ . . .
                                "FICA MAIS FACIL CALCULAR A POSI��O DE MEM�RIA"


                "Como funciona realmente o alinhamento "
                *OUTRA COISA*
            - Caractere n�o tem preferencia de alinhamento - o meu int precisar ser alinhado de 4 em 4 byte - no char (caracter) n�o
            - Podem ser colocado no meio ou final de uma palavra, se tiver espa�o colocamos o char l�
            - Tipo short: alinhamento de 2 bytes

            struct st1{ //tem 3 bytes no total
                short s; // 2bytes
                char  c; // 1 byte
                };
                "Com alinhamento"

            struct st1{ //Tem 4 bytes no total      //
                short s; // 2 bytes                 //s= _ _ c=_ . ficando (_ _ _ _)
                char  c; // 1 byte                  //
                char pad;// 1 byte
                };

            "Alinhamento de estruturas"
            - Em geral, os membros da struct seguem o alinhamento do maior membro.
            - O que o compilador vai fazer, ele entende se � a forma mais facil para garantir que todos os campos estejam alinhados
            - Para o compilador, esta � a forma mais f�cil de garantir que todos est�o alinhados.

            struct st1{ // Tem no total 5 bytes
                short s1;//2 bytes
                short s2;//2 bytes
                char c;  // 1 byte
                };

            "Precisamos alinhar os bytes"
            Ai voce pode pensar, mas a palavra n�o � de 4 em 4 bytes, sim mas ele ir� fazer em rela��o ao maior campo dessa situa��o
            struct st1{ // Ter� no total 6 bytes
                short s1;//2 bytes                      //s1 = _ _
                short s2;//2 bytes                      //s2 = _ _
                char c;  // 1 byte                      //c  = _ .  (.)pad
                char pad;//1 byte
                };
                "SE TIVESSE UM INTEIRO ELE IRIA MUDAR AS REGRAS DE ALINHAMENTO, ENT�O DEPENDE MUITO DO QUE ESTOU COLOCANDO DENTRO DA ESTRUTURA"
                "E A ORDEM QUE EU COLOCO DENTRO DA ESTRUTURA MUDA COMO O COMPILADOR IR� PREENCHER ESSE ALIENHAMENTO"



int main()
{

    return 0;
}
