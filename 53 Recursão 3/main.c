#include <stdio.h>
#include <stdlib.h>
        // CUIDADOS AO IMPLANTAR UMA FUNÇÃO RECURSIVA
        /* Durante a implementação de uma função recursiva temos que ter em mente duas coisas:
         - critério de parada dessa função
         - parâmetro de chamada recursiva */


 int fatoria(int n){
     if(n==0) // Critério de parada
        return 1;
     else   // Parâmentro da chamada recursiva
        return n * fatorial (n-1);



 }
int fibo(int n){
    if (n==0 || n==1)// se entrei com zero o resultado é zero se eu entrei com 1o resultado é 1;
        return n
    else
        return fibo(n-1)+fibo(n-2);// A soma dos dois termos anteriores gera o próximo termo
        //Ponto negativo dessa função: Extremamente lenta para calcular o próximo termo e gasta muita memória
        //pois tenho duas chamadas recursivas dentro da mesma função, e se executa muitos calculos repetidos inclusive de resultados
        //já obtidos, portanto não se usa função recursiva para a função da sequencia de fibonacci


}

int main()
{

    /*  Critério de parada determina quando  função deve parar de chamar a si mesma */
    /*  Parâmetro da chamda recursiva devemos sempre mudar o valor do parametro passado,
    de forma que a recursão chegue a um termino*/


    /* Algoritmos recursivos tendem a necessitar
    de mais tempo e/ou espaço do que algoritmos iterativos
    Exemplo: Sequência Fibonacci
    0,1,1,2,3,5,8,13,21,34,55,89,...

    */

    return 0;
}
