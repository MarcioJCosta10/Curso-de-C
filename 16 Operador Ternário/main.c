#include <stdio.h>
#include <stdlib.h>


int main()
{
/*
Operador Tern�rio ?
� tipicamente utilizado para fazer atribui��es condicionais.

//FORMA GERAL:

variavel = condi��o ? express�o1 : express�o2;
              V F          V          F

*/
int x,y,z;
    printf("Digite x :\n");
    scanf("%d",&x);
    printf("Digite y : \n");
    scanf("%d",&y);

    z = x > y ? x : y ;
    printf(" o Maior eh %d\n", z);

    //NESSE CASO AO INVES DA EXPRESS�O USAMOS O COMANDO PRINTF DIRETO
    int x1,y1;
    printf("Digite x1 :\n");
    scanf("%d",&x1);
    printf("Digite y1 :\n");
    scanf("%d",&y1);

    ( x1 > y1) ? printf("x1 eh o maior.\n"): printf("y1 eh o maior.\n");


    system("pause");
    return 0;
}
