#include <stdio.h>
#include <stdlib.h>
            /*
            Faça uma função recursiva que
            permita calcular a média de um
            vetor de tamanho N

            Primeira coisa a se ter em mente é que se eu teho um vetor ele tem que ter no mínimo 1 element0

            */


float media(int *vetor,int n, int tam){// 2- Aqui eu criei minhá função média, com o ponteiro do vetor(VETOR SÃO SEMPRE PASSADOS POR REFERNCIA)
                                       // int n e int tam são outras variáveis para o tamanho do vetor
                                       // int n vai ser o numero de elementos que estou considerando do vetor atualmente
                                       // int m será o tamanho efetivo
    if(n<=0)                           // 3- se n <= 0 eu retorno 0 pois eu não tenho como calcular a média
        return 0;
                                       // 4- A recursão vai funcionar aqui no eles, então se o n é maior que 0 o que eu faço?
    else
    {
        return vetor[n-1]/(float)tam + //5- Eu retorno o vetor n-1 dividido pelo tamanho dele
        media(vetor,n-1,tam);          //6 - E soma com a média do vetor que possuir n-1 elementos

        }
    }



int main()
{
    int v[5]={1,2,3,4,5};// 1 - Aqui eu tenho um vetor com 5 elementos
    printf("Media = %f \n", media(v,5,5));// 7- Por fim temos o exemplo trabalhando com nossa função recursiva
                                          // vai calcular a média retornar ela para o console, a media do meu vetor v 5 e 5, passo duas vezes o tamanho dele  um para o n e ountro para tam;

    system("pause");
    return 0;

}
