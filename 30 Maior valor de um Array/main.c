#include <stdio.h>
#include <stdlib.h>

int main()
{
   //Achar o Maior valor de um Array:
   int i, Lista[5] = {3,18,2,51,45};
   int Maior = Lista[0]; // Atribui a essa variavel a posição Zero do meu Array
                    // Como não sei qual é o mairo valor preciso supor que um deles é o maior
                    // Enta~oaconteceu que crie uma variavel e coloquei o valor 3 dentro dela

    for (i=1; i<5; i++){ // Começo a percorrer o meu array
        if(Maior < Lista[i])// Aqui estou perguntando se a variavel maior e menor que a posição i do meu array
            Maior = Lista[i];// se for o valor da posição i vai para a variavel maior
    }
            printf("Maior= %d\n", Maior);


    // Maior elemento de uma Matiz:
    int mat [3][3] = {{1,2,3},{4,5,6},{7,8,9,}};
    int a,b, Maior1 = mat [0][0];
        for(a=0; a <3; a++){
            for(b=0; b <3; b++){
                    if(Maior1 < mat[a][b])
                        Maior1 = mat[a][b];





            }

        }
        printf("Maior de mat = %d\n",Maior1);



    return 0;
}
