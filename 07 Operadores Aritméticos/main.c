#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    soma:           +
    subtração:      -
    multiplicação:  *
    divisão:        /
    resto:          %

   */

    int x1, x2 = 9, x3 = 12;
    char ch1, ch2 = 'O', ch3 = 'A';
    float f1, f2 = 5.25, f3 = 10.5;
        //x1 = x2 + x3;
        //x1 = x3 - x2;
        //x1 = x3 * x2;
        //x1 = x2 / 2;
        //x1 = x2 % 2;
        x1 = x2 % 5;
    ch1 = ch2 + ch3;
        //f1 = f2 + f3;
        //f1 = -f2;
        //f1 = 3 * f2;
        //f1 = x2 / 2;
        f2 = x2 / 2.0 ;
        f1 = f2 + 10 / 2.0;
        //f1 = (f2 + 10) / 2.0;
    printf("x1 = %d \n", x1);
    printf("ch1 = %c (%d)\n", ch1,ch2);
    printf("f1 = %f \n", f1);
    printf("f2 = %f \n", f2);



   system("pause");
   return 0;

}
