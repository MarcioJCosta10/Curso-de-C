#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*atribui��o simplificada
    variavel "opera��o=" express�o;// SIMPLIFICADA
    variavel = variavel "opera��o" express�o; // EM GERAL*/

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
