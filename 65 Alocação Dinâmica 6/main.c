#include <stdio.h>
#include <stdlib.h>
            //ALOCA��O DIN�MICA DE MATRIZES
        /*  Ou aloca��o de arrays multidimensionais:
        Para alocar um array com mais de 1 dimens�o precisamos utilizar o
        conceito de "ponteiro para ponteiro"
        */
        //ponteiro (1 nivel): cria um vetor
        int *p = (int*)malloc(5* sizeof(int));//Um pnteiro para inteiro aponta para um vetor de inteiros, isso quer dizer que um ponteiro permite criar um vetor
        //ponteiro para ponteiro (2 niveis): permite criar uma matriz
        int**m;// Dois niveis permite criar um ponteiro que aponta para uma matriz
        //Ponteiro para ponteiro para ponteiro (3 niveis ): permite criar um array de 3 dimens�es
        int ***d;// Tres niveis crio como se fosse um cubo  de mem�ria

        //CADA NIVEL NO MEU PONTEIRO PERMITE CRIAR UMA DIMENS�O PARA MEU ARRAY, N�O EXISTE LIMITE DE QUANTOS NIVEIS EU POSSO CRIAR;

//Vamos ver isso na pratica:
//Eu quero criar um matriz ent�o vou usar um ponteiro para ponteiro
        /*  Em um ponteiro para ponteiro, cada n�vel do
            ponteiro permite criar uma nova dimens�o no array
            // int*  -> permite criar um array de int
            // int** -> permite criar um array de int*
        */
int**p; //2"*" = 2 n�veis = 2 dimens�es
int i,j,N = 2;
p = (int**)malloc(N * sizeof(int));// Aqui estou criando um vetor de ponteiros
                                   /*Ou seja tenho o **p
                                     que apontaara um vetor
                                     de varias posi��es de
                                     int* e cada int* pode
                                     apontar para um novo vetor */
                                     //� o que vou fazer agora:
    //Criar um array de ponteiros (int*)
    p = (int**)malloc(N * sizeof(int*));// Aqui eu criei um vetor de ponteiro, mas cada ponteiro desse meu novo vetor pode apontar para um novo ponteiro
    for(i=0;i<N; i++){
        //Cria um array de int
        p[i]= (int*) malloc(N*sizeof(int));// Por isso eu vou fazer um novo malloc, ent�o para cada posi��o do meu vetor p[i] malloc n*sizeof(int)
                                           // Aqui n�o temos mais fazer aloca��o pois j� � int, o que for alocado daqui para frente n�o � mais ponteiro
                                           /* Ent�o p[i] vai receber um vetor(pelo meu malloc) de N posi��es de inteiro */
                                           /* Lembrando que eu tinha um **p, que � um vetor onde cada posi��o � um ponteiro int*
                                              e ai para cada posi��o do meu vetor int* eu tenho um novo vetor so que agora com o tipo
                                              int dentro de cada uma dessas posi��s
                                              Ent�o para cada posi��o eu tenho um indice onde � o indice i e o indice j
                                              que � um ponteiro para um ponteiro e um vetor para um vetor, ent�o eu tenho uma matriz;
                                              Ent�o aqui eu criei me primeiro vetor
                                           */

              {se aqui � um int*}    {aqui perco um asteriso}
              for(i=0;i<N;i++){
                //Cria um array de int
            p[i] = (int*)malloc(N*sizeof(int));//Aqui para cada linha da minha matriz eu tenhos as colunas
                                               /*E ai simplismente vou ler minha matriz com laa�ao for*/
                for(j=o, j<N; j++){
                //L� a matriz de inteiros
                scanf("%d",&p[i][j]);// Ent�a p[i] � a linha i e {j] a coluna J


                Ent�o com 2 malloc() usando uma estrutura de repeti��o eu consegui criar uma matriz

/* Em um array com mais de uma dimens�o, a
   mem�ria � liberada na ordem inversa da aloca��o */
   int **p;
   int i,j, N=2;
                    //Enta� para liberar a mem�ria ocorre na ordem invesa, se eu aloquei as colunas por �ltimo eu tenho que liberar elas primeiro
   for(i=0; i<n; i++){//Ent�o aqui eu crio um la�o libero todas as colunas de cada uma das linhas
        free(p[i]);
        }
   free(p);// Por fim libero p
            /*
                Ent�o � o processo inverso, pois quando eu criei primeiro eu criei, prieiro eu criei **p e depois eu criei int* ent�o eu libero
                cada uma das posi��es de int e depois libero o int*, sempre nessa ordem

            */
            }
            }
            }
int main()
{
    system("pause");
    return 0;
}
