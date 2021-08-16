#include <stdio.h>
#include <stdlib.h>
             /*   Operador sizeof
                Primeira coisa que precisamos saber é que: Vamos pedir memória no processo de alocação dinâmica ao computador,
                só que a quantidade de memória que precisamos depende do que vamos guardar nessa memória:
        /*
            Alocar memória do tipo int é diferente de
            alocar memória do tipo char:
            - tipos diferentes podem ter tamanhos
            diferentes na memória

            char:   1 byte;
            int:    4 bytes; // O int pode varira dependendo do sistema
            float:  4 bytes;
            double: 8 bytes;
                            // Em uma estrutura é dificil saber quantos tipos eu tenho e quanto vou precisar de memória
            Então: Como vou saber quantos bytes eu preciso? Eu uso o operador sizeof;
            /*  O Operador sizeof() retorna o
            numero de bytes necessários para
            alocar um único elemento de um determinado
            tipo de dado

            // Forma Geral:
            sizeof(nome_do_tipo)
            // Exemplo:

            int x = sizeof(int);
            printf("%x = %d\n",x)
            */

        // Exemplo 2

    struct ponto{
    int x,y;
    };

int main()
{
    printf("Char: %d\n",sizeof(char));
    printf("Int: %d\n",sizeof(int));
    printf("Float: %d\n",sizeof(float));
    printf("Double: %d\n",sizeof(double));
    printf("Struct ponto: %d\n",sizeof(struct ponto));




    return 0;
}
