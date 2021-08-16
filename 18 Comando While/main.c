#include <stdio.h>
#include <stdlib.h>

int main()
{
    #include <stdio.h>
#include <stdlib.h>

int main()
{
 /* COMANDO DE REPETIÇÃO
 O comando while:
 permite executar, repetidamente, um conjunto de comandos
 de acordo com uma condição

 //FORMA GERAL:
    while(condição V ou F){ -> V Executo comando;
        conjunto de comandos
    } -> F Saio do comando;
*/

    int a, b;
    printf("Digite dois valores inteiros: ");
    scanf("%d %d",&a,&b);
        while(a < b){
              a++;               // a--;  CUIDADOD Loop infinito; A CONDIÇÃO PRECISA SE TORNAR FALSA EM ALGUM MOMENTO */
              printf("%d ", a ); // se esquecer de colocar a++( mudar os valores da condição ) Loop Infinito;
        }                        // SE inverter esses comandos Loop infinito;
    printf("Fim do programa. \n");

    int c, d;
    printf("Digite dois valores inteiros: ");
    scanf("%d %d",&c,&d);
        while(c < d && c > 0){// POSSO COLOCAR CONDIÇÕES COMPLEXAS DENTRO DA CONDIÇÃO DO WHILE
              c++;            // NÃO ESQUECER DAS CHAVES
              printf("%d ", c );
    }
    printf("Fim do programa. \n");

        system("pause");
        return 0;
}

    return 0;
}
