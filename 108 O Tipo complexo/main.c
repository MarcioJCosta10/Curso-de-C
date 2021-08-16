        /"O tipo Complexo"
        Outro tipo de dado adicionado a linguagem C padrão 99 foi
        o tipo que fornece suporte para numeros complexos

        Para isso usamos a palavra-chave "_Complex"
        Ela modifica um tipo de ponto-flutuante
        (float, double, e long double) para que ele se comporte
        como um par de números que defina um tipo complexo

        "Exemplo"

        -Complex float z1;

        Nova biblioteca "complex.h"  Fornece suporte para operações com numeros
        complexos, como as seguintes macros

        "complex "
        macro que equivale a "_Complex"

        "_Complex_I"
        macro que define a parte imaginária

        "I"
        macro que equivale a "_Complex_I"

        "Exemplo"
        _Complex float z1 = 2.0 + 2.0 * _Complex_I;
        _Complex float z1 = 2.0 + 2.0 * I;
         complex float z1 = 2.0 + 2.0 * _Complex_I;
         complex float z1 = 2.0 + 2.0 * I;


         "A biblioteca complex.h"
         - Fornece funções para diversas operações sobre números complexos.
         Por exemplo:

             double cimag(double complex z); - Calcula a parte imaginária de z
             double creal(double complex z); - Calcula a parte real de z
             double cabs(double complex z);  - Calcula o valor absoluto de z


            "TEMOS QUE TOMAR CUIDADO"

            As funções mostradas são definidas para o tipo "double complex"
            - Porém, existem versões para "float complex " e "long double complex"
            - Para utilizá-las basta adicionar o sufixo "f" ou "l", respectivamente ao nome da função

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

    //Imprime a parte real e imaginária

    printf("z3 = %f + i%f\n",creal(z3),cimag(z3));
    printf("z4 = %f + i%f\n",creal(z4),cimag(z4));
    printf("z5 = %f + i%f\n",creal(z5),cimag(z5));



    return 0;
}






