#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
   //FORMA GERAL
   valor1 "operador_relacional" valor2;
   // RESULTADO DA COMPARAÇÃO
   0: a comparação é verdadeira;
   1: a coparação é falsa;
   //OPERADORES RELACIONAIS
   >  "maior do que"
   >= "maior ou igual"
   <  "menor do que"
   <= "menor ou igual"
   == "igual a" // Não confundir com = que é atribuição;
   != "diferente de "
   */


   int x = 5, y = 3;
    printf("Resultado = %d \n", x> 4 );
    printf("Resultado = %d \n", x< y );
    printf("Resultado = %d \n", x >= y + 2);
    printf("Resultado = %d \n", x <= 6);
    printf("Resultado = %d \n", x == 4 );
    printf("Resultado = %d \n", x = 4 );//ERRADO AQUI ESTOU FAZENDO UMA ATRIBUIÇÃO;
    printf("Resultado = %d \n", x - 2 != y);




   system("pause");
    return 0;
}
