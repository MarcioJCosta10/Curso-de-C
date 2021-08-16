#include <stdio.h>
#include <stdlib.h>
    //FUN��O CALLOC(): funcionamento similar a fun��o malloc
    /*
        Fun��o calloc(): serve para alocar mem�ria durante a
        execu��o do programa.
        Ela faz o pedido a mem�ria ao computador
        e retorna um ponteiro com o endere�o do
        inicio do espa�o de mem�ria alocado. */

        // Prot�tipo:
        void* calloc(unsigned int num,unsigned int size);// Tamb�m retorna um ponteiro gen�rico pois o calloc igual ao
                                                         // malloc n�o sabe o que vou fazer com a mem�ria, ent�o eu converto para o que eu quiser
                                                         /*
                                                         Recebe dois par�mentros:(unsigned pois n�o podemos alocar mem�ria negativa)
                                                         unsigned int num : Quantidade de bytes que eu quero alocar// Aqui Quantas posi��es de mem�ria eu quero no meu vetor
                                                         unsigned int size : Qual � o tamanho de cada posi��o de mem�ria do meu vetor;
                                                         No malloc faziamos isso de uma vez s�, aqui eu fa�o um de cada vez

                                                         */

        /* Funcionamento:
        A fun��o calloc() recebe por par�mentro:
        - Numero de elementos no array a ser alocado
        - Tamanho de cada elemento do array
        E retorna:
        - No caso de erro: NULL
        - Ponteiro para a primeira posi��o do array.
        */
        //Exemplo:
        //Cria array de 50 inteiros (4 bytes cada)
        int* v = (int*)calloc(50,4);// Perceba novamente que � dependente do tipo que eu estou criando
        //Cria array de 200 char (1 bytes cada)
        char* c= (char*)calloc(200,1); // Perceba novamente que � dependente do tipo que eu estou criando

        /*
            Na aloca��o da mem�ria, deve-se levar em conta o tamanho do tipo.
            Exemplo: criar um array de tamanho 50;

        */
        int *v = (int*) calloc(50,4);
        char *c = (char*) calloc(50,1);

        /*E como eu n�o quero ficar decorando
          o tamnho de cada tipo quando eu estiver
          desenvolvendo principalmente por que
          pode variar por causa do sistema e em
          estruturas � dificil eu saber exatamente
          o que tem em cada campo, ent�o vou usar
          o operador sizeof();
            */
        // Solu��o usar: Sizeof();
        int *v = (int*) callo(50,sizeof(int));  // Enta� eu quero 50 posi��es no meu vetor onde cada posi��o � do tamanho do int (4 bytes);
        int *c = (char*) callo(50,sizeof(char));// Enta� eu quero 50 posi��es no meu vetor de caracteres (uma string)onde cada posi��o � do tamanho de um char(1 byte);



        //Exemplo mais completo:
        /*Se n�o houver mem�ria suficiente
          para alocar a mem�ria requisitada
          a fun��o calloc() retornar NULL
          */
          int *p;
          p = (int*)calloc(5,sizeof(int));// Aqui fiz uma convers�o mais forte onde pego o meu void e converto para int*, e eu quero 5 posi��es do tipo int;
            if(p == NULL){//Verifica��o
                    printf("Erro: Sem mem�ria!\n");
                    exit(1);//Termina o programa
                    }
        int i;// Se eu n�o entrei dentro do meu if ent�o eu estou aqui deu certo meu processo de aloca��o
        for(i=0;i<5;i++)// Vou fazer um for
        printf("Digite o valor de p[%d]:",i);
        scanf("%d",&p[i]);/*para ler o meu vetor alocado;
                            E lembre-se que p come�ou como
                            um ponteiro mas ele aqui virou
                            um vetor, ent�o trabalho como
                            vetor e esque�o que ele � ponteiro;
                            Ent�o continuo trabalhando no resto
                            do meu programa como um vetor*/
        //Libera a mem�ria alocada
        free(p);

            //QUAL A DIFEREN�A DE MALLOC PARA CALLOC?
        /*
        Malloc() versus Calloc(): ambas servem para alocar
        mem�ria, mas calloc() inicializa todos os BITS do espa�o
        alocado com 0,s;*/

        int i;
        int *p, *p1;
        p = (int*) malloc(5*sizeof(int));/*1� Diferen�as: Os par�metros onde
                                           o malloc recebe um par�mentro
                                           e � feito a multiplica��o
                                           e o calloc recebe dois parametro*/
        p1 = (int*) calloc(5,sizeof(int)) /* 2� Diferen�a: Malloc faz apenas a
                                             aloca��o de mem�ria pega um
                                             peda�o de mem�ria e te d�, no seu ponteiro.
                                             Calloc, pega um peda�o de mem�ria e te d�, no seu ponteiro
                                             e coloca zero em todos os bits da mem�ria alocada.
                                             Ent�o se precisa de mem�ria e precisa zerar a mem�ria calloc � melhor
                                             Caso contrario voc� pecisa de mem�ria e vai fazer outra coisa com ela
                                             nesse caso malloc � mais r�pido

                                          */
        printf("Calloc \t\t Malloc\n");
            for(i=0; i<5; i++){
                    printf("p1[%d] = %d\t",i,p1[i]);
                    printf("p[%d] = %d\t",i,p[i]);
                    }














int main()
{
    system("pause");
    return 0;
}
