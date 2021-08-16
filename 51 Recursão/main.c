#include <stdio.h>
#include <stdlib.h>
        //RECURSÃO EM FUNÇÕES
void imprime(int n){ // e uma função que eu fiz também pode chamar outras funções, do sistema ou que eu mesmo criei
    int i;
    for(i=0; i<n; i++)
        printf("Linha %d\n",i);
}
        //Então eu posso criar uma Função Fatorial que chama a si próprio
        /* Uma função pode, inclusive, chamar a si própria.
           A isso chamamos de recursividade */

    int fatorial(int n1){
        if (n1==0)
            return 1;
        else
            return n1*fatorial(n1-1);
    }

    // FUNÇÃO REMOVE FLOR

    /* Vamos então generalizar a idéia: Como esvaziar uma vaso
       cotendo N flores? */
    void esvaziarVaso( int flores){
        if(flores > 0 ){
            //remove uma for
            esvaziarVaso(flores -1);// Estou usando uma parte da solução para resover meu problema repetidamente/ recusrivamente;
        }

    }
    // Traduzindo:
    0! = 1;
    N! = N *(N-1)!; // Aqui tenho a minha generelização// Problemas recusrivo a grande dificuldade é chegar nessa generelização
                    // feito isso aqui não é dificil traduzir para C, entender o problema e depois trauzir para linguagem C, assim que se resolve um problema de recursão;
    // Traduzindo Para C:

    int fatorial(int N){
        if (N==0)
            return 1;// Se meu N é igual a zero simplismete retorno 1
        else
            return N * fatorial (N-1);// Se não retorno n*fatorial(n-1);// estou chamando a função dinovo aqui
            }


int main()/* Vimos que o main() é uma função também,
             então isso que dizer que ele pode chamar
             outras funções, da biblioteca ou criada por mim */
{
        imprime(5);
        printf("Fim do Programa!\n");

    //RECURSIVIDADE
    int x = fatorial(5);
    printf("Valor %d\n",x);

    /* Outro exemplo clássico de função recursiva é o calculo do fatorial de um numero */
    4! = 4*3*3*2*1;
    3! = 3*2*1;
    2! = 2*1;
    1! = 1;

    VAMOS GENERALIZAR COMO NÓS FIZEMOS:
     4! = 4*3!;
     3! = 3*2!;
     2! = 2*1!;
     1! = 1*0!;


    0! = 1;
    N! = N *(N-1)!;// Aqui eu tenho a minha regra generalizada do problema



    system("pause");
    return 0;
}
