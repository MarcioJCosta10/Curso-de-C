#include <stdio.h>
#include <stdlib.h>
            //ALOCAÇÃO DINÂMICA DE MATRIZES
        /*  Ou alocação de arrays multidimensionais:
        Para alocar um array com mais de 1 dimensão precisamos utilizar o
        conceito de "ponteiro para ponteiro"
        */
        //ponteiro (1 nivel): cria um vetor
        int *p = (int*)malloc(5* sizeof(int));//Um pnteiro para inteiro aponta para um vetor de inteiros, isso quer dizer que um ponteiro permite criar um vetor
        //ponteiro para ponteiro (2 niveis): permite criar uma matriz
        int**m;// Dois niveis permite criar um ponteiro que aponta para uma matriz
        //Ponteiro para ponteiro para ponteiro (3 niveis ): permite criar um array de 3 dimensões
        int ***d;// Tres niveis crio como se fosse um cubo  de memória

        //CADA NIVEL NO MEU PONTEIRO PERMITE CRIAR UMA DIMENSÃO PARA MEU ARRAY, NÃO EXISTE LIMITE DE QUANTOS NIVEIS EU POSSO CRIAR;

//Vamos ver isso na pratica:
//Eu quero criar um matriz então vou usar um ponteiro para ponteiro
        /*  Em um ponteiro para ponteiro, cada nível do
            ponteiro permite criar uma nova dimensão no array
            // int*  -> permite criar um array de int
            // int** -> permite criar um array de int*
        */
int**p; //2"*" = 2 níveis = 2 dimensões
int i,j,N = 2;
p = (int**)malloc(N * sizeof(int));// Aqui estou criando um vetor de ponteiros
                                   /*Ou seja tenho o **p
                                     que apontaara um vetor
                                     de varias posições de
                                     int* e cada int* pode
                                     apontar para um novo vetor */
                                     //È o que vou fazer agora:
    //Criar um array de ponteiros (int*)
    p = (int**)malloc(N * sizeof(int*));// Aqui eu criei um vetor de ponteiro, mas cada ponteiro desse meu novo vetor pode apontar para um novo ponteiro
    for(i=0;i<N; i++){
        //Cria um array de int
        p[i]= (int*) malloc(N*sizeof(int));// Por isso eu vou fazer um novo malloc, então para cada posição do meu vetor p[i] malloc n*sizeof(int)
                                           // Aqui não temos mais fazer alocação pois já é int, o que for alocado daqui para frente não é mais ponteiro
                                           /* Então p[i] vai receber um vetor(pelo meu malloc) de N posições de inteiro */
                                           /* Lembrando que eu tinha um **p, que é um vetor onde cada posição é um ponteiro int*
                                              e ai para cada posição do meu vetor int* eu tenho um novo vetor so que agora com o tipo
                                              int dentro de cada uma dessas posiçõs
                                              Então para cada posição eu tenho um indice onde é o indice i e o indice j
                                              que é um ponteiro para um ponteiro e um vetor para um vetor, então eu tenho uma matriz;
                                              Então aqui eu criei me primeiro vetor
                                           */

              {se aqui é um int*}    {aqui perco um asteriso}
              for(i=0;i<N;i++){
                //Cria um array de int
            p[i] = (int*)malloc(N*sizeof(int));//Aqui para cada linha da minha matriz eu tenhos as colunas
                                               /*E ai simplismente vou ler minha matriz com laaçao for*/
                for(j=o, j<N; j++){
                //Lê a matriz de inteiros
                scanf("%d",&p[i][j]);// Entõa p[i] é a linha i e {j] a coluna J


                Então com 2 malloc() usando uma estrutura de repetição eu consegui criar uma matriz

/* Em um array com mais de uma dimensão, a
   memória é liberada na ordem inversa da alocação */
   int **p;
   int i,j, N=2;
                    //Entaõ para liberar a memória ocorre na ordem invesa, se eu aloquei as colunas por último eu tenho que liberar elas primeiro
   for(i=0; i<n; i++){//Então aqui eu crio um laço libero todas as colunas de cada uma das linhas
        free(p[i]);
        }
   free(p);// Por fim libero p
            /*
                Então é o processo inverso, pois quando eu criei primeiro eu criei, prieiro eu criei **p e depois eu criei int* então eu libero
                cada uma das posições de int e depois libero o int*, sempre nessa ordem

            */
            }
            }
            }
int main()
{
    system("pause");
    return 0;
}
