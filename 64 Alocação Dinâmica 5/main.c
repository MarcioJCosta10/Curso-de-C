#include <stdio.h>
#include <stdlib.h>

            //REALLOC
            //Nós vimos a função malloc() e calloc() que é para alocar memória e a função free() que é para liberar memória
            /* Função realloc():
               Serve para alocar ou realocar memória
               durante a execução do programa
               Ela faz o pedido da memória ao computador
               e retorna um ponteiro com o endereço do
               inicio do espaço de memória alocada
               VANTAGEM: Eu posso ter um vetor que foi alocado
               dinamicamente e eu queira mudar o tamanho dele,
               então ai eu vou realocar ele;
            */
            //PROTÓTIPO
            void* realloc (void* ptr, unsigned int num);/* Da mesma forma de malloc e calloc
                                                           a função nao sabe o que eu vou
                                                           fazer com a memória alocada então
                                                           ela retorna um ponteiro genérico;
                                                           Recebe dois parâmetros:
                                                           1º- Um ponteiro do tipo void*, que
                                                           é o ponteiro onde eu tinha previamente
                                                           alocado memória para poder realocar;
                                                           2º -E unsigned int num que é o novo
                                                           tamanho em bytes que eu quero, igual
                                                           ao que fazemos no malloc
                                                           */

/* Funcionamento:
   A função realloc() recebe por parâmetro:
   - Ponteiro para um bloco de memória já alocada;
   - A quantidade de bytes a ser alocada;
   E retorna:
   - NULL no caso de erro;
   - ponteiro para a primeira posição do array.

*/
//Exemplo:
//Cria array de 50 inteiros (200 bytes)
int *v = (int*) malloc(200);
/*Aumenta a memória alocada para 100 inteiros(400 bytes)*/
v = (int*) realloc(v,400);


//COMO ANTES NÃO É INTERESSANTE FICAR DIGITAR O VALOR EXATO A SER ALOCADO ENTÃO, USAMOS SIZEOF();
        /*
        Na alocação da memória, deve se
        levar em conta o tamanho do tipo.
        */
        //Exemplo: Criar um array de tamanho 50;
        int *v = (int*) malloc(200);
        v = (int*) realloc(400);
        //Solucão: Usar Sizeof();
        int *v = (int*) malloc(50*sizeof(int));
        v = (int*) realloc(v, 100*sizeof(int));

        // O REALLOC PODE FUNCIONAR DE OUTRAS MANEIRAS EU POSSO TAMBÉM ALOCAR MEMÓRIA USANDO O REALLOC(();
    /*
        Se o ponteiro para o bloco de memória
        previamente alocado for NULL, a função
        realloc() irá alocar memória da mesma
        forma como a função malloc().
    */
        int *p;
        //O comando abaixo
        p = (int*) realloc(NULL,50*sizeof(int));/* Ai eu passo o ponteiro NULL como
                                                   primeiro parâmetro, que siginifica
                                                   que eu não tenho nenhuma posição
                                                   valida de memória, não exiete
                                                   nenhum vetor alocado;
                                                   Se não existe nenhum posição
                                                   alocada ele vai alocar
                                                   então o que pede o segundo parâmetro;
                                                   */

        // O camando acima Equivale a:
        p = (int*) malloc(50*sizeof(int));

        Da mesma maneira posso também realocar para tamnho Zero;

        /* Se o tamanho da memória
           solicitado for igual a zero,
           realloc irá liberar a memória
           da mesma forma que a função
           free()*/
           int *p = (int*) malloc(50*sizeof(int));
           //O comando abaixo
           p = (int*) realloc(p,0);
           //Equivale a
           free(p);

           /* OU SEJA POSSO USAR SÓ O REALLOC () NO MEU PROGRAMA ELE VAI SERVIR COMO MALLOC() E COMO FREE();*/

// Aqui tem um pequeno truque:
/* CUIDADO: se não houver memória
   suficiente para alocar a memória
   requisitada, a função realloc() retorna
   NULL */
   int *p = (int*) malloc(5*sizeof(int));// Aqui eu fiz uma alocação com malloc para meu ponteiro p de 5 posições
   int *p1 = (int*)realloc(p,15*sizeof(int));/* Em determinado momento eu me
                                                toquei que 5 posições é pouco
                                                então eu vou realocar p para
                                                15 posições de inteiros mas
                                                veja que eu salvei ele no
                                                meu ponteiro p1, mas porque eu fiz isso?
                                                Como funciona o realloc? Ele retorna
                                                o ponteiro para a primeira posição
                                                de memória ou NULL, NULL irá
                                                retornar se deu erro.
                                                Se deu erro ele vai retornar aqui no meu p1 mas meu p continua
                                                intacto, pois se ele retornar no meu p
                                                e der erro eu vou perder o que tem no meu programa, então eu faço em duas etapas;
                                                 */
    if(p1 != NULL){// se p1 é diferente de NULL //Realocação deu certo
        p = p!; // Ai eu simplismente copio a informação, ou seja, p passa valer p1, eu esqueço de p1, e continuo a trabalhar com p no meu programa p[]...;
        }       /*Só um detalhe se tiver alquma coisa dentro do p
                  ao efetuar o realloc, e se o realloc deu certo,
                  ele já copia p para p1, não é necessário eu
                  copiar pois ele já faz isso autmoaticamente*/



   /* A função free(): sempre que alocamos
      memória é necessário liberá-la quando
      ela não for mais necessária */
        int *p = (int*) malloc(5*sizeof(int));
        p = (int*)realloc(p,15*sizeof(int));// Então aqui é o exemplo dito acima p direto no proprio p
        if(p==NULL){//Se p for NULL eu perdi esses dados de p, então não é interessante fazer isso

            printf("Erro: Sem Memória!\n");
            exit(1);//Termina o programa
    }
   //Libera a memória
   free(p);// Mesmo que eu tenha alocado ou realocado, no final eu tenho que fazer um free() ou com o realloc tamanho zero;;







int main()
{

    return 0;
}
