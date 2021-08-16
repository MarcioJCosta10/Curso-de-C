#include <stdio.h>
#include <stdlib.h>

            //REALLOC
            //N�s vimos a fun��o malloc() e calloc() que � para alocar mem�ria e a fun��o free() que � para liberar mem�ria
            /* Fun��o realloc():
               Serve para alocar ou realocar mem�ria
               durante a execu��o do programa
               Ela faz o pedido da mem�ria ao computador
               e retorna um ponteiro com o endere�o do
               inicio do espa�o de mem�ria alocada
               VANTAGEM: Eu posso ter um vetor que foi alocado
               dinamicamente e eu queira mudar o tamanho dele,
               ent�o ai eu vou realocar ele;
            */
            //PROT�TIPO
            void* realloc (void* ptr, unsigned int num);/* Da mesma forma de malloc e calloc
                                                           a fun��o nao sabe o que eu vou
                                                           fazer com a mem�ria alocada ent�o
                                                           ela retorna um ponteiro gen�rico;
                                                           Recebe dois par�metros:
                                                           1�- Um ponteiro do tipo void*, que
                                                           � o ponteiro onde eu tinha previamente
                                                           alocado mem�ria para poder realocar;
                                                           2� -E unsigned int num que � o novo
                                                           tamanho em bytes que eu quero, igual
                                                           ao que fazemos no malloc
                                                           */

/* Funcionamento:
   A fun��o realloc() recebe por par�metro:
   - Ponteiro para um bloco de mem�ria j� alocada;
   - A quantidade de bytes a ser alocada;
   E retorna:
   - NULL no caso de erro;
   - ponteiro para a primeira posi��o do array.

*/
//Exemplo:
//Cria array de 50 inteiros (200 bytes)
int *v = (int*) malloc(200);
/*Aumenta a mem�ria alocada para 100 inteiros(400 bytes)*/
v = (int*) realloc(v,400);


//COMO ANTES N�O � INTERESSANTE FICAR DIGITAR O VALOR EXATO A SER ALOCADO ENT�O, USAMOS SIZEOF();
        /*
        Na aloca��o da mem�ria, deve se
        levar em conta o tamanho do tipo.
        */
        //Exemplo: Criar um array de tamanho 50;
        int *v = (int*) malloc(200);
        v = (int*) realloc(400);
        //Soluc�o: Usar Sizeof();
        int *v = (int*) malloc(50*sizeof(int));
        v = (int*) realloc(v, 100*sizeof(int));

        // O REALLOC PODE FUNCIONAR DE OUTRAS MANEIRAS EU POSSO TAMB�M ALOCAR MEM�RIA USANDO O REALLOC(();
    /*
        Se o ponteiro para o bloco de mem�ria
        previamente alocado for NULL, a fun��o
        realloc() ir� alocar mem�ria da mesma
        forma como a fun��o malloc().
    */
        int *p;
        //O comando abaixo
        p = (int*) realloc(NULL,50*sizeof(int));/* Ai eu passo o ponteiro NULL como
                                                   primeiro par�metro, que siginifica
                                                   que eu n�o tenho nenhuma posi��o
                                                   valida de mem�ria, n�o exiete
                                                   nenhum vetor alocado;
                                                   Se n�o existe nenhum posi��o
                                                   alocada ele vai alocar
                                                   ent�o o que pede o segundo par�metro;
                                                   */

        // O camando acima Equivale a:
        p = (int*) malloc(50*sizeof(int));

        Da mesma maneira posso tamb�m realocar para tamnho Zero;

        /* Se o tamanho da mem�ria
           solicitado for igual a zero,
           realloc ir� liberar a mem�ria
           da mesma forma que a fun��o
           free()*/
           int *p = (int*) malloc(50*sizeof(int));
           //O comando abaixo
           p = (int*) realloc(p,0);
           //Equivale a
           free(p);

           /* OU SEJA POSSO USAR S� O REALLOC () NO MEU PROGRAMA ELE VAI SERVIR COMO MALLOC() E COMO FREE();*/

// Aqui tem um pequeno truque:
/* CUIDADO: se n�o houver mem�ria
   suficiente para alocar a mem�ria
   requisitada, a fun��o realloc() retorna
   NULL */
   int *p = (int*) malloc(5*sizeof(int));// Aqui eu fiz uma aloca��o com malloc para meu ponteiro p de 5 posi��es
   int *p1 = (int*)realloc(p,15*sizeof(int));/* Em determinado momento eu me
                                                toquei que 5 posi��es � pouco
                                                ent�o eu vou realocar p para
                                                15 posi��es de inteiros mas
                                                veja que eu salvei ele no
                                                meu ponteiro p1, mas porque eu fiz isso?
                                                Como funciona o realloc? Ele retorna
                                                o ponteiro para a primeira posi��o
                                                de mem�ria ou NULL, NULL ir�
                                                retornar se deu erro.
                                                Se deu erro ele vai retornar aqui no meu p1 mas meu p continua
                                                intacto, pois se ele retornar no meu p
                                                e der erro eu vou perder o que tem no meu programa, ent�o eu fa�o em duas etapas;
                                                 */
    if(p1 != NULL){// se p1 � diferente de NULL //Realoca��o deu certo
        p = p!; // Ai eu simplismente copio a informa��o, ou seja, p passa valer p1, eu esque�o de p1, e continuo a trabalhar com p no meu programa p[]...;
        }       /*S� um detalhe se tiver alquma coisa dentro do p
                  ao efetuar o realloc, e se o realloc deu certo,
                  ele j� copia p para p1, n�o � necess�rio eu
                  copiar pois ele j� faz isso autmoaticamente*/



   /* A fun��o free(): sempre que alocamos
      mem�ria � necess�rio liber�-la quando
      ela n�o for mais necess�ria */
        int *p = (int*) malloc(5*sizeof(int));
        p = (int*)realloc(p,15*sizeof(int));// Ent�o aqui � o exemplo dito acima p direto no proprio p
        if(p==NULL){//Se p for NULL eu perdi esses dados de p, ent�o n�o � interessante fazer isso

            printf("Erro: Sem Mem�ria!\n");
            exit(1);//Termina o programa
    }
   //Libera a mem�ria
   free(p);// Mesmo que eu tenha alocado ou realocado, no final eu tenho que fazer um free() ou com o realloc tamanho zero;;







int main()
{

    return 0;
}
