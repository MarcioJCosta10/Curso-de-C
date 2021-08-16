#include <stdio.h>
#include <stdlib.h>
    //FUNÇÃO CALLOC(): funcionamento similar a função malloc
    /*
        Função calloc(): serve para alocar memória durante a
        execução do programa.
        Ela faz o pedido a memória ao computador
        e retorna um ponteiro com o endereço do
        inicio do espaço de memória alocado. */

        // Protótipo:
        void* calloc(unsigned int num,unsigned int size);// Também retorna um ponteiro genérico pois o calloc igual ao
                                                         // malloc não sabe o que vou fazer com a memória, então eu converto para o que eu quiser
                                                         /*
                                                         Recebe dois parâmentros:(unsigned pois não podemos alocar memória negativa)
                                                         unsigned int num : Quantidade de bytes que eu quero alocar// Aqui Quantas posições de memória eu quero no meu vetor
                                                         unsigned int size : Qual é o tamanho de cada posição de memória do meu vetor;
                                                         No malloc faziamos isso de uma vez só, aqui eu faço um de cada vez

                                                         */

        /* Funcionamento:
        A função calloc() recebe por parâmentro:
        - Numero de elementos no array a ser alocado
        - Tamanho de cada elemento do array
        E retorna:
        - No caso de erro: NULL
        - Ponteiro para a primeira posição do array.
        */
        //Exemplo:
        //Cria array de 50 inteiros (4 bytes cada)
        int* v = (int*)calloc(50,4);// Perceba novamente que é dependente do tipo que eu estou criando
        //Cria array de 200 char (1 bytes cada)
        char* c= (char*)calloc(200,1); // Perceba novamente que é dependente do tipo que eu estou criando

        /*
            Na alocação da memória, deve-se levar em conta o tamanho do tipo.
            Exemplo: criar um array de tamanho 50;

        */
        int *v = (int*) calloc(50,4);
        char *c = (char*) calloc(50,1);

        /*E como eu não quero ficar decorando
          o tamnho de cada tipo quando eu estiver
          desenvolvendo principalmente por que
          pode variar por causa do sistema e em
          estruturas é dificil eu saber exatamente
          o que tem em cada campo, então vou usar
          o operador sizeof();
            */
        // Solução usar: Sizeof();
        int *v = (int*) callo(50,sizeof(int));  // Entaõ eu quero 50 posições no meu vetor onde cada posição é do tamanho do int (4 bytes);
        int *c = (char*) callo(50,sizeof(char));// Entaõ eu quero 50 posições no meu vetor de caracteres (uma string)onde cada posição é do tamanho de um char(1 byte);



        //Exemplo mais completo:
        /*Se não houver memória suficiente
          para alocar a memória requisitada
          a função calloc() retornar NULL
          */
          int *p;
          p = (int*)calloc(5,sizeof(int));// Aqui fiz uma conversão mais forte onde pego o meu void e converto para int*, e eu quero 5 posições do tipo int;
            if(p == NULL){//Verificação
                    printf("Erro: Sem memória!\n");
                    exit(1);//Termina o programa
                    }
        int i;// Se eu não entrei dentro do meu if então eu estou aqui deu certo meu processo de alocação
        for(i=0;i<5;i++)// Vou fazer um for
        printf("Digite o valor de p[%d]:",i);
        scanf("%d",&p[i]);/*para ler o meu vetor alocado;
                            E lembre-se que p começou como
                            um ponteiro mas ele aqui virou
                            um vetor, então trabalho como
                            vetor e esqueço que ele é ponteiro;
                            Então continuo trabalhando no resto
                            do meu programa como um vetor*/
        //Libera a memória alocada
        free(p);

            //QUAL A DIFERENÇA DE MALLOC PARA CALLOC?
        /*
        Malloc() versus Calloc(): ambas servem para alocar
        memória, mas calloc() inicializa todos os BITS do espaço
        alocado com 0,s;*/

        int i;
        int *p, *p1;
        p = (int*) malloc(5*sizeof(int));/*1ª Diferenças: Os parâmetros onde
                                           o malloc recebe um parâmentro
                                           e é feito a multiplicação
                                           e o calloc recebe dois parametro*/
        p1 = (int*) calloc(5,sizeof(int)) /* 2ª Diferença: Malloc faz apenas a
                                             alocação de memória pega um
                                             pedaço de memória e te dá, no seu ponteiro.
                                             Calloc, pega um pedaço de memória e te dá, no seu ponteiro
                                             e coloca zero em todos os bits da memória alocada.
                                             Então se precisa de memória e precisa zerar a memória calloc é melhor
                                             Caso contrario você pecisa de memória e vai fazer outra coisa com ela
                                             nesse caso malloc é mais rápido

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
