#include <stdio.h>
#include <stdlib.h>

int main()
{
    #include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Comando continue:
    Interromper a repeti��o atual de qualquer
    comando de la�o (for, while, do-while),
    e passa para a proxima repeti��o;

    //Forma geral
    repeti��o(condi��o1){
        if(condi��o2)
            continue;
    }


    */

    int a, b;
    printf("Digite o valr de a \n");
    scanf("%d",&a);
    printf("Digite o valor de b\n");
    scanf("%d", &b);
    while(a<=b){
        a = a+1;
        if(a==5)             // CONTINUE MANDA VOLTAR PARA O LA�O
            continue;       //QUANDO A FOR IGUAL A 5 ELE VAI IGNORAR O
        printf("%d ", a);   //COMANDO PRINTF ABAIXO E VOLTA PARA A CONDI��O 5 N�O SER� IMPRESSO

        }



    return 0;
}

    return 0;
}
