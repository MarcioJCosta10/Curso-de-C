#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Array de varias dimens�es:
    Nas u�ltimas aulas n�s vimos:

    //Vetor = uma dimens�o
    float notas [100];

    // Matrix = duas dimens�es :
    int mat [100][50];

    A Linguagem C permite colocar quantas dimens�es quisermos:
    // Declarara array com uma dimens�o:
    int vet[5];
    // Declarara array com duas dimens�es:
    float mat[5][5];

    // Declarara array com tr�s dimens�es:
    double cub[5][5][5]; // 0,0,0 primeira posi��o 4,4,4 ultima posi��o

    // Declarara array com quatro dimens�es:
    int X[5][5][5][5];



    COMO MANIPULAR TODAS AS POSI��ES DO MEU ARRAY?
    Ex: se eu defnir cada um com cinco posi��es e quiser colocar o em cada posi��o posso usar o comando for:

      */

        int cub [5][5][5];
        int i, j, k;
        // preencher o array de 3 dimens�es com zeros
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
