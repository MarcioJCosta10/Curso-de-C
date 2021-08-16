#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Somando os elementos de um array

    int i, lista [5] = {1,2,3,4,5};
    int soma = 0;//soma inicialmente tem um valor qq então defino zero para não ter erro
        for(i=0;i<5;i++){ //Aqui o for vai percorrer todos os valores de indices do meu array
            soma = soma + lista[i];// Comando de atribuição e soma ;
            printf("Soma = %d \n", soma);


            // Se eu quizer somar uma matriz o principio é o mesmo:
            int mat [3][3] = {{1,2,3},{4,5,6},{7,8,9}};
                int a, b, soma1 = 0;
                    for(a=0; a<3; a++)
                        for(b=0; b<3; b++)
                            soma1 = soma1 + mat [a][b];
                            printf("Soma1 = %d\n",soma1);












        }



    return 0;
}
