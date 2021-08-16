
            "Fun��es Matem�ticas de tipo Gen�rico"
    Biblioteca "math.h"
    As fun��es s�o usualmente definidas para o tipo "double"
    No padr�o C99 existem vers�es para os tipos "float" e "long double"
    Para utiliz�-las, basta adicionar o sufixo "f" ou "l" respectivamente, ao nome da fun��o

    "Exemplo calculo da raiz quadrada "

    double sqrt(double valor);
    float sqrtf(float valor);
    long double sqrtl(long double valor);

    Isso � ideal para n�o precisar fazer convers�o de tipo na hora de ter necessidade de precis�o.


    "Problema de multipla fun��es"
    Bom uso das fun��es depende de saber antecipadamente o tipo das vari�veis

    "Alternativa" O que o C99 trouxe?

    Touxe a biblioteca "tgmath.h"
    Que define uma macro de tipo gen�rico para cada uma da fun��o matem�tica

    Um mesmo nome da fun��o pode ser usado para chamar fun��es que acetem diferentes tipos de parametros

    A macro de tipo gen�rico se encarrega de chamar a fun��o cujo tipo � determinado pelo tipo do par�metro passado para a macro

    "Como funciona isso?"
    Por exemplo, a macro "cos()"se comporta a depender do tipo do seu par�mentro, como:

        "cos()" para o tipo double

        "cosf()" para o tipo float

        "cosl()" para o tipo long double

        "ccos()" para o tipo double _Complex

        "ccosf()" para o tipo float _Complex

        "ccosl()" para o tipo long double _Complex

        "cos()" para o tipo int, o qual � convertido implicitamente em double.

        Mas eu n�o preciso saber todas essas fun��es, basta eu saber a fun��o "cos()", n�o importa o tipo da minha vari�vel
        essa fun��o "cos()" se encarrega de verificar o tipo e chamar a fun��o correspondente.





#include <stdio.h>
#include <stdlib.h>
#inclue <tgmath.h>

            // eu vou usar a fun��o sqrt e a minha biblioteca tgmath se encarrega de ver o tipo de dado e chamar a fun��o correspondente para aquele tipo e como se tivesse polimorfismo onde o mesmo nome se encarrega cada tipo.

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
