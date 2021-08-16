#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    //OPERADORES LÓGICOS
    &&  Operador "E"
    ||  Operador "OU"

    //FORMA GERAL
    expessão "operador lógico" expressão

    // RESULTADO DA OPERAÇÃO
    0: FALSO
    1: VERDADEIRO
    */
    /*

    Operador E (&&): o resultado é 1 apenas
    se ambas as expressões também forem 1
    do contrario, o resultado é 0

    */

    int r, x = 5,  y = 3;
    r = (x > 2) && (y > x);
    printf("Resultado = %d\n", r);
    r = (x%2 == 0) && (y > 0);
    printf("Resultado = %d\n", r);
    /*
    Operador OU (||): o resultado é 1 se
    uma das expressões for 1 e 0 se ambas
    as exressões forem 0 será 0
    */

    r = (x > 2) || (y > x);
    printf("Resultado = %d\n", r);
    r = (x%2 == 0) || (y < 0);
    printf("Resultado = %d\n", r);
/*
    //OPERADOR LÓGICO
    ! Operador "NEGAÇÃO"

    //FORMA GERAL
    !(expressão)

    //resultado da operação
    0: se a expressão valer 1
    1: se a expressão valer 0

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

