#include <stdio.h>
#include <stdlib.h>

         /*

                "Trabalhando com Campos de Bits"
        - Permite acessar diretamente os bits,
        ou um unico bit, dentro de um byte, sem
        fazer uso dos operadores bit a bit.

        - Trata-se de um tipo especial de membro de
        "Estruturas" e "Uniões" chamado de "campo de bit"
        ou "bitfield" - Então "Campo de Bit" iremos sempre usar ou dentro
        de uma estrutura ou dentro de uma união.

            Quando eu vou usar isso?
        - Seu uso é extremamente útil quando a quantidade de
        memória para armazenamento de dados é limitada
        "Exemplos"
            - Flags (Para fazer sinalização)
            - Comunicação de dispositivos de hardware
            - Etc

            "Trabalhando com campo de bit"
            "Forma geral"

            tipo nome_campo : comprimento; // Lembrando que isso aqui é dentro de uma struct ou de uma union

            - O valor do "Comprimento" pode ser um
            número ou uma expressão constante.
            - O "Comprimento" de um "Campo de bit" não
            deve exceder o número total de bits do tipo
            da variavel utilizada na declaração.

            "Importante"
            -Só podem ser declarados como do tipo "int",
            sendo possível utilizar os modificadores
            "signed" e "unsigned".

            "Temos que tomar cuidado:"
            - Se ele for do tipo "int" ou "signed int", //(Eu tenho ue lembrar que tem o bit de sinal)
            então eu preciso que seu comprimento seja maior do que
            UM (1) por causa do bit do sinal // Porque o sistema automaticamente já está reservando um bit por causa do sinal da minha varialve
                                             //Se ele for do tipo "int" ou "signed int" eu preciso de tamanho 2 no mínimo


            "Exemplo"
            struct status {
                unsigned int ligado:1; // Valor de 0 ou 1;
                signed int valor: 4; // valores entre -8 e 7 // Lembrando que um bit aqui é do signed então eu tenho 3 bits
                unsigned int :3;  // SEM NOME!! COMPLETA  8 BITIS; // Não coloquei nome e ele é simplismente para completar os 8 bits
            };
            "Poss criar Campo de Bits SEM NOME"
            -São úteis simplismente para preencher uma estrutura
            de modo a fazer com que ela esteja adequada
            a um layout especificado.    // Por exemplo a minha structs status somando todos os campos completou os 8 bits 1 + 4 + 3 os ultimos 3 mesmo que eu não precise é só para preencher quanto faltava
            - Como não coloque nome Não podem ser acessado ou inicializados. // Só para completar espaço.

             "Também Posso fazer Campo de Bits com Comprimento ZERO"
             - Não podem possuir nome;
             - Vou fazer apenas por sua função de alinhamento dos bits.
             Ele faz com que o próximo campo de bits seja
             alinhado com o proximo byte de memória do mesmo tipo do campo de bits. // Se tiver espaço sobrando então ignora esse espaço e começa no próximo byte só para não ficar perdido em espaço
             Em outras palavras, um "Campo de bits"  de comprimento "ZERO" indica que
             nenhum "Campo de bits" adicional deve ser colocado dentro desse byte


             "Endereçamento de Campos de Bits" // Blz tenho um campo de bits que é uma parte de uma variável, então se é uma parte de uma variavel não pode ser endereçado
             - Não possuem endereços e, como tal, não podem ser usados // Um endereço é associado a uma varável e não a um pedaço de uma variável
               com o operador de endereços (&)
             - Não podemos ter ponteiros ou arrays deles
             - O Operador "sizeof"  também não pode ser utilizado


             "Exemplo completo"*/


struct status {
        unsigned int ligado:1;
        signed int valor: 4;
        unsigned int :3;
        };

void check_status(struct status s){ // Criei uma função check_status que vai receber minha struct com um nome s e
                                    // Vai verificar se o compo de bits está ligado ou desligado
                                    //Lembrando que o campo de bits ligado só tem um bit e é sem sinal então assume valores 0 ou 1
        if (s.ligado == 1)          // Então simplismente estou vendo se ele é zero ou 1
            printf("LIGADO\n");     // Com base nisso estou exibenod uma mensagem
        if(s.ligado==0)
            printf("DESLIGADO\n");
            }
int main(){                     // Aqui é um exemplo de nós utulizando a nossa função
        struct status ESTADO;   // Criei uma outra struct ESTADO
            ESTADO.ligado = 1;  // ESTADO é dessa struct e ligado é da struct inicial e coloquei 1 no valor desse campo;
            check_status(ESTADO);// Aqui chamei a função;
            system("pause");
            return 0;
}                               /* Então tratamos o campo de bit como se fosse
                                   um campo da estrutura normal só que ele está
                                   limitado pelo tamanho que é o comprimento dele
                                   a quais valores você pode colocar ali dentro
                                   Portanto estamos gerenciando melhor a memória
                                   que temos com o campo de bits*/
