#include <stdio.h>
#include <stdlib.h>

int main()
{
    #include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    O comando do-While:
    permite executar, repetidamente e AO MENOS UMA VEZ, um
    conjunto de comandos de acordo com uma condi��o;
    Diferen�a em while e do while:
    do while: a condi��o � testada s� so final ent�o ao menos uma vez exeecuta o conjunto de comando
    while: se a condi��o for falsa n�o executa;
    //FORMA GERAL:

    do{
        conjunto de comandos
    }while(condi��o);

    */
    int a, b;
    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &a, &b);
    do{
            printf("%d \n",a);
            a++;//a--; OU ESQUECER O VALOR DE a++; GERA LOOP INFINITO;

    }while(a < b);
    printf("Fim do Programa \n");


    int a1, b1;
    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &a1, &b1);
    do{
            printf("%d \n",a1);
            a1++;

    }while(a1 < b1 && a > 0);// POSSO COLOCAR UMA CONDI��O MAIS COMPLEXA DENTRO DO WHILE;
    printf("Fim do Programa \n");


    // ONDE USAR DO WHILE - MENU DE OP��ES;

    int i;
    do{
        printf("Escolha uma opcao: \n");
        printf("(1)Opcao 1\n");
        printf("(2)Opcao 2\n");
        printf("(3)Opcao 3\n");
        scanf("%d ", &i);
      }while((i < 1) || (i > 3));
      printf("Voce escolheu a Opcao %d",i);

    return 0;

}

    return 0;
}
