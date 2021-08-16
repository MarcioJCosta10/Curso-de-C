/
#include <stdio.h>
#include <stdlib.h>

                "Ponto Flutuante padrão IEEE754"
        - O padrão C99 possui suporte a representação de valores em ponto flutuante
          de acordo com o padrão IEEE 754
        - É o padrão seguido por quase todas as máquinas modernas

        - Suporte a três formatos de valores em ponto flutuante, e suas  operações aritméticas
          e  funções agora são corretamente arredondadas

          O que temos de pontos flutuantes?
          Temos:

              float
            - Ponto flutuante com precisão simples
            - Ocupa 32 bits (4 bytes) de memória
            - Significado (ou coeficiente )com  precisão de 24 bits (cerca de 7 digitos decimais)

              double
            - Ponto flutuante com precisão dupla
            - Ocupa 64 bits (8 bytes) de memória
            - Significado (ou coeficiente ) com precisão de 53 Bits (cerca de 16 digitos decimais)

               long double
            - Ponto flutuante estendido com precisão dupla
            - Não utiliza necessáriamente o pardrão IEEE754
            - Pode possuir 80,96 ou até 128 bit


        "FOI ADICIONADO TAMBÉM"

        "Suporte a valores infinitos "
        - A Biblioteca "math.h" permite representar os valores
        "infinitos positivos " ou "negativos" no caso de um resultado indefinido ou que não pode
        ser representado com precisão

        "INFINITY"
        - Macro que representa o infinito positivo
        - Para o infinito negativo usa-se "- INFINITY"
        - Produzido por operações como (1.0/0.0)

        "isfinite()"
        - Função macro para testar se seu valor é infinito ou não
        - Melhor do que comparar com a função "INFINITY"

        -Permite representar valores do tipo "não é um número" ("NAN") no caso de um resultado indefinido ou que não pode
        ser representado com precisão.

        "NAN"
        - Macro que representa o valor de que não é um número produzido por operações como sqrt(-1.0)

        "isnan()"
        Função macro para testar se um valor "não é um número", melhor do que comparar com a macro "NAN"


        - Novas funções e macros e melhor suporte a comparação e classificação de valores

        - As funções são usualmente definidas para o tipo "double"
        - Agora existe versões para os tipos "float" e "long double"

        - Para utilizá-las, basta adicionar o sufixo "f" e "l" respectivamente ao nome da função

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
