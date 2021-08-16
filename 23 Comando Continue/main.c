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
    Interromper a repetição atual de qualquer
    comando de laço (for, while, do-while),
    e passa para a proxima repetição;

    //Forma geral
    repetição(condição1){
        if(condição2)
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
        if(a==5)             // CONTINUE MANDA VOLTAR PARA O LAÇO
            continue;       //QUANDO A FOR IGUAL A 5 ELE VAI IGNORAR O
        printf("%d ", a);   //COMANDO PRINTF ABAIXO E VOLTA PARA A CONDIÇÃO 5 NÃO SERÁ IMPRESSO

        }



    return 0;
}

    return 0;
}
