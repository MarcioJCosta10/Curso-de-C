#include <stdio.h>
#include <stdlib.h>

           /* "O pad�o C99 "
            O padr�o ISO/IEC 9899:1999, informalmente conhecido como C99, � uma revis�o
            da vers�o do ANSI de 1989 da linguagem C.
            Trouxe uma s�rie de recursos �teis a linguagem C
            - Coment�rios com "//"
            - O tipo long long
            - Declara��es de variavies dentro do for
            - Composi��o literais
            - etc
            */


        // DETECTANDO A VERS�O DO COMPILADOR
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
