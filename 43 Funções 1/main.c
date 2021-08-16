#include <stdio.h>
#include <stdlib.h>
    /*
    FUNÇÃO: Conjunto de comandos que recebe um nome e pode ser chamada em parte do programa,
            quantas vezes forem necessárias.
            //Vantagens: estruturação do programa e reutilização de códigos
            //Exemplos:
            scanf("%d", &x);
            printf("%d", x);


        */

        int quadrado (int a){ // Aqui é onde devo declarar a função mas eu posso declarar ela embaixo
        return a*a;
        };
        int quadrado(int a);//Protótipo 1 da função,  siplismente o inicio da função;
        int quadrado (int);// Protótipo 2 da função,  siplismente o inicio da função ´so com o tipo do parametro;



int main(){// O proprio main também é uma função:
    //FORMA GERAL DE UMA FUNÇÃO
    tipo nome_função(parâmentros){
        conjunto de declarações e
        comandos
        }

        //EXEMPLO DE UMA FUNÇÃO:

        int x,y;
        printf("Digite o valor de x: ");
        scanf("%d",&x);
        y = quadrado(x);// poderia usar tabém a função SQRT(X); QUE JÁ EXITE NA BIBLIOTECA
        printf("y = %d \n", y);


    system("pause");
    return 0;
}


    /*Onde declarar a função? Fica a critério do programador
        Se for depois do main(), precisamos definir o seu protótipo; */
//Função:
    int quadrado(int a){
        return a*a;

    };

