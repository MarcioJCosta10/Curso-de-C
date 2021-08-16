#include <stdio.h>
#include <stdlib.h>
/*
    // PASSAGEM DE PARÂMENTROS

    A linguagem C permite dois tipos de passagem  de parâmetros para uma função

    "POR VALOR":
     cópia do dado (padrão)
     Uma cópia do dado é feita e passada para a função

     É o modo padrão para os tipos básicos pré-definidos
     int, char, float, double e tipos definidos pelo programados
     struct

     //Exemplo de passagem "Por Valor"
     void imprime_log(float x);// Estamos declarando os parâmentros como vinhamos fazendo até agora como uma variavel, essa é a passagem por valor
     int maior (int x, int y);  // Não muda nada do que já tinhamos visto até aqui
     void exibe_dados(struct aluno a);


     "POR REFERENCIA":
      endereço do dado original
    */

    //Exemplo passagem por valor:
    void soma_mais_um (int n ){// x = n O valor de x é copiado para dentro do parâmetro n, aqui ocorre uma atribuição sem percebermos
    n = n + 1;                 // int n é o parâmetro que iremos receber de inteiro
                                // 3- a função e executada com o paramentro passado
                                // O QUE ACONTECE DENTRO DE UMA FUNÇÃO PASSADA POR VALOR NADA AOCNTECE FORA DELA NADA MUDA;
    printf("Dentro da funcao: x = %d\n", n);


    }
int main()
{
    //Exemplo de passagem "Por Valor" - É uma cópia do que será passado
    int x = 5; // 1- Aqui será nosso parâmentro atribuido a x;
    printf("Antes da funcao: x = %d\n", x);
    soma_mais_um(x); // 2- aqui a função passa x como parâmetro por valor para dentro da função - É UMA CÓPIA DO DADO
    printf("Depois da funcao: x = %d\n", x); // 4- A variável volta ao valor original



    return 0;
}
