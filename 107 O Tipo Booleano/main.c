#include <stdio.h>
#include <stdlib.h>

                "O Tipo boleano"

    Um tipo booleano pode assumir dois valores
    - Verdadeiro (true)
    - Falso (false)

    - Na linguagem ANSI-C  n�o existe o tipo de dado booleano
    Para armazenar esse tipo de informa��o. Usa-se a vari�vel
    (int) numero inteiro

    Valor 0: Significa Falso
    Valor + ou  : Significa Verdadeiro


    O tipo Booleano "_Bool" foi adicionado a inguagem C99
    Ele tamb�m pode ser usado pela macro correspondente bool

    Tamb�m foi adicionada a biblioteca "stdbool.h" por motivos de
    compatibilidade

    "Valores suportados"
    true (verdadeiro) com valor igual a 1
    false (falso) com valor igual a 0



#include <stdbool.h>


int main()
{
    _Bool b = true; //Verdadeiro
    b = false; //falso
    bool x = 1; //verdadeiro

    return 0;
}



