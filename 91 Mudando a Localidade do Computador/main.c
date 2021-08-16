#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

    /*
            "Mudando a Localidade do Computador"
            - Sempre que usamos a fun��o "printf()"
            n�s evitamos usar acentua��o porque o
            "padr�o americano" n�o suporta caracteres
            acentuados.

            - Podemos instalar a "localidade do sistema"
            especificado, ou apenas uma parte dela, como
            a nova localidade da linguagem C usando a fun��o
            "setlocale()"

            "Forma Geral"
            char* setlocale(int categoria, const char* local);

            "Parametros"
            -categoria � uma das macros definidas
            para a localidade

            - "local"  � o identificador de localidade
            do sistema especificado.

            "Retorno"
            -"NULL": no caso de erro .
            ou
            - Um ponteiro para uma string contendo a
            identifica��o da nova localidade.


        Vamos ver como configurar:
            Os valores poss�veis de macro para a categoria s�o:
                - LC_ALL: Afeta todo o local da linguagem
                - LC_COLATTE: Afeta as fun��es "str coll()" e "strxfrm()" que trabalham com strings
                - LC_CTYPE: Afetas as fun��es que trabalham com "caracteres"
                - LC_MONETARY: Afeta a informa��o de "formata��o monet�ria"
                - LC_NUMERIC: Afeta a "formata��o numerica" da localidade C
                - LC_TIME: Afeta a fun��o de formata��o de "data e hora strftime()"

                "Local" � um valor espec�fico do sistema.
                Por�m, dois valores sempre existir�o:
                - C: para a localidade minima da linguagem
                - "": localidade- padr�o do sistema






*/

            // EXEMPLO DE USO:



int main(){
    float f = 3.45;
    time_t tempo;
    struct tm *infotempo;
    char texto[80];
    time(&tempo);
    infotempo = localtime(&tempo);

    printf("AL� Mundo!\n");
    printf("Valor de f = %f\n",f);
    strftime(texto,80,"Data: %A, %d/%b/%Y",infotempo);
    puts(texto);
    printf("\n\n");
    setlocale(LC_ALL, "ptb"); // Muda a localidade
    printf("AL� Mundo!\n");
    printf("Valor de f = %f\n",f);
    strftime(texto,80,"Data: %A, %d/%b/%Y",infotempo);
    puts(texto);

    system("pause");
    return 0;
}
