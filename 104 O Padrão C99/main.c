#include <stdio.h>
#include <stdlib.h>

           /* "O padão C99 "
            O padrão ISO/IEC 9899:1999, informalmente conhecido como C99, é uma revisão
            da versão do ANSI de 1989 da linguagem C.
            Trouxe uma série de recursos úteis a linguagem C
            - Comentários com "//"
            - O tipo long long
            - Declarações de variavies dentro do for
            - Composição literais
            - etc
            */


        // DETECTANDO A VERSÃO DO COMPILADOR
int main()
{
    #ifndef _ _STD_VERSION_ _
        printf("Versao: C89\n");
    #else
        #if(_ _STD_VERSION_ _ == 199409L)
            printf("Versao C 94\n");
        #endif
        #if(_ _STD_VERSION_ _ == 199901L)
        printf("Versao C 99\n");
        #endif
    #endif


    return 0;
}
