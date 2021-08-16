/
#include <stdio.h>
#include <stdlib.h>

                "Ponto Flutuante padr�o IEEE754"
        - O padr�o C99 possui suporte a representa��o de valores em ponto flutuante
          de acordo com o padr�o IEEE 754
        - � o padr�o seguido por quase todas as m�quinas modernas

        - Suporte a tr�s formatos de valores em ponto flutuante, e suas  opera��es aritm�ticas
          e  fun��es agora s�o corretamente arredondadas

          O que temos de pontos flutuantes?
          Temos:

              float
            - Ponto flutuante com precis�o simples
            - Ocupa 32 bits (4 bytes) de mem�ria
            - Significado (ou coeficiente )com  precis�o de 24 bits (cerca de 7 digitos decimais)

              double
            - Ponto flutuante com precis�o dupla
            - Ocupa 64 bits (8 bytes) de mem�ria
            - Significado (ou coeficiente ) com precis�o de 53 Bits (cerca de 16 digitos decimais)

               long double
            - Ponto flutuante estendido com precis�o dupla
            - N�o utiliza necess�riamente o pardr�o IEEE754
            - Pode possuir 80,96 ou at� 128 bit


        "FOI ADICIONADO TAMB�M"

        "Suporte a valores infinitos "
        - A Biblioteca "math.h" permite representar os valores
        "infinitos positivos " ou "negativos" no caso de um resultado indefinido ou que n�o pode
        ser representado com precis�o

        "INFINITY"
        - Macro que representa o infinito positivo
        - Para o infinito negativo usa-se "- INFINITY"
        - Produzido por opera��es como (1.0/0.0)

        "isfinite()"
        - Fun��o macro para testar se seu valor � infinito ou n�o
        - Melhor do que comparar com a fun��o "INFINITY"

        -Permite representar valores do tipo "n�o � um n�mero" ("NAN") no caso de um resultado indefinido ou que n�o pode
        ser representado com precis�o.

        "NAN"
        - Macro que representa o valor de que n�o � um n�mero produzido por opera��es como sqrt(-1.0)

        "isnan()"
        Fun��o macro para testar se um valor "n�o � um n�mero", melhor do que comparar com a macro "NAN"


        - Novas fun��es e macros e melhor suporte a compara��o e classifica��o de valores

        - As fun��es s�o usualmente definidas para o tipo "double"
        - Agora existe vers�es para os tipos "float" e "long double"

        - Para utiliz�-las, basta adicionar o sufixo "f" e "l" respectivamente ao nome da fun��o

        "Exemplo"

        "Calculo da raiz quadrada "
        double sqrt (double valor);
        float sqrtf (float valor);
        long double sqrt(long double valor);



  */




#include<stdio.h>
#include<math.h>


int main()
{

    double f;
    f = sqrt(-1);
    printf("Resultado: %f\n",f);//nan

    f = 1.0/0.0;
    printf("Resultado: %f\n",f);//inf

    f = -1.0/0.0;
    printf("Resultado: %f\n",f);//-inf

    if(isfinite(f))
        printf("Valor finito");
    else
        printf("Valor infinito");//exibido



    return 0;
}
