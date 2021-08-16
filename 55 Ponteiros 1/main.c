#include <stdio.h>
#include <stdlib.h>
        PONTEIROS:

    Vamos pensar primeiro em vari�veis:
        Todos programas que desenvolvemos at� agora usamos vari�veis:

    Vari�veis: Usamos para armazenam dados;
        int, float, double, char, struct, etc...

    Ponteiros: � um tipo especial de vari�vel que usamos para armazenar
    endere�o de mem�ria;

    //FORMA GERAL DE DECLARA��O
    Vari�veis:
        tipo_vari�vel nome_vari�vel
        int x;

    Ponteiros:
        tipo_ponteiro *nome_ponteiro
        int *x;

        int x, *y;// Posso misturar declara��es

        INICIALIZA��O DOS PONTEIROS
        /*Ponteiros n�o inicializados
        apontam para um lugar indefinido*/

        int *p;
        /* Um ponteiro pode ter um valor
        especial NULL, que � o endere�o de
        nehum lugar */
        int *p = NULL;    1� Forma de inicializar usando NULL;
                            /*N�o posso utilizar um ponteiro sem inicializar
                             ele pois ele ter� lixo de mem�ria, e para inicializar
                             uso a palavra NULL, Quer dizer que aponta para um
                             valor que n�o existe na mem�ria*/
        //ESSA � A PRIMEIRA FORMA;
                          2� Forma de inicializar � pegar o endere�o de alguem que est� na mem�ria:
                           /*Podemos apontar o ponteiro
                              para uma vari�vel que j�
                              no nosso programa*/

        int x = 10;//Vari�vel
        int *p; // Ponteiro
        // Ponteiro p aponta para a variavel x
        p = &x;// Se o x est� na posi��o de mem�ria #12 o meu p estpa na posi��o #15 p vair receber o valor de #12, ou seja o valor do endere�o de x;
        printf("x = %d\n",x);// Aqui imprime x = 10
        printf("Endere�o de x = %d\n",&x); // Aqui imprime o endere�o de mem�ria de x
        printf("p = %d\n",p);// Aqui como foi atribuido a p o endere�o de mem�ria de x  p vai ser impresso o endere�o de mem�ria de x;
       //ESSA � A SEGUNDA FORMA;

       ACESSAR O CONTEUDO DE FORMA DIRETA
       /*
        Para acessar o valor da vari�vel
        apontada por um ponteiro, basta
        usar o operador asterisco (*)
       */

       int x = 10;// variavel
       int *p;// Ponteiro -> Posso usar o * para declarar o ponteiro
       //Ponteiro p aponta para a vari�vel x
       p = &x;
       printf("x = %d\n",x);    // Aqui imprimo 10
       printf("p = %d\n",p);    // Aqui imprimo o endere�o de x
       printf("*p = %d\n",*p);  //Aqui vou imprimir 10 que � o valor guardado dentro do endere�o guardado em p;
                                /* Posso tamb�m usar para
                                   acessar o conteudo do
                                   ponteiro, aqui est� dizendo que
                                   posso pegar o endere�o
                                   #12(endere�o da variavel x) ir
                                   la dento dele e pegar o valor
                                   que est� guardado */


       /*O operador asterisco (*)permite pegar o
         valor l� dentro do endere�o, mas ele
         permite tamb�m modificar esse valor(o conteudo da
         posi��o de mem�ria apontada.)*/

       int x = 10; // Vari�vel
       int *p;// Ponteiro
       //Ponteiro p aponta para a vari�vel x
       p = &x;
       printf("x = %d\n",x);// aqui imprimo 10
       *p = 12; // Aqui estou dizendo para pegar o endere�o para onde p aponta e escrever l� dentro o valor 12
       printf("*p = %d\n",*p); //Aqui imprimo 12
       printf("x = %d\n",x); // Vou imprimir o x novamente como 12

    Ent�o o ponteiro permite que eu modifique o valor de outra vari�vel de forma indireta, no caso acima em nehum momento
    eu mexi com o x eu mexi com alguem que sabia onde x estava na mem�ria

int main()


{
    system("pause");
    return 0;
}
