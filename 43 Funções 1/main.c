#include <stdio.h>
#include <stdlib.h>
    /*
    FUN��O: Conjunto de comandos que recebe um nome e pode ser chamada em parte do programa,
            quantas vezes forem necess�rias.
            //Vantagens: estrutura��o do programa e reutiliza��o de c�digos
            //Exemplos:
            scanf("%d", &x);
            printf("%d", x);


        */

        int quadrado (int a){ // Aqui � onde devo declarar a fun��o mas eu posso declarar ela embaixo
        return a*a;
        };
        int quadrado(int a);//Prot�tipo 1 da fun��o,  siplismente o inicio da fun��o;
        int quadrado (int);// Prot�tipo 2 da fun��o,  siplismente o inicio da fun��o �so com o tipo do parametro;



int main(){// O proprio main tamb�m � uma fun��o:
    //FORMA GERAL DE UMA FUN��O
    tipo nome_fun��o(par�mentros){
        conjunto de declara��es e
        comandos
        }

        //EXEMPLO DE UMA FUN��O:

        int x,y;
        printf("Digite o valor de x: ");
        scanf("%d",&x);
        y = quadrado(x);// poderia usar tab�m a fun��o SQRT(X); QUE J� EXITE NA BIBLIOTECA
        printf("y = %d \n", y);


    system("pause");
    return 0;
}


    /*Onde declarar a fun��o? Fica a crit�rio do programador
        Se for depois do main(), precisamos definir o seu prot�tipo; */
//Fun��o:
    int quadrado(int a){
        return a*a;

    };

