#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* Formato: scanf("tipos de entrada", variaveis);
     char letra;
     int nro;
     float n ;
     double d;
     scanf("%c",&letra);
     scanf("%d",&nro);
     scanf("%f",&n);
     scanf("%f",&d);

*/
    int nro;
    printf("Digite um numero: ");
    scanf("%d",&nro);
    printf("Numero digitado: %d\n", nro);

    int nro1;
    float f;
    double;
    printf("Digite  dois numeros: ");
    scanf("%d%f",&nro1,&f);
    printf("Numeros digitados: %d e %f  \n", nro1, f);



    system("pause");
    return 0;
}
