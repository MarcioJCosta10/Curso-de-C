#include <stdio.h>
#include <stdlib.h>

int main()
{
    #include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Comando break:
    Interromper a repeti��o de qualquer comando de la�o (for, while, do-while)
    //FORMA GERAL:
    repeti��o(condi��o1){
        if(condi��o2)
          break;
    }
    */

    int a, b;
    printf("Digite o valr de a \n");
    scanf("%d",&a);
    printf("Digite o valor de b\n");
    scanf("%d", &b);
    while(a<=b){
        a = a+1;
        if(a==5)
            break;
        printf("%d ", a);
        }
    system("pause");
    return 0;
}

    return 0;
}
