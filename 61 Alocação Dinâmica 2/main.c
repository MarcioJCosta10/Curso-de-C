#include <stdio.h>
#include <stdlib.h>
             /*   Operador sizeof
                Primeira coisa que precisamos saber � que: Vamos pedir mem�ria no processo de aloca��o din�mica ao computador,
                s� que a quantidade de mem�ria que precisamos depende do que vamos guardar nessa mem�ria:
        /*
            Alocar mem�ria do tipo int � diferente de
            alocar mem�ria do tipo char:
            - tipos diferentes podem ter tamanhos
            diferentes na mem�ria

            char:   1 byte;
            int:    4 bytes; // O int pode varira dependendo do sistema
            float:  4 bytes;
            double: 8 bytes;
                            // Em uma estrutura � dificil saber quantos tipos eu tenho e quanto vou precisar de mem�ria
            Ent�o: Como vou saber quantos bytes eu preciso? Eu uso o operador sizeof;
            /*  O Operador sizeof() retorna o
            numero de bytes necess�rios para
            alocar um �nico elemento de um determinado
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
