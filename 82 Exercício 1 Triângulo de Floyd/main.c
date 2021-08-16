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

    /* 1º Passo é entender o nosso problema: Eu vou passar um N então vou imprimir n Linahs
          Pensando puramente nisso nos temo como solução um \n então eu faço um for com o \n
          Esse código garante que eu vou pular 6 linhas;

        2º Agora eu tenho as colunas, perceba que na primeira linha eu imprimi um numero,
           na segunda linha dois numero, na terceira linha tres numeros...
           então eu vou repetir minha impressão tanto quanto o valor da linha onde eu estiver Ex: linha 2 eu vou imprimir
           um numero duas vezes, imprimir um numero uma vez é o printf() imprimir um numero duas vezes posso usar um for();
           Eu sei que o valor da minha linha é o meu I, e se eu estou na linha I = 3 eu tenho que imprimir 3 vezes...
           Ou seja tenho que fazer um for() até I (for para fazer as colunas)

        3º Faltou agora percorrer os numeros
            1
            2 3
            4 5 6
            Como faço isso?
            Vou usar avariável c, pois os numeros
            não dependem da linha e da coluna, ele vão crescendo
            sequencialmente independente de qual linha ou coluna eu estou
            então eu uso uma variável isolada ( c ) pois i e j não serve para meu problema
            e eu sei que sempre que imprimo um numero eu incremento e imprimo incrmento e imprimo incremento e imprimo...
            então eu tenho um c começando em 0 o que devo fazer é, somar mais um no c e imprimir...


            // Então o primeiro passo para resolver um problema é interpretar o problema

    */

int main()
{
    int N = 25;
    int i, j, c = 0;
    for(i=1; i<=N; i++){      // 1º
        for(j=1; j<=i; j++){  // 2º
            c++;              // 3º
            printf("%d ",c);  // 3º
        }
        printf("\n");         // 1º
    }
    system("pause");
    return 0;
}
