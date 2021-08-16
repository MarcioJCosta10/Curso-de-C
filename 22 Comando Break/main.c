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
    Interromper a repetição de qualquer comando de laço (for, while, do-while)
    //FORMA GERAL:
    repetição(condição1){
        if(condição2)
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
