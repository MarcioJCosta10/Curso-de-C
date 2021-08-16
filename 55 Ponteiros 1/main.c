#include <stdio.h>
#include <stdlib.h>
        PONTEIROS:

    Vamos pensar primeiro em variáveis:
        Todos programas que desenvolvemos até agora usamos variáveis:

    Variáveis: Usamos para armazenam dados;
        int, float, double, char, struct, etc...

    Ponteiros: É um tipo especial de variável que usamos para armazenar
    endereço de memória;

    //FORMA GERAL DE DECLARAÇÃO
    Variáveis:
        tipo_variável nome_variável
        int x;

    Ponteiros:
        tipo_ponteiro *nome_ponteiro
        int *x;

        int x, *y;// Posso misturar declarações

        INICIALIZAÇÃO DOS PONTEIROS
        /*Ponteiros não inicializados
        apontam para um lugar indefinido*/

        int *p;
        /* Um ponteiro pode ter um valor
        especial NULL, que é o endereço de
        nehum lugar */
        int *p = NULL;    1ª Forma de inicializar usando NULL;
                            /*Não posso utilizar um ponteiro sem inicializar
                             ele pois ele terá lixo de memória, e para inicializar
                             uso a palavra NULL, Quer dizer que aponta para um
                             valor que não existe na memória*/
        //ESSA É A PRIMEIRA FORMA;
                          2ª Forma de inicializar é pegar o endereço de alguem que está na memória:
                           /*Podemos apontar o ponteiro
                              para uma variável que já
                              no nosso programa*/

        int x = 10;//Variável
        int *p; // Ponteiro
        // Ponteiro p aponta para a variavel x
        p = &x;// Se o x está na posição de memória #12 o meu p estpa na posição #15 p vair receber o valor de #12, ou seja o valor do endereço de x;
        printf("x = %d\n",x);// Aqui imprime x = 10
        printf("Endereço de x = %d\n",&x); // Aqui imprime o endereço de memória de x
        printf("p = %d\n",p);// Aqui como foi atribuido a p o endereço de memória de x  p vai ser impresso o endereço de memória de x;
       //ESSA É A SEGUNDA FORMA;

       ACESSAR O CONTEUDO DE FORMA DIRETA
       /*
        Para acessar o valor da variável
        apontada por um ponteiro, basta
        usar o operador asterisco (*)
       */

       int x = 10;// variavel
       int *p;// Ponteiro -> Posso usar o * para declarar o ponteiro
       //Ponteiro p aponta para a variável x
       p = &x;
       printf("x = %d\n",x);    // Aqui imprimo 10
       printf("p = %d\n",p);    // Aqui imprimo o endereço de x
       printf("*p = %d\n",*p);  //Aqui vou imprimir 10 que é o valor guardado dentro do endereço guardado em p;
                                /* Posso também usar para
                                   acessar o conteudo do
                                   ponteiro, aqui está dizendo que
                                   posso pegar o endereço
                                   #12(endereço da variavel x) ir
                                   la dento dele e pegar o valor
                                   que está guardado */


       /*O operador asterisco (*)permite pegar o
         valor lá dentro do endereço, mas ele
         permite também modificar esse valor(o conteudo da
         posição de memória apontada.)*/

       int x = 10; // Variável
       int *p;// Ponteiro
       //Ponteiro p aponta para a variável x
       p = &x;
       printf("x = %d\n",x);// aqui imprimo 10
       *p = 12; // Aqui estou dizendo para pegar o endereço para onde p aponta e escrever lá dentro o valor 12
       printf("*p = %d\n",*p); //Aqui imprimo 12
       printf("x = %d\n",x); // Vou imprimir o x novamente como 12

    Então o ponteiro permite que eu modifique o valor de outra variável de forma indireta, no caso acima em nehum momento
    eu mexi com o x eu mexi com alguem que sabia onde x estava na memória

int main()


{
    system("pause");
    return 0;
}
