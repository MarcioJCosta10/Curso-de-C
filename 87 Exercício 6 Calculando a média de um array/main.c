#include <stdio.h>
#include <stdlib.h>
            /*
            Fa�a uma fun��o recursiva que
            permita calcular a m�dia de um
            vetor de tamanho N

            Primeira coisa a se ter em mente � que se eu teho um vetor ele tem que ter no m�nimo 1 element0

            */


float media(int *vetor,int n, int tam){// 2- Aqui eu criei minh� fun��o m�dia, com o ponteiro do vetor(VETOR S�O SEMPRE PASSADOS POR REFERNCIA)
                                       // int n e int tam s�o outras vari�veis para o tamanho do vetor
                                       // int n vai ser o numero de elementos que estou considerando do vetor atualmente
                                       // int m ser� o tamanho efetivo
    if(n<=0)                           // 3- se n <= 0 eu retorno 0 pois eu n�o tenho como calcular a m�dia
        return 0;
                                       // 4- A recurs�o vai funcionar aqui no eles, ent�o se o n � maior que 0 o que eu fa�o?
    else
    {
        return vetor[n-1]/(float)tam + //5- Eu retorno o vetor n-1 dividido pelo tamanho dele
        media(vetor,n-1,tam);          //6 - E soma com a m�dia do vetor que possuir n-1 elementos

        }
    }



int main()
{
    int v[5]={1,2,3,4,5};// 1 - Aqui eu tenho um vetor com 5 elementos
    printf("Media = %f \n", media(v,5,5));// 7- Por fim temos o exemplo trabalhando com nossa fun��o recursiva
                                          // vai calcular a m�dia retornar ela para o console, a media do meu vetor v 5 e 5, passo duas vezes o tamanho dele  um para o n e ountro para tam;

    system("pause");
    return 0;

}
