#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
   //FORMA GERAL
   valor1 "operador_relacional" valor2;
   // RESULTADO DA COMPARA��O
   0: a compara��o � verdadeira;
   1: a copara��o � falsa;
   //OPERADORES RELACIONAIS
   >  "maior do que"
   >= "maior ou igual"
   <  "menor do que"
   <= "menor ou igual"
   == "igual a" // N�o confundir com = que � atribui��o;
   != "diferente de "
   */


   int x = 5, y = 3;
    printf("Resultado = %d \n", x> 4 );
    printf("Resultado = %d \n", x< y );
    printf("Resultado = %d \n", x >= y + 2);
    printf("Resultado = %d \n", x <= 6);
    printf("Resultado = %d \n", x == 4 );
    printf("Resultado = %d \n", x = 4 );//ERRADO AQUI ESTOU FAZENDO UMA ATRIBUI��O;
    printf("Resultado = %d \n", x - 2 != y);




   system("pause");
    return 0;
}
