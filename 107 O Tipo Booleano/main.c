#include <stdio.h>
#include <stdlib.h>

                "O Tipo boleano"

    Um tipo booleano pode assumir dois valores
    - Verdadeiro (true)
    - Falso (false)

    - Na linguagem ANSI-C  não existe o tipo de dado booleano
    Para armazenar esse tipo de informação. Usa-se a variável
    (int) numero inteiro

    Valor 0: Significa Falso
    Valor + ou  : Significa Verdadeiro


    O tipo Booleano "_Bool" foi adicionado a inguagem C99
    Ele também pode ser usado pela macro correspondente bool

    Também foi adicionada a biblioteca "stdbool.h" por motivos de
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



