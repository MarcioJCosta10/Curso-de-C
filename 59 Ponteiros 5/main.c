#include <stdio.h>
#include <stdlib.h>
                // PONTEIROS PARA PONTEIROS
                //Até agora vimos ponteiros que apontavam para outro tipo de dado ou seja se tem um pontiro int ele apontava para int

               // O ponteiro para ponteiro faz o que? Você tem um ponteiro que aponta para outro ponteiro

               /* A linguagem C permite criar ponteiros
                  com diferentes niveis de apontamento:
                  ponteiros que apontam para outros ponteiros

               */
                int x = 10;
                int *p = &x;//Aqui tenho um ponteiro que recebe o endereço de x
                int **p2 = &p;//Aqui tenho um ponteiro para ponteiro de inteiro
                // Endereo em p2
                printf("p2: %d \n", p2);//&p
                // Conteudo do endereço
                printf("*p2: %d\n",*p2);//&x
                //Conteudo do endereço do endereço
                printf("**p2: %d\n",**p2);//x  // Então eu tenho aqui P2 que aponta para P que aponta para X
                                               // Qunado eu uso **p2 eu estou indo dentro pegando o conteudo dentro de x
                                                **p2 = &p; Então vou acessar os valores dele
                                                p2 --> p --> x
                                                se eu imprimo p2 eu vou imprimir  o endereço de p
                                                se eu imprimo *p2 eu vou imrimir o endredeço de x
                                                se eu imprimo **p2 eu vou ir até o final dele imprimindo o proprio x, ou seja o conteudo do meu último endereço
                                                NÃO TEM SEGREDO SÓ TOMAR CUIDADO COM A ORDEM DOS ASTERISCOS PARA NÃO ESTAR ACESSANDO O CONTEUDO INTEMEDIÁRIO DELE

        //NÃO TEM LIMTE PARA O NIVEL DE PONTEIRO QUE ESTOU CRIAANDO

        /* É a quantidade de asteriscos (*) na
           declaração do ponteiro que indica o
           numero de niveis do ponteiro */

           //variável int
           int x;
           //Ponteiro para int (1 nievel)
           int *p1;
           //Ponteiro para ponteiro de int (2 nivel)
           int **p2
           //Ponteiro para ponteiro para ponteiro de int (3 niveis)
           int ***p3

           //Outro exemplo de 3 níveis de ponteiro
           /* Acessando o conteudo de
              um ponteiro para ponteiro */
              char letra = 'a';
              char ptrChar = &letra;
              char **prtPtrChar = &ptrChar;
              char ***ptrPtr = &ptrPtrChar;
              printf("*ptrChar: %c\n,",*ptrChar);
              printf("**ptrPtrChar: %c\n,",**ptrPtrChar);
              printf("***ptrPtr: %c\n,",***ptrPtr);




int main()
{

    return 0;
}
