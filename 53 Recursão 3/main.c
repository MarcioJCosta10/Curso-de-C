#include <stdio.h>
#include <stdlib.h>
        // CUIDADOS AO IMPLANTAR UMA FUN��O RECURSIVA
        /* Durante a implementa��o de uma fun��o recursiva temos que ter em mente duas coisas:
         - crit�rio de parada dessa fun��o
         - par�metro de chamada recursiva */


 int fatoria(int n){
     if(n==0) // Crit�rio de parada
        return 1;
     else   // Par�mentro da chamada recursiva
        return n * fatorial (n-1);



 }
int fibo(int n){
    if (n==0 || n==1)// se entrei com zero o resultado � zero se eu entrei com 1o resultado � 1;
        return n
    else
        return fibo(n-1)+fibo(n-2);// A soma dos dois termos anteriores gera o pr�ximo termo
        //Ponto negativo dessa fun��o: Extremamente lenta para calcular o pr�ximo termo e gasta muita mem�ria
        //pois tenho duas chamadas recursivas dentro da mesma fun��o, e se executa muitos calculos repetidos inclusive de resultados
        //j� obtidos, portanto n�o se usa fun��o recursiva para a fun��o da sequencia de fibonacci


}

int main()
{

    /*  Crit�rio de parada determina quando  fun��o deve parar de chamar a si mesma */
    /*  Par�metro da chamda recursiva devemos sempre mudar o valor do parametro passado,
    de forma que a recurs�o chegue a um termino*/


    /* Algoritmos recursivos tendem a necessitar
    de mais tempo e/ou espa�o do que algoritmos iterativos
    Exemplo: Sequ�ncia Fibonacci
    0,1,1,2,3,5,8,13,21,34,55,89,...

    */

    return 0;
}
