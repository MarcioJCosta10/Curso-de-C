#include <stdio.h>
#include <stdlib.h>

int main()

{
    /*Relembrando:

    //Array ou vetor: uma dimens�o
    //FORMA GERAL:
    tipo nome_array[tamanho];
    //EXEMPLO
    int vet [5];

    // Array de duas dimens�es: matriz
    //Forma Geral:
    tipo nome_array[nro_linhas] [nro_colunas];
                    INDICE          INDICE
    //Exemplo:
    int mat [3][2];
    // NOVAMENTE � COMO SE FOSSE UMA VARI�VEL AGORA ACESSADA DO POR DOIS INDICES;

    // TENHO QUE SEMPRE USAR UMA CONSTANTE INTEIRA PARA DEFINIR SEU TAMANHO:

    int n = 5;
    float F[N+1] [N]; // CORRETO
    char frases [30][50];// CORRETO
    int mat [n][n];//ERRADO n � uma vari�vel
    int mat [4.5][4]; // ERRADO N�O PODE SER NUMERO COM PONTO FLUTUANTE


    int [3][2];
    mat [0][0] = 5;  //PRIMEIRA POSI��O
    mat [0][1] = 23;
    mat [2][1] = -1; // �LTIMA POSI��O

    //ACESSO AOS ELEMENTOS: �ndice
    // COMO CADA POSI��O  DA MATRIZ � COMO UMA VARI�VEL POSSO USAR ELA COMO AS VARI�VEIS:

    int mat [3][2], M [3][2];
    scanf("%d ", &mat [2][0]); // COMANDO DE LEITURA;
    mat [0][0] = 10;// COMANDO DE ATRIBUI��O
    mat [1][1] = mat [0][0] + mat [2][0];//express�o
    mat = M; // ERRADO N�O POSSO ATRIBUIR MATRIZES INTEIRAS O PROGRAMA N�O SABE COPIAR TODAS ASO POSI��ES DE UMA VEZ
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
