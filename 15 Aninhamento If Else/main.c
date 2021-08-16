#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Aninhamento de if-else:
    Trata-se do uso de outro comando if, ou if-else
    detro de um comando if, ou else
    */
    /*// FORMA GERAL
    if(Condição1 ){
        if (condição2){
        Primeiro conjunto de comandos
        }else{
        Segundo conjunto de comandos
        }
    }else{
        Terceiro conjunto de comandos
    }*/
    //O ELSE OBEDECE O ÚLTIMO COMANDO IF;
    //NÃO PODEMOS COLOCAR DOIS ELSE EM UM MESMO BLOCO;

    int num;
    printf("Digie um numero\n");
    scanf("%d", &num);
    if(num == 0){
        printf("o numero eh igual a 0. \n");
    } else{
        if(num > 0)
            printf("O numero eh maior que 0.\n");
        else
            printf("O numero eh menor que 0.\n");
    }
    system("pause");
    return 0;
}
