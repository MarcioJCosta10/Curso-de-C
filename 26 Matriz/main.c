#include <stdio.h>
#include <stdlib.h>

int main()

{
    /*Relembrando:

    //Array ou vetor: uma dimensão
    //FORMA GERAL:
    tipo nome_array[tamanho];
    //EXEMPLO
    int vet [5];

    // Array de duas dimensões: matriz
    //Forma Geral:
    tipo nome_array[nro_linhas] [nro_colunas];
                    INDICE          INDICE
    //Exemplo:
    int mat [3][2];
    // NOVAMENTE É COMO SE FOSSE UMA VARIÁVEL AGORA ACESSADA DO POR DOIS INDICES;

    // TENHO QUE SEMPRE USAR UMA CONSTANTE INTEIRA PARA DEFINIR SEU TAMANHO:

    int n = 5;
    float F[N+1] [N]; // CORRETO
    char frases [30][50];// CORRETO
    int mat [n][n];//ERRADO n é uma variável
    int mat [4.5][4]; // ERRADO NÃO PODE SER NUMERO COM PONTO FLUTUANTE


    int [3][2];
    mat [0][0] = 5;  //PRIMEIRA POSIÇÃO
    mat [0][1] = 23;
    mat [2][1] = -1; // ÚLTIMA POSIÇÃO

    //ACESSO AOS ELEMENTOS: índice
    // COMO CADA POSIÇÃO  DA MATRIZ É COMO UMA VARIÁVEL POSSO USAR ELA COMO AS VARIÁVEIS:

    int mat [3][2], M [3][2];
    scanf("%d ", &mat [2][0]); // COMANDO DE LEITURA;
    mat [0][0] = 10;// COMANDO DE ATRIBUIÇÃO
    mat [1][1] = mat [0][0] + mat [2][0];//expressão
    mat = M; // ERRADO NÃO POSSO ATRIBUIR MATRIZES INTEIRAS O PROGRAMA NÃO SABE COPIAR TODAS ASO POSIÇÕES DE UMA VEZ
    */


    int mat [3][3];
    int i, j;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){

            printf("Digite a mat[%d][%d]: ",i,j);
            scanf("%d", &mat[i][j]);

         }
        }


    system("pause");
    return 0;
}
