#include <stdio.h>
#include <stdlib.h>

int main()
{
   #include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Aninhamento de repetições:
    Trata-se do uso de um comando de repetição
    (while, for ou do while) dentro de outro.

    //EXEMPLO:
        repetição(condição1){
            conjunto de comandos;
            repetição(condição2){
            conjunto de comandos;
            repetição...
            }
        }
     */
     int i,j;
        for(i=1; i<10; i++){
            for(j=1; j<10; j++){
                if(i==j)
                    printf("1 ");
                else
                    printf("0 ");
                }
            printf("\n");

        }
        printf("\n");
        //USANDO WHILE
        int a, b;
        a =1;
        while(a < 10){
            b=1;
            while(b < 10){
                if(a==b)
                    printf("1 ");
                    else
                    printf("0 ");

                b++;
            }
            printf("\n");
            a++;

        }
     printf("\n");
         int c, d;
        c =1;
        while(c < 10){
            d=1;
            while(d < 10){
                if(c==d)
                    printf("1 ");
                    else
                    printf("0 ");

                d++;
            }
            printf("\n");
            c++;

        }

     system("pause");
    return 0;
}

    return 0;
}
