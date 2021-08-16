#include <stdio.h>
#include <stdlib.h>
                // TRIANGULO DE FLOYD
                /*Escreva um programa que dado um
                numero inteiro de positivo N,
                imprima N linhas do chamado
                Triangulo de Floyd:
                1
                2  3
                4  5  6
                7  8  9  10
                11 12 13 14 15
                16 17 18 19 20 21
                */

    /* 1� Passo � entender o nosso problema: Eu vou passar um N ent�o vou imprimir n Linahs
          Pensando puramente nisso nos temo como solu��o um \n ent�o eu fa�o um for com o \n
          Esse c�digo garante que eu vou pular 6 linhas;

        2� Agora eu tenho as colunas, perceba que na primeira linha eu imprimi um numero,
           na segunda linha dois numero, na terceira linha tres numeros...
           ent�o eu vou repetir minha impress�o tanto quanto o valor da linha onde eu estiver Ex: linha 2 eu vou imprimir
           um numero duas vezes, imprimir um numero uma vez � o printf() imprimir um numero duas vezes posso usar um for();
           Eu sei que o valor da minha linha � o meu I, e se eu estou na linha I = 3 eu tenho que imprimir 3 vezes...
           Ou seja tenho que fazer um for() at� I (for para fazer as colunas)

        3� Faltou agora percorrer os numeros
            1
            2 3
            4 5 6
            Como fa�o isso?
            Vou usar avari�vel c, pois os numeros
            n�o dependem da linha e da coluna, ele v�o crescendo
            sequencialmente independente de qual linha ou coluna eu estou
            ent�o eu uso uma vari�vel isolada ( c ) pois i e j n�o serve para meu problema
            e eu sei que sempre que imprimo um numero eu incremento e imprimo incrmento e imprimo incremento e imprimo...
            ent�o eu tenho um c come�ando em 0 o que devo fazer �, somar mais um no c e imprimir...


            // Ent�o o primeiro passo para resolver um problema � interpretar o problema

    */

int main()
{
    int N = 25;
    int i, j, c = 0;
    for(i=1; i<=N; i++){      // 1�
        for(j=1; j<=i; j++){  // 2�
            c++;              // 3�
            printf("%d ",c);  // 3�
        }
        printf("\n");         // 1�
    }
    system("pause");
    return 0;
}
