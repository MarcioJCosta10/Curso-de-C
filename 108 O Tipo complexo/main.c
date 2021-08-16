        /"O tipo Complexo"
        Outro tipo de dado adicionado a linguagem C padr�o 99 foi
        o tipo que fornece suporte para numeros complexos

        Para isso usamos a palavra-chave "_Complex"
        Ela modifica um tipo de ponto-flutuante
        (float, double, e long double) para que ele se comporte
        como um par de n�meros que defina um tipo complexo

        "Exemplo"

        -Complex float z1;

        Nova biblioteca "complex.h"  Fornece suporte para opera��es com numeros
        complexos, como as seguintes macros

        "complex "
        macro que equivale a "_Complex"

        "_Complex_I"
        macro que define a parte imagin�ria

        "I"
        macro que equivale a "_Complex_I"

        "Exemplo"
        _Complex float z1 = 2.0 + 2.0 * _Complex_I;
        _Complex float z1 = 2.0 + 2.0 * I;
         complex float z1 = 2.0 + 2.0 * _Complex_I;
         complex float z1 = 2.0 + 2.0 * I;


         "A biblioteca complex.h"
         - Fornece fun��es para diversas opera��es sobre n�meros complexos.
         Por exemplo:

             double cimag(double complex z); - Calcula a parte imagin�ria de z
             double creal(double complex z); - Calcula a parte real de z
             double cabs(double complex z);  - Calcula o valor absoluto de z


            "TEMOS QUE TOMAR CUIDADO"

            As fun��es mostradas s�o definidas para o tipo "double complex"
            - Por�m, existem vers�es para "float complex " e "long double complex"
            - Para utiliz�-las basta adicionar o sufixo "f" ou "l", respectivamente ao nome da fun��o

            "Exemplo: calculo do valor absoluto de z"
            double cabs(double complex z);
            float cabsf(float complex z);
            long double cabsl(long double complex z)




"Exemplo"*/

#include<stdio.h>
#include<complex.h>

int main()
{

    _Complex double z1 = 2.0 + 2.0* _Complex_I;
    _Complex double z2 = 1.0 + 5.0* _Complex_I;
    _Complex double z3 = z1 + z2;
    _Complex double z4 = z1 * z2;
    _Complex double z5 = conj(z3);//Conjugado de Z3

    //Imprime a parte real e imagin�ria

    printf("z3 = %f + i%f\n",creal(z3),cimag(z3));
    printf("z4 = %f + i%f\n",creal(z4),cimag(z4));
    printf("z5 = %f + i%f\n",creal(z5),cimag(z5));



    return 0;
}






