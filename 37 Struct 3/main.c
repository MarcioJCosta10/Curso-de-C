#include <stdio.h>
#include <stdlib.h>

int main()
{
    //ARRAYS DE STRUCT
    Vimos que estruturas ajuda muito na organiza��o de dados:
        /* Voltemos ao problema de cadastro de pessoas
         * Vimos que o uso de esruturas facilita muito a
         * vida do Programador na manipula��o dos dados do
         * programa. Imagine ter que declarar 4 cadastros,
         * para 4 pessoas diferentes
         */
         char nome1[50],nome2[50],nome3[50],nome4[50];
         int idade1,idade2,idade3,idade4;
         char rua1[50],rua2[50],rua3[50],rua4[50];
         int numero1,numero2,numero3,numero4;

         /EXTREMAMENTE TRABALHOSO/

        // COM STRUCT

        struct pessoa {
            char nome[50], rua[50];
            int idade, numero;
            };

    int main(){
        struct pessoa p1,p2,p3,p4;// simplismente

    //EU POSS FACILITAR ISSO AINDA MAIS
    /* A STRUCT � um tipo de dado , e portanto a linguagem C suporta a
    declara��o de um array de estrutura*/
    struct pessoas p[4]; // PARA UM TIPO QQ EU POSSO CRIAR UM VETOR PARA AQUELE TIPO
                        // CADA POSI�O DO MEU ARRAY POSSUI OS CAMPOS nome, rua, idade, numero;

    //VAMOS VER COMO USAR ENT�O:

    /*Acesso aos campos do array de strucut:
    Em um array de estrutras, o operador de ponto (.)
    vem depois dos colchetes do indice do array[] P[INDICE].CAMPO*/
    struct pessoa p[4];// indice 4// SE FOSSE MATRIZ TERIA DOIS INDCES
    p[0].idade = 30;//
    strcpy(p[1].nome,"ricardo");// Copiar ricardo par o campo nome de p1;
    p[2].numero = p[0].numero - 1;

    /*A combina��o de arrays e estruturas permite que se manipule de modo muito mais
    pr�tico varias vari�veis de estrutura*/
    struct pessoa p[4];
    int i;
        for (i=0; i<4; i++){// aqui vou ler os dados do teclado
            gets(p[i].nome);
            scanf("%d",&p[i].idade);
            gets(p[i].rua);
            scanf("%d",&p[i].numero);



        };






    */





    };











    system("pause");
    return 0;
}
