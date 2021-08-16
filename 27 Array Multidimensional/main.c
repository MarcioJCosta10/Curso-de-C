#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Array de varias dimensões:
    Nas u´ltimas aulas nós vimos:

    //Vetor = uma dimensão
    float notas [100];

    // Matrix = duas dimensões :
    int mat [100][50];

    A Linguagem C permite colocar quantas dimensões quisermos:
    // Declarara array com uma dimensão:
    int vet[5];
    // Declarara array com duas dimensões:
    float mat[5][5];

    // Declarara array com três dimensões:
    double cub[5][5][5]; // 0,0,0 primeira posição 4,4,4 ultima posição

    // Declarara array com quatro dimensões:
    int X[5][5][5][5];



    COMO MANIPULAR TODAS AS POSIÇÕES DO MEU ARRAY?
    Ex: se eu defnir cada um com cinco posições e quiser colocar o em cada posição posso usar o comando for:

      */

        int cub [5][5][5];
        int i, j, k;
        // preencher o array de 3 dimensões com zeros
        for(i=0; i<5; i++){
             for(j=0; j<5; j++){
                for(k=0; k<5; k++){
                    cub [i][j][k] = 0;

                }


            }
        }











    system("pause");
    return 0;
}
