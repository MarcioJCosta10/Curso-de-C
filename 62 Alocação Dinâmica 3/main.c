#include <stdio.h>
#include <stdlib.h>
        /* Fun��o malloc():
        Serve para alocar mem�ria durante a
        execu��o do programa.
        Ela faz o pedido de mem�ria ao computador
        e retorna um ponteiro com o endere�o do
        inicio do espa�o de mem�ria alocado.*/

        //Prot�tipo:// Ou seja como ela est� definida nas bibliotecas
        void * malloc(unsigned int num);// Ou seja me retorna um ponteiro gen�rico e recebe um valor inteiro sem sinal // s� pode ser valores positivos pois n�o posso alocar mem�ria negativa // recebe o valor num que � a quantidade de mem�ria em bytes que eu quero
                                        /* Ela retonar um ponteiro gen�rico
                                           pois ponteiro gen�rico aponta para
                                           qualquer tipo de mem�ria o malloc
                                           n�o sabe o que eu vou fazer com a
                                           mem�ria ent�o ele n�o pode me
                                           dar um tipo especifico, ent�o
                                           ele me d� um tipo gen�rico e
                                           eu converto para o que eu
                                           quiser*/
    /*Funcionamento:  pode ocorrer de pedirmos muita mem�ria e n�o funcionar a fun��o malloc;
     A fun��o malloc() recebe por par�metro
     - a quantidade de bytes a ser alocada
     e retona:
    - NULL: No caso de erro;
      ou
    - Ponteiro para a preimeira posi��o do array.*/

    //Exemplo:
    //Cria uma array de 50 inteiros (200 bytes)
    int *v = malloc(200);/* Ap�s ter criado meu vetor agora
                            eu trabalho com ele e n�o preciso
                            mais trabalhar com o meu ponteito,
                            ent�o v[0],v[1]v[2]...v[49];
                            o mesmo vale para meu vetor char
                         */
    // Cria array de 200 char (200 bytes);
    char *c = malloc(200);
         /*
        Na aloca��o de mem�ria, deve-se
        levar em conta o tamanho do tipo.
         */
         // Exemplo: Criar uma array de tamnho 50
         int *v = (int*)malloc(200);
         int *c = (char*)malloc(50);
         // Como tornar essa fun��o menos dependerente e n�o precisar colocar o numero exato dentro do malloc
         //Solu��o: Usar sizeof() dentro do malloc
         int *v = (int*) malloc(50 * sizeof(int));//Eu quero o tamanho 50 vezes o tamnho do inteiro
         int *c = (char*) malloc(50 * sizeof(char));//Eu quero o tamanho 50 vezes o tamanho do char
                                                    /* Ent�o sempre que for trabalhar com aloca��o din�mica
                                                       nunca coloque a quantidade de bytex exato dentro do malloc
                                                       sempre use a definic��o de tipo dentro do sistema
                                                    */


        //Exemplo mais completo:
        /*Se n�o houver mem�ria suficiente
          para alocar a mem�ria requisitada
          a fun��o malloc retornar NULL */
          int *p;
          p = (int*)malloc(5*sizeof(int));
          if(p==NULL){
                printf("Erro: Sem mem�ria!\n");
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
        /*Se n�o houver mem�ria suficiente
          para alocar a mem�ria requisitada
          a fun��o malloc retornar NULL*/
          int *p;
          p = (int*)malloc(5*sizeof(int));
          if(p==NULL){
                printf("Erro: Sem mem�ria!\n");
                exit(1);//Termina o programa
            }
            int i;
            for(i = 0; i<5; i++){
                printf("Digite p[%d]: ",i);
                scanf("%d",&p[i]);/* Perceba que estou trabalhando como um vetor e n�o como um ponteiro
                                   feito a aloca��o e deu certo eu n�o preciso mais lembrar que p � um ponteiro
                                   eu posso trabalhar com p como se fosse somente um vetor
                                  */
                }

        //Libera a mem�ria alocada, no malloc eu pedi mem�ria para o computador, quando n�o for mais usar ou quando o programa for terminar eu tenho que liberar essa mem�ria
        free(p);//

    system("pause");
    return 0;
}
