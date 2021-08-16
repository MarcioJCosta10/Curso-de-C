#include <stdio.h>
#include <stdlib.h>
        //RECURS�O EM FUN��ES
void imprime(int n){ // e uma fun��o que eu fiz tamb�m pode chamar outras fun��es, do sistema ou que eu mesmo criei
    int i;
    for(i=0; i<n; i++)
        printf("Linha %d\n",i);
}
        //Ent�o eu posso criar uma Fun��o Fatorial que chama a si pr�prio
        /* Uma fun��o pode, inclusive, chamar a si pr�pria.
           A isso chamamos de recursividade */

    int fatorial(int n1){
        if (n1==0)
            return 1;
        else
            return n1*fatorial(n1-1);
    }

    // FUN��O REMOVE FLOR

    /* Vamos ent�o generalizar a id�ia: Como esvaziar uma vaso
       cotendo N flores? */
    void esvaziarVaso( int flores){
        if(flores > 0 ){
            //remove uma for
            esvaziarVaso(flores -1);// Estou usando uma parte da solu��o para resover meu problema repetidamente/ recusrivamente;
        }

    }
    // Traduzindo:
    0! = 1;
    N! = N *(N-1)!; // Aqui tenho a minha genereliza��o// Problemas recusrivo a grande dificuldade � chegar nessa genereliza��o
                    // feito isso aqui n�o � dificil traduzir para C, entender o problema e depois trauzir para linguagem C, assim que se resolve um problema de recurs�o;
    // Traduzindo Para C:

    int fatorial(int N){
        if (N==0)
            return 1;// Se meu N � igual a zero simplismete retorno 1
        else
            return N * fatorial (N-1);// Se n�o retorno n*fatorial(n-1);// estou chamando a fun��o dinovo aqui
            }


int main()/* Vimos que o main() � uma fun��o tamb�m,
             ent�o isso que dizer que ele pode chamar
             outras fun��es, da biblioteca ou criada por mim */
{
        imprime(5);
        printf("Fim do Programa!\n");

    //RECURSIVIDADE
    int x = fatorial(5);
    printf("Valor %d\n",x);

    /* Outro exemplo cl�ssico de fun��o recursiva � o calculo do fatorial de um numero */
    4! = 4*3*3*2*1;
    3! = 3*2*1;
    2! = 2*1;
    1! = 1;

    VAMOS GENERALIZAR COMO N�S FIZEMOS:
     4! = 4*3!;
     3! = 3*2!;
     2! = 2*1!;
     1! = 1*0!;


    0! = 1;
    N! = N *(N-1)!;// Aqui eu tenho a minha regra generalizada do problema



    system("pause");
    return 0;
}
