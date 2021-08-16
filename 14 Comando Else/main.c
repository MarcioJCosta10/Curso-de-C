#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    O Comando else:
    Permite executar um segundo conjunto de
    comandos se a condição do if for falsa

    // FORMA GERAL
    if(condição){
        Primeiro conjunto de comandos
    }else{
        Segundo Conjunto de comandos
    }
    */

     int x;
     printf("Digite um valor inteiro: ");
     scanf("%d", &x);
     if(x%2 == 0){
            printf("O valor eh PAR.\n");
        }else//(x%2==1)//ERRADO
        {

        printf("O valor eh IMPAR.\n");
        }
     printf("Fim do Programa. \n");

    system("pause");
    return 0;
}
