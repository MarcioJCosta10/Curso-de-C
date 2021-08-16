#include <stdio.h>
#include <stdlib.h>

        /*Faça uma função recursiva que
        calcule o valor da Série S
        descrita a seguir para um
        valor n>0 a ser fornecido como
        parâmetro para a mesma.

                 5        10                1 + n²
    S = 2 +     ____  +  ____      +...+    _______

                 2         3                  n
                                         Então esse é o termo geral
    n = 1       n = 2                     _____________________
    1+1²        1+2²   5
    ____= 2    ____ = ___
                2      2
     1



        */

float serieS(int n){ //2- Fiz aqui um função (float porque é somatório de divisões)
    if (n> 0)        //3- se N for maior ou igual a 0 eu vou calcular recusrivamente a função
                     //5 - Agora vou calcular minha série, e como faço isso?
    return (1+n*n)/(float)n+serieS(n-1);              //6 - Simples eu ou usar meu termo geral:
    else                                                         //7- quando chamo a função novamente estou usando a recursão só que agora com n-1
        return 0;   //4- se N não for maior ou igual a 0 eu vou retornar 0 pois não posso calcular minha sério com N negativo nem igual a 0

}

int main()
{
    printf("S = %f\n",serieS(10)); // 1- Fiz aqui um programa no main onde eu vou imprimir o valor da serie calculado com termo 5 (ou seja N=5)



    system("pause");
    return 0;
}
