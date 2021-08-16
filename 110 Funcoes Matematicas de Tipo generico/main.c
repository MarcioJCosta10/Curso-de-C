
            "Funções Matemáticas de tipo Genérico"
    Biblioteca "math.h"
    As funções são usualmente definidas para o tipo "double"
    No padrão C99 existem versões para os tipos "float" e "long double"
    Para utilizá-las, basta adicionar o sufixo "f" ou "l" respectivamente, ao nome da função

    "Exemplo calculo da raiz quadrada "

    double sqrt(double valor);
    float sqrtf(float valor);
    long double sqrtl(long double valor);

    Isso é ideal para não precisar fazer conversão de tipo na hora de ter necessidade de precisão.


    "Problema de multipla funções"
    Bom uso das funções depende de saber antecipadamente o tipo das variáveis

    "Alternativa" O que o C99 trouxe?

    Touxe a biblioteca "tgmath.h"
    Que define uma macro de tipo genérico para cada uma da função matemática

    Um mesmo nome da função pode ser usado para chamar funções que acetem diferentes tipos de parametros

    A macro de tipo genérico se encarrega de chamar a função cujo tipo é determinado pelo tipo do parâmetro passado para a macro

    "Como funciona isso?"
    Por exemplo, a macro "cos()"se comporta a depender do tipo do seu parâmentro, como:

        "cos()" para o tipo double

        "cosf()" para o tipo float

        "cosl()" para o tipo long double

        "ccos()" para o tipo double _Complex

        "ccosf()" para o tipo float _Complex

        "ccosl()" para o tipo long double _Complex

        "cos()" para o tipo int, o qual é convertido implicitamente em double.

        Mas eu não preciso saber todas essas funções, basta eu saber a função "cos()", não importa o tipo da minha variável
        essa função "cos()" se encarrega de verificar o tipo e chamar a função correspondente.





#include <stdio.h>
#include <stdlib.h>
#inclue <tgmath.h>

            // eu vou usar a função sqrt e a minha biblioteca tgmath se encarrega de ver o tipo de dado e chamar a função correspondente para aquele tipo e como se tivesse polimorfismo onde o mesmo nome se encarrega cada tipo.

int main()
{
    int x = 2;

    float y = 2.0;
    _Complex double z = 1.0 + 0.5 * _Complex_I;
    printf("%f\n",sqrt(x));// int -> chama sqrt()
    printf("%f\n",sqrt(y)); // float -> chama sqrtf()
    z = sqrt(z); // complexo -> chama csqrtf()
    printf("%f + %f i\n", creal(z),cimag(z));



    return 0;
}
