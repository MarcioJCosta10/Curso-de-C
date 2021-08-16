#include <stdio.h>
#include <stdlib.h>

         /*

                "Trabalhando com Campos de Bits"
        - Permite acessar diretamente os bits,
        ou um unico bit, dentro de um byte, sem
        fazer uso dos operadores bit a bit.

        - Trata-se de um tipo especial de membro de
        "Estruturas" e "Uni�es" chamado de "campo de bit"
        ou "bitfield" - Ent�o "Campo de Bit" iremos sempre usar ou dentro
        de uma estrutura ou dentro de uma uni�o.

            Quando eu vou usar isso?
        - Seu uso � extremamente �til quando a quantidade de
        mem�ria para armazenamento de dados � limitada
        "Exemplos"
            - Flags (Para fazer sinaliza��o)
            - Comunica��o de dispositivos de hardware
            - Etc

            "Trabalhando com campo de bit"
            "Forma geral"

            tipo nome_campo : comprimento; // Lembrando que isso aqui � dentro de uma struct ou de uma union

            - O valor do "Comprimento" pode ser um
            n�mero ou uma express�o constante.
            - O "Comprimento" de um "Campo de bit" n�o
            deve exceder o n�mero total de bits do tipo
            da variavel utilizada na declara��o.

            "Importante"
            -S� podem ser declarados como do tipo "int",
            sendo poss�vel utilizar os modificadores
            "signed" e "unsigned".

            "Temos que tomar cuidado:"
            - Se ele for do tipo "int" ou "signed int", //(Eu tenho ue lembrar que tem o bit de sinal)
            ent�o eu preciso que seu comprimento seja maior do que
            UM (1) por causa do bit do sinal // Porque o sistema automaticamente j� est� reservando um bit por causa do sinal da minha varialve
                                             //Se ele for do tipo "int" ou "signed int" eu preciso de tamanho 2 no m�nimo


            "Exemplo"
            struct status {
                unsigned int ligado:1; // Valor de 0 ou 1;
                signed int valor: 4; // valores entre -8 e 7 // Lembrando que um bit aqui � do signed ent�o eu tenho 3 bits
                unsigned int :3;  // SEM NOME!! COMPLETA  8 BITIS; // N�o coloquei nome e ele � simplismente para completar os 8 bits
            };
            "Poss criar Campo de Bits SEM NOME"
            -S�o �teis simplismente para preencher uma estrutura
            de modo a fazer com que ela esteja adequada
            a um layout especificado.    // Por exemplo a minha structs status somando todos os campos completou os 8 bits 1 + 4 + 3 os ultimos 3 mesmo que eu n�o precise � s� para preencher quanto faltava
            - Como n�o coloque nome N�o podem ser acessado ou inicializados. // S� para completar espa�o.

             "Tamb�m Posso fazer Campo de Bits com Comprimento ZERO"
             - N�o podem possuir nome;
             - Vou fazer apenas por sua fun��o de alinhamento dos bits.
             Ele faz com que o pr�ximo campo de bits seja
             alinhado com o proximo byte de mem�ria do mesmo tipo do campo de bits. // Se tiver espa�o sobrando ent�o ignora esse espa�o e come�a no pr�ximo byte s� para n�o ficar perdido em espa�o
             Em outras palavras, um "Campo de bits"  de comprimento "ZERO" indica que
             nenhum "Campo de bits" adicional deve ser colocado dentro desse byte


             "Endere�amento de Campos de Bits" // Blz tenho um campo de bits que � uma parte de uma vari�vel, ent�o se � uma parte de uma variavel n�o pode ser endere�ado
             - N�o possuem endere�os e, como tal, n�o podem ser usados // Um endere�o � associado a uma var�vel e n�o a um peda�o de uma vari�vel
               com o operador de endere�os (&)
             - N�o podemos ter ponteiros ou arrays deles
             - O Operador "sizeof"  tamb�m n�o pode ser utilizado


             "Exemplo completo"*/


struct status {
        unsigned int ligado:1;
        signed int valor: 4;
        unsigned int :3;
        };

void check_status(struct status s){ // Criei uma fun��o check_status que vai receber minha struct com um nome s e
                                    // Vai verificar se o compo de bits est� ligado ou desligado
                                    //Lembrando que o campo de bits ligado s� tem um bit e � sem sinal ent�o assume valores 0 ou 1
        if (s.ligado == 1)          // Ent�o simplismente estou vendo se ele � zero ou 1
            printf("LIGADO\n");     // Com base nisso estou exibenod uma mensagem
        if(s.ligado==0)
            printf("DESLIGADO\n");
            }
int main(){                     // Aqui � um exemplo de n�s utulizando a nossa fun��o
        struct status ESTADO;   // Criei uma outra struct ESTADO
            ESTADO.ligado = 1;  // ESTADO � dessa struct e ligado � da struct inicial e coloquei 1 no valor desse campo;
            check_status(ESTADO);// Aqui chamei a fun��o;
            system("pause");
            return 0;
}                               /* Ent�o tratamos o campo de bit como se fosse
                                   um campo da estrutura normal s� que ele est�
                                   limitado pelo tamanho que � o comprimento dele
                                   a quais valores voc� pode colocar ali dentro
                                   Portanto estamos gerenciando melhor a mem�ria
                                   que temos com o campo de bits*/
