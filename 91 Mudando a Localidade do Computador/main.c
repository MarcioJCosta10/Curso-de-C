#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

    /*
            "Mudando a Localidade do Computador"
            - Sempre que usamos a função "printf()"
            nós evitamos usar acentuação porque o
            "padrão americano" não suporta caracteres
            acentuados.

            - Podemos instalar a "localidade do sistema"
            especificado, ou apenas uma parte dela, como
            a nova localidade da linguagem C usando a função
            "setlocale()"

            "Forma Geral"
            char* setlocale(int categoria, const char* local);

            "Parametros"
            -categoria é uma das macros definidas
            para a localidade

            - "local"  é o identificador de localidade
            do sistema especificado.

            "Retorno"
            -"NULL": no caso de erro .
            ou
            - Um ponteiro para uma string contendo a
            identificação da nova localidade.


        Vamos ver como configurar:
            Os valores possíveis de macro para a categoria são:
                - LC_ALL: Afeta todo o local da linguagem
                - LC_COLATTE: Afeta as funções "str coll()" e "strxfrm()" que trabalham com strings
                - LC_CTYPE: Afetas as funções que trabalham com "caracteres"
                - LC_MONETARY: Afeta a informação de "formatação monetária"
                - LC_NUMERIC: Afeta a "formatação numerica" da localidade C
                - LC_TIME: Afeta a função de formatação de "data e hora strftime()"

                "Local" é um valor específico do sistema.
                Porém, dois valores sempre existirão:
                - C: para a localidade minima da linguagem
                - "": localidade- padrão do sistema






*/

            // EXEMPLO DE USO:



int main(){
    float f = 3.45;
    time_t tempo;
    struct tm *infotempo;
    char texto[80];
    time(&tempo);
    infotempo = localtime(&tempo);

    printf("ALÔ Mundo!\n");
    printf("Valor de f = %f\n",f);
    strftime(texto,80,"Data: %A, %d/%b/%Y",infotempo);
    puts(texto);
    printf("\n\n");
    setlocale(LC_ALL, "ptb"); // Muda a localidade
    printf("ALÔ Mundo!\n");
    printf("Valor de f = %f\n",f);
    strftime(texto,80,"Data: %A, %d/%b/%Y",infotempo);
    puts(texto);

    system("pause");
    return 0;
}
