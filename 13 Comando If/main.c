#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*O comando if:
    permite executar ou não um conjunto de
    comandos de acordo com uma condição
    */

    /*FORMA GERAL
     if (condição){
        conjunto de comandos
     }
    */

    int x;
    printf("Digite um valor inteiro: ");
    scanf("%d", &x);
        if( x > 0){
          printf("O valor eh positivo %d \n",x);
        }
        if(x % 2 == 0){
                  printf("O valor  eh par %d\n ", x);
                }else
                  printf("O valor eh impar %d\n",x);

        if((x%2==0)||(x < 0)){
                printf("O valor eh par ou negativo\n");
        }else{ printf("Fim do programa\n");

        }

    system("pause");
    return 0;
}
