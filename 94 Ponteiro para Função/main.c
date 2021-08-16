#include <stdio.h>
#include <stdlib.h>
/*
int soma(int a, int b ){
    return a + b;
}
int main(){
    int x,y,z;
    int(*p)(int,int);
    printf("Digite dois numeros: ");
    scanf("%d %d",&x,&y);
    //Ponteiro recebe endere�o da fun��o
    p = soma;
    z = p(x,y);
    printf("Soma = %d\n",z);

    system("pause");
    return 0;
}
*/
/*
                    "Ponteiro para Fun��o"
            - Uma Fun��o � um conjunto de intru��es armazenadas
            na "mem�ria"
            - Podemos acessar uma fun��o por meio de um "ponteiro"
            que aponte para onde a fun��o est� na mem�ria


            Porque usar "Ponteiros para Fun��o"?
            - Isso permite a contru��o de c�digos mais gen�ricos

            "Um Exemplo do que eu poss fazer �: Ordena��o"
            - Podemos definir um algoritmo que ordene "n�meros inteiros"
            e querer reutilizar essa implementa��o para ordenar outros
            tipos de dados.
            Em vez de reescrever toda a fun��o de ordena��o, podemos
            passar para essa fun��o o ponteiro da "Fun��o de compara��o"
            que desejamos reutilizar para cada tipo de dado;

            Como fa�o para decalara um ponteiro para fun��o:
               "Ponteiro para Fun��o"
               "Forma Geral:"

               tipo_retornado(*nome_do_ponteiro)(lista_de_tipos)

               "Importante"
               - O "nome do ponteiro" deve ser colocado entre "parenteses"
               juntamente com o * "asterisco"

               - Isso � necess�rio para evitar confus�es com a declara��o
               de fun��es que retornem ponteiros

               "Fun��o que retorna ponteiro"
               tipo_retornado *nome_da_fun��o(lista_de_par�metros)

               "Ponteiro para fun��o "
               tipo_retornado (*nome_do_ponteiro)(lista_de_tipos)

               "Ponteiro para fun��o"
               - Um ponteiro para fun��o s� pode apontar para
               fun��es que possuam o mesmo "prot�tipo"

               - Se declararmos um ponteiro para fun��es como
               int (*ptr) (int,int);
               - ele poder� apontar para qualquer fun��o que
               receba "dois parametros inteiros " e retorne
               "um valor inteiro". Por exemplo
               int soma(int x, int y);
               Como fa�o a atribui��o?
               Quero atribuir o meu ponteiro para minha fun��o;
               - O nome de uma fun��o � seu endere�o na mem�ria
               ptr = soma;// Ponteiro recebe o nome da fun��o
               "Importante"
               - Ponteiros n�o inicializados apontam para um lugar indefinido.
               - O Ponteiro para fun��o tamb�m pode ser inicializado com a constante
               "NULL"



*/
 /*                   "Posso fazer mais do que isso"
                    "Passando um ponteiro para fun��o como parametro"
                    - Para declarar uma fun��o que possa receber
                    um "ponteiro para fun��o"  como "par�metro", tudo o
                    que devemos fazer � incorporar a declara��o de um "ponteiro para uma fun��o"
                    dentro da declara��o dos "par�metros" da fun��o


                    - Considere o seguinte "ponteiro para fun��o "
                    int (*ptr)(int,int);
                    - Se quisermos passar esse ponteiro para outra fun��o,
                    devemos declarar esse ponteiro na lista de "par�metros"

                    int executa(int(*ptr)(int,int), int x, int y);


                    Exemplo:
                    */

int executa(int(*ptr)(int,int),int x, int y){
    return ptr(x,y);// Aqui vai retornar o resultado associado ao ponteiro
}
int max(int a, int b){return (a>b)?a:b;}
int soma(int a, int b){return a + b;}
int main(){
    int x, y,z;
    int(*p)(int,int); // declarei o ponteiro para un��o
    printf("Digite 2 numeros: ");
    scanf("%d %d",&x,&y);
    printf("Maior = %d\n",executa(max,x,y));
    printf("Soma = %d\n", executa(soma,x,y));


    system("pause");
    return 0;
}











