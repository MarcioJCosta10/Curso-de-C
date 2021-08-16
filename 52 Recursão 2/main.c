#include <stdio.h>
#include <stdlib.h>
/*
 A ideia básica da recursão dividir e conquistar:
     - problemas maiores -> problemas menores
     - solucionar problemas menores
     - combinar soluções
      - Essa lógica fica evidente no caso do fatorial
     4! = 4 * 3!
     3! = 3 * 2!
     2! = 2 * 1!
     1! = 1 * 0!
     0! = 1 //CASO BASE // AQUI É QUANDO PARO DE CHAMAR  A FUNÇÃO AQUI O 1 JÁ E O VALOR CONSTANTE

     N! N * (N-1)!// AQUI É GENERALIZADO
     0! = 1 */

int fatorial (int n){
    if(n==0)
        return 1;
    else
        return n * fatorial(n-1);
}


int main()
{
    int x;
    printf("Digite um numero: ");
    scanf("%d",&x);
    x = fatorial(x);
    printf("O valor de x: %d",x);

     /* Mas como uma função funciona
        1ª Coisa que precisamos saber: Quando chamamos uma função quem chama a função é pausada a função é executada
        quando a função termina devolve o valor para quem chamou ela, se existir um valor para ser devolvido, e ai
        continua de onde parou:

        Aqui no main estou chamando a função fatorial de 4;
        Nesse momento a função main estava executando ela chamou a função fatorial com parametro 4;



                    >> Aqui pausa para executar FATORIAL 1
        FATORIAL 0 ->  Aqui meu n = 0 ENTÃO NESSE MOMENTO CHEGUEI NO MEU CASO BASE, ONE NÃO ESTOU MAIS CHAMANDO MINHA FUNÇÃO FATORIAL ESTOU RETORNANDO O MEU VALOR CONSTANTE 1, AQUI A RECURSÃO PAROU, E CHEGOU A HORA DE DESEMPILHAR
                                      TODAS AS FUNÇÕES, ESTÁ NA HORA DE COMEÇAR A DEVOLVER VALOR PARA QUEM CHAMOU  ;
                                                                         | Aqui termina
                                                                         V devolve 1

            ^
            |        >> Pausa e executa FATORIAL 0                       | Aqui termina
        FATORIAL 1 ->  Aqui vai ser executada mas é !=0 então pausa;;    V devolve 1*1
            ^
            |       >> Pausa e executa FATORIAL 1                        | volta a executar
         FATORIAL 2 -> Aqui vai ser executada mas é !=0 então pausa;;    V termina e devolve 2*1*1      // TUDO ISSO ESTÁ SENDO FEITO NA MEMÓRIA DO COMPUTADOR
            ^
            |       >> Pausa e executa FATORIAL 2                        | volta a executar
        FATORIAL 3  -> Aqui vai ser executada mas é !=0 então pausa;;    V termina e devolve 3*2*1*1
            ^
            |       >> Pausa e executa FATORIAL 3                        | volta a executar
        FATORIAl 4  -> Aqui vai ser executada mas é !=0 então pausa;     V termina e devolve 4*3*2*1*1  Aqui eu termino a função e esse return vai para o meu x;
                                                                           e minha função main volta a executar
            ^
            |
           MAIN    -> Aqui foi pausada;

         ESS É A LÓGICA DA RECURSÃO, EU VOU EMPILHANDO AS CHAMADAS DA FUNÇÃO E DEPOIS VOU DESEMPILHANDO MEUS RESULTADOS ATÉ CHEGAR AO RESULTADO FINAL;

*/


    return 0;
}
