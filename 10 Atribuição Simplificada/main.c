#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*atribuição simplificada
    variavel "operação=" expressão;// SIMPLIFICADA
    variavel = variavel "operação" expressão; // EM GERAL*/

    //SOMA SIMPLIFICADA
        int x = 10, y = 10;
        int z = 2;
        x = x + z;
        printf("x = %d\n", x);
        y += z ; // y = y + z;
       /*

          -=   ;// y = y - z;
          *=   ;// y = y * z;
          /=   ;// y = y / z;
          %=   ;// y = y % z;


           */


        printf("y = %d\n",y);

        system("pause");

    return 0;
}
