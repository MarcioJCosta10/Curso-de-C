#include <stdio.h>
#include <stdlib.h>
/*
    // PASSAGEM DE PAR�MENTROS

    A linguagem C permite dois tipos de passagem  de par�metros para uma fun��o

    "POR VALOR":
     c�pia do dado (padr�o)
     Uma c�pia do dado � feita e passada para a fun��o

     � o modo padr�o para os tipos b�sicos pr�-definidos
     int, char, float, double e tipos definidos pelo programados
     struct

     //Exemplo de passagem "Por Valor"
     void imprime_log(float x);// Estamos declarando os par�mentros como vinhamos fazendo at� agora como uma variavel, essa � a passagem por valor
     int maior (int x, int y);  // N�o muda nada do que j� tinhamos visto at� aqui
     void exibe_dados(struct aluno a);


     "POR REFERENCIA":
      endere�o do dado original
    */

    //Exemplo passagem por valor:
    void soma_mais_um (int n ){// x = n O valor de x � copiado para dentro do par�metro n, aqui ocorre uma atribui��o sem percebermos
    n = n + 1;                 // int n � o par�metro que iremos receber de inteiro
                                // 3- a fun��o e executada com o paramentro passado
                                // O QUE ACONTECE DENTRO DE UMA FUN��O PASSADA POR VALOR NADA AOCNTECE FORA DELA NADA MUDA;
    printf("Dentro da funcao: x = %d\n", n);


    }
int main()
{
    //Exemplo de passagem "Por Valor" - � uma c�pia do que ser� passado
    int x = 5; // 1- Aqui ser� nosso par�mentro atribuido a x;
    printf("Antes da funcao: x = %d\n", x);
    soma_mais_um(x); // 2- aqui a fun��o passa x como par�metro por valor para dentro da fun��o - � UMA C�PIA DO DADO
    printf("Depois da funcao: x = %d\n", x); // 4- A vari�vel volta ao valor original



    return 0;
}
