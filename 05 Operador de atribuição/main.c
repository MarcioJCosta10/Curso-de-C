#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    // Formato: variável recebe  = uma expressão;
    int x = 5, y;

    y = x;
    y = x + 10;

    Atribuição Multipla
    todas variaveis inicializadas com mesmo valor
    int x, y, z;
    x = y = z = 10

    // 5 = y  ERRADO
    //x+10 = y ERRADO
   */
//    CUIDADO COM TIPOS DE VARIAVEIS DIFERENTE
   int x = 97;
   char ch1, ch2 = 'A';
   ch1 = x;
   printf("ch1 = %c \n", ch1);
   x = ch2;
   printf("x = %d \n\n", x);

   int x1 = 833;
   float f1, f2 = 5.25;
   f1 = x1;
   printf("f1 = %f \n", f1);
   x1 = f2;
   printf("x1 = %d \n\n",x1);

    float f = 97.3;
    char ch3, ch4 = 'A';
    ch3 = f;
    printf("ch3 = %c \n",ch3);
    f = ch4;
    printf("f = %f \n\n", f);


   system("pause");
   return 0;
}
