#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    //OPERADORES L�GICOS
    &&  Operador "E"
    ||  Operador "OU"

    //FORMA GERAL
    expess�o "operador l�gico" express�o

    // RESULTADO DA OPERA��O
    0: FALSO
    1: VERDADEIRO
    */
    /*

    Operador E (&&): o resultado � 1 apenas
    se ambas as express�es tamb�m forem 1
    do contrario, o resultado � 0

    */

    int r, x = 5,  y = 3;
    r = (x > 2) && (y > x);
    printf("Resultado = %d\n", r);
    r = (x%2 == 0) && (y > 0);
    printf("Resultado = %d\n", r);
    /*
    Operador OU (||): o resultado � 1 se
    uma das express�es for 1 e 0 se ambas
    as exress�es forem 0 ser� 0
    */

    r = (x > 2) || (y > x);
    printf("Resultado = %d\n", r);
    r = (x%2 == 0) || (y < 0);
    printf("Resultado = %d\n", r);
/*
    //OPERADOR L�GICO
    ! Operador "NEGA��O"

    //FORMA GERAL
    !(express�o)

    //resultado da opera��o
    0: se a express�o valer 1
    1: se a express�o valer 0

    */


    r = !(x > 2);
    printf("Resultado = %d\n", r);

    r = !((x > 7) && (y > x));
    printf("Resultado = %d\n", r);


    // TABELA VERDADE
    A  B  !A !B A&&B A||B
    0  0   1  1   0   0
    0  1   1  0   0   1
    1  0   0  1   0   1
    1  1   0  0   1   1





    system("pause");
    return 0;
}

