#include <stdio.h>
#include <stdlib.h>

int main()
{// Tipos de variaveis que podemos declarar

    "Tipos basicos": char, int, float, double;
    int x;
    float f;

    "Tipos Compostos homog�neos": array ou matriz
    int v[5];
    char nome[50];
    int v[5][5];
    char nome[50][50];


    POR�M:

        A linguagem C nos permite tamb�m criar nossos pr�prios TIPOS de
        vari�veis.
        Um deles � a struct tamb�m chamada de ESTRUTURA

        //FORMA GERAL
        struct nome_struct{
            tipo1 nome1;// declara��o das variaveis que ser�o os campos da estrutura
            tipo2 nome2;
            ...
            tipoN nomeN;
        };

        //Definindo uma estrutura: Antes do main pois o escopo DA STRUCT � global;
        struct pessoa{
            char nome[50], rua[50];
            int idade, numero;
            };
        int main(){
            //declara��o de vari�veis
            char nome[50], rua[50];
            int idade, numero;
            //declara��o de uma variavel struct
            struct pessoa p;// Aqui p � o nome da vari�vel
                            // Minha estrutura tem os mesmos campos na declara��o de variaveis acima
                            // O conceito de estrutura � a possibilidade de empacotar um conjunto de dados que utilizo dentro do programa
                            // Ao inv�s de usar as 4 vairiaveis como acima criei uma unica variavel p com todos esses dados
                            // Ao inves de gerenciar 4 vari�veis vou gerenciar uma s�
            }


        //definindo uma estrutura:

          struct pessoa{
            char nome[50], rua[50];
            int idade, numero;
            };
        int main(){
            /* Cada campo (vari�vel) da struct pode ser
            acessada usando o operador de "." (ponto) */
            char nome[50], rua[50];
            int idade, numero;

            struct pessoa p;
            p.idade = 31; // Comando de atribui��o
            scanf("%d",&p.numero); //Comando de leitura
            gets(p.nome); // Comando de leitura
            p.numero = p.numero + p.idade - 100; // Express�o

         //Outra vantagem: menos variavei para gerenciar
         struct pessoa{
            char nome[50], rua[50];
            int idade, numero;
            };
        int main(){
        //SEM STRUCT

            char nome1[50],nome2[50],nome3[50],nome4[50];
            int idade1,idade2,idade3,idade4;
            char rua1[50],rua2[50],rua3[50],rua4[50];
            int numero1,numero2,numero3,numero4;

        //COM STRUCT
        struct pessoa p1, p2, p3, p4;// Em cada vairiavel eu tenho as informa��es de cada pessoa;
                                     // Fica mais f�cil gerenciar pois tenho que declarar menos variaveis;
        struct pessoa p;


        //EU POSSO TER VARIAS ESTRUTURAS DENTRO DO MEU PROGRAMA
        struct ponto2D{
            int x,y;
        };
          struct ponto3D{
            int x,y,z;
        };

        int main(){
            /*Estruturas diferentes podem ter campos com o mesmo nome*/
            /*Como est�o entre chaves tem escopo diferente uma n�o enxerga a outra*/
            struct ponto2D p2;
            struct ponto3D p3;
            p2.x=10;
            p3.x=12;
            printf("%d %d\n",p2.x,p3.x);



        }


    system("pause");
    return 0;
}
