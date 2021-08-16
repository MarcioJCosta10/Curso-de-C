#include <stdio.h>
#include <stdlib.h>
        /* Função malloc():
        Serve para alocar memória durante a
        execução do programa.
        Ela faz o pedido de memória ao computador
        e retorna um ponteiro com o endereço do
        inicio do espaço de memória alocado.*/

        //Protótipo:// Ou seja como ela está definida nas bibliotecas
        void * malloc(unsigned int num);// Ou seja me retorna um ponteiro genérico e recebe um valor inteiro sem sinal // só pode ser valores positivos pois não posso alocar memória negativa // recebe o valor num que é a quantidade de memória em bytes que eu quero
                                        /* Ela retonar um ponteiro genérico
                                           pois ponteiro genérico aponta para
                                           qualquer tipo de memória o malloc
                                           não sabe o que eu vou fazer com a
                                           memória então ele não pode me
                                           dar um tipo especifico, então
                                           ele me dá um tipo genérico e
                                           eu converto para o que eu
                                           quiser*/
    /*Funcionamento:  pode ocorrer de pedirmos muita memória e não funcionar a função malloc;
     A função malloc() recebe por parâmetro
     - a quantidade de bytes a ser alocada
     e retona:
    - NULL: No caso de erro;
      ou
    - Ponteiro para a preimeira posição do array.*/

    //Exemplo:
    //Cria uma array de 50 inteiros (200 bytes)
    int *v = malloc(200);/* Após ter criado meu vetor agora
                            eu trabalho com ele e não preciso
                            mais trabalhar com o meu ponteito,
                            então v[0],v[1]v[2]...v[49];
                            o mesmo vale para meu vetor char
                         */
    // Cria array de 200 char (200 bytes);
    char *c = malloc(200);
         /*
        Na alocação de memória, deve-se
        levar em conta o tamanho do tipo.
         */
         // Exemplo: Criar uma array de tamnho 50
         int *v = (int*)malloc(200);
         int *c = (char*)malloc(50);
         // Como tornar essa função menos dependerente e não precisar colocar o numero exato dentro do malloc
         //Solução: Usar sizeof() dentro do malloc
         int *v = (int*) malloc(50 * sizeof(int));//Eu quero o tamanho 50 vezes o tamnho do inteiro
         int *c = (char*) malloc(50 * sizeof(char));//Eu quero o tamanho 50 vezes o tamanho do char
                                                    /* Então sempre que for trabalhar com alocação dinâmica
                                                       nunca coloque a quantidade de bytex exato dentro do malloc
                                                       sempre use a definicção de tipo dentro do sistema
                                                    */


        //Exemplo mais completo:
        /*Se não houver memória suficiente
          para alocar a memória requisitada
          a função malloc retornar NULL */
          int *p;
          p = (int*)malloc(5*sizeof(int));
          if(p==NULL){
                printf("Erro: Sem memória!\n");
                exit(1);//Termina o programa
            }
            int i;
            for(i = 0; i<5; i++){
                printf("Digite p[%d]: ",i);
                scanf("%d",&p[i]);
                }


int main()
{

    //Exemplo mais completo:
        /*Se não houver memória suficiente
          para alocar a memória requisitada
          a função malloc retornar NULL*/
          int *p;
          p = (int*)malloc(5*sizeof(int));
          if(p==NULL){
                printf("Erro: Sem memória!\n");
                exit(1);//Termina o programa
            }
            int i;
            for(i = 0; i<5; i++){
                printf("Digite p[%d]: ",i);
                scanf("%d",&p[i]);/* Perceba que estou trabalhando como um vetor e não como um ponteiro
                                   feito a alocação e deu certo eu não preciso mais lembrar que p é um ponteiro
                                   eu posso trabalhar com p como se fosse somente um vetor
                                  */
                }

        //Libera a memória alocada, no malloc eu pedi memória para o computador, quando não for mais usar ou quando o programa for terminar eu tenho que liberar essa memória
        free(p);//

    system("pause");
    return 0;
}
