#include <stdio.h>
#include <stdlib.h>

int main()
{
    #include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    O Comando for:
    Permite executar, repetidamente, um conjunto de comandos
    de acordo com uma condi��o

    //FORMA GERAL:

     for (comando de inicializa��o; condi��o; incremento das variaveis usadas na condi��o){

        conjunto de comandos
    }
    */
    int a, b, c;
    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &a, &b);
        for(c = a; c <= b; c++){//a<= b ou c--; Loop infinito a tem c tem que fazer parte do condi��o
            printf("%d ",c);
        }
    printf("Fim do Programa \n");

    int a1, b1, c1;
    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &a1, &b1);
        for(c1 = a1; c1 <= b1 && c1 > 0; c1++){// posso colocar uma condi��o mais complicada dentro do for;
            printf("%d ",c1);
        }
    printf("Fim do Programa \n");

int i, j;
    for(i = 0, j = 10; i < j; i++, j-- ){// POSSO COLOCAR MAIS UMA VARIAVEL PARA INICIALIZA��O DENTRO DO FOR;
            printf("i = %d, j = %d \n",i,j);
        }
    printf("Fim do Programa \n");


    system("pause");
    return 0;
}

    return 0;
}
