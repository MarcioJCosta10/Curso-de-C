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
    //Ponteiro recebe endereço da função
    p = soma;
    z = p(x,y);
    printf("Soma = %d\n",z);

    system("pause");
    return 0;
}
*/
/*
                    "Ponteiro para Função"
            - Uma Função é um conjunto de intruções armazenadas
            na "memória"
            - Podemos acessar uma função por meio de um "ponteiro"
            que aponte para onde a função está na memória


            Porque usar "Ponteiros para Função"?
            - Isso permite a contrução de códigos mais genéricos

            "Um Exemplo do que eu poss fazer é: Ordenação"
            - Podemos definir um algoritmo que ordene "números inteiros"
            e querer reutilizar essa implementação para ordenar outros
            tipos de dados.
            Em vez de reescrever toda a função de ordenação, podemos
            passar para essa função o ponteiro da "Função de comparação"
            que desejamos reutilizar para cada tipo de dado;

            Como faço para decalara um ponteiro para função:
               "Ponteiro para Função"
               "Forma Geral:"

               tipo_retornado(*nome_do_ponteiro)(lista_de_tipos)

               "Importante"
               - O "nome do ponteiro" deve ser colocado entre "parenteses"
               juntamente com o * "asterisco"

               - Isso é necessário para evitar confusões com a declaração
               de funções que retornem ponteiros

               "Função que retorna ponteiro"
               tipo_retornado *nome_da_função(lista_de_parâmetros)

               "Ponteiro para função "
               tipo_retornado (*nome_do_ponteiro)(lista_de_tipos)

               "Ponteiro para função"
               - Um ponteiro para função só pode apontar para
               funções que possuam o mesmo "protótipo"

               - Se declararmos um ponteiro para funções como
               int (*ptr) (int,int);
               - ele poderá apontar para qualquer função que
               receba "dois parametros inteiros " e retorne
               "um valor inteiro". Por exemplo
               int soma(int x, int y);
               Como faço a atribuição?
               Quero atribuir o meu ponteiro para minha função;
               - O nome de uma função é seu endereço na memória
               ptr = soma;// Ponteiro recebe o nome da função
               "Importante"
               - Ponteiros não inicializados apontam para um lugar indefinido.
               - O Ponteiro para função também pode ser inicializado com a constante
               "NULL"



*/
 /*                   "Posso fazer mais do que isso"
                    "Passando um ponteiro para função como parametro"
                    - Para declarar uma função que possa receber
                    um "ponteiro para função"  como "parâmetro", tudo o
                    que devemos fazer é incorporar a declaração de um "ponteiro para uma função"
                    dentro da declaração dos "parâmetros" da função


                    - Considere o seguinte "ponteiro para função "
                    int (*ptr)(int,int);
                    - Se quisermos passar esse ponteiro para outra função,
                    devemos declarar esse ponteiro na lista de "parâmetros"

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
    int(*p)(int,int); // declarei o ponteiro para unção
    printf("Digite 2 numeros: ");
    scanf("%d %d",&x,&y);
    printf("Maior = %d\n",executa(max,x,y));
    printf("Soma = %d\n", executa(soma,x,y));


    system("pause");
    return 0;
}











