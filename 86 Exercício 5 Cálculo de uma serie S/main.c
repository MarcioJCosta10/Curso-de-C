#include <stdio.h>
#include <stdlib.h>

        /*Fa�a uma fun��o recursiva que
        calcule o valor da S�rie S
        descrita a seguir para um
        valor n>0 a ser fornecido como
        par�metro para a mesma.

                 5        10                1 + n�
    S = 2 +     ____  +  ____      +...+    _______

                 2         3                  n
                                         Ent�o esse � o termo geral
    n = 1       n = 2                     _____________________
    1+1�        1+2�   5
    ____= 2    ____ = ___
                2      2
     1



        */

float serieS(int n){ //2- Fiz aqui um fun��o (float porque � somat�rio de divis�es)
    if (n> 0)        //3- se N for maior ou igual a 0 eu vou calcular recusrivamente a fun��o
                     //5 - Agora vou calcular minha s�rie, e como fa�o isso?
    return (1+n*n)/(float)n+serieS(n-1);              //6 - Simples eu ou usar meu termo geral:
    else                                                         //7- quando chamo a fun��o novamente estou usando a recurs�o s� que agora com n-1
        return 0;   //4- se N n�o for maior ou igual a 0 eu vou retornar 0 pois n�o posso calcular minha s�rio com N negativo nem igual a 0

}

int main()
{
    printf("S = %f\n",serieS(10)); // 1- Fiz aqui um programa no main onde eu vou imprimir o valor da serie calculado com termo 5 (ou seja N=5)



    system("pause");
    return 0;
}
