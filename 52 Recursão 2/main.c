#include <stdio.h>
#include <stdlib.h>
/*
 A ideia b�sica da recurs�o dividir e conquistar:
     - problemas maiores -> problemas menores
     - solucionar problemas menores
     - combinar solu��es
      - Essa l�gica fica evidente no caso do fatorial
     4! = 4 * 3!
     3! = 3 * 2!
     2! = 2 * 1!
     1! = 1 * 0!
     0! = 1 //CASO BASE // AQUI � QUANDO PARO DE CHAMAR  A FUN��O AQUI O 1 J� E O VALOR CONSTANTE

     N! N * (N-1)!// AQUI � GENERALIZADO
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

     /* Mas como uma fun��o funciona
        1� Coisa que precisamos saber: Quando chamamos uma fun��o quem chama a fun��o � pausada a fun��o � executada
        quando a fun��o termina devolve o valor para quem chamou ela, se existir um valor para ser devolvido, e ai
        continua de onde parou:

        Aqui no main estou chamando a fun��o fatorial de 4;
        Nesse momento a fun��o main estava executando ela chamou a fun��o fatorial com parametro 4;



                    >> Aqui pausa para executar FATORIAL 1
        FATORIAL 0 ->  Aqui meu n = 0 ENT�O NESSE MOMENTO CHEGUEI NO MEU CASO BASE, ONE N�O ESTOU MAIS CHAMANDO MINHA FUN��O FATORIAL ESTOU RETORNANDO O MEU VALOR CONSTANTE 1, AQUI A RECURS�O PAROU, E CHEGOU A HORA DE DESEMPILHAR
                                      TODAS AS FUN��ES, EST� NA HORA DE COME�AR A DEVOLVER VALOR PARA QUEM CHAMOU  ;
                                                                         | Aqui termina
                                                                         V devolve 1

            ^
            |        >> Pausa e executa FATORIAL 0                       | Aqui termina
        FATORIAL 1 ->  Aqui vai ser executada mas � !=0 ent�o pausa;;    V devolve 1*1
            ^
            |       >> Pausa e executa FATORIAL 1                        | volta a executar
         FATORIAL 2 -> Aqui vai ser executada mas � !=0 ent�o pausa;;    V termina e devolve 2*1*1      // TUDO ISSO EST� SENDO FEITO NA MEM�RIA DO COMPUTADOR
            ^
            |       >> Pausa e executa FATORIAL 2                        | volta a executar
        FATORIAL 3  -> Aqui vai ser executada mas � !=0 ent�o pausa;;    V termina e devolve 3*2*1*1
            ^
            |       >> Pausa e executa FATORIAL 3                        | volta a executar
        FATORIAl 4  -> Aqui vai ser executada mas � !=0 ent�o pausa;     V termina e devolve 4*3*2*1*1  Aqui eu termino a fun��o e esse return vai para o meu x;
                                                                           e minha fun��o main volta a executar
            ^
            |
           MAIN    -> Aqui foi pausada;

         ESS � A L�GICA DA RECURS�O, EU VOU EMPILHANDO AS CHAMADAS DA FUN��O E DEPOIS VOU DESEMPILHANDO MEUS RESULTADOS AT� CHEGAR AO RESULTADO FINAL;

*/


    return 0;
}
