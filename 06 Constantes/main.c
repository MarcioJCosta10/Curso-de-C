#include <stdio.h>
#include <stdlib.h>
# define PI 3.1415
//segunda forma � usar a # define - ocorre uma substitui��o na ora de compilar

int main()
{
    //int nro = 10;
    // primeira forma de declarar a  constante

    const int nro = 10;// vai pra dentro da mem�ria
    int soma = nro + 1;
    printf("Constante %d \n", soma);

    // nro = 12 ERRADO N�O PODE MUDAR CONSTANTES

    float f = PI + 1;
    printf("PI = %f\n ", PI);
    //PI = 12.4 ERRADO N�O PODE MUDAR CONSTANTE

    system("pause");
    return 0;
}
