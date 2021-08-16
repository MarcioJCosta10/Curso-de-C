#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x  = 10;
    int x1 = ++x;
    int y  = 10;
    int y1 = ++y;
    int x2 = 20;
    int x3 = --x2;
    int y2 = 20;
    int y3 = --y2;


    printf("x e x1 = %d %d \n", x, x1);
    printf("y e y1 = %d %d \n", y, y1);
    printf("x2 e x3 = %d %d \n", x2, x3);
    printf("y2 e y3 = %d %d \n", y2, y3);

   int *m; // variável tipo ponteiro
   int cont = 100;//variavel
   int q;//variavel

   m = &cont;//variavel m recebe o endereço da variavel count

   q = *m;// q recebe o valor de cont que está dentro de m


    printf("m e conta e q  = %d %d %d\n", m, &cont, q);



    return 0;
}
