#include <stdio.h>
#include <stdlib.h>
        //OPERAÇÕES QUE PODEMOS REALIZAR COM PONTEIROS

        /*ATRIBUIÇÃO: Um ponteiro só pode
          receber o endereço de uma variável
          do mesmo tipo do ponteiro*/
            int *p, *p1, x = 10;      // Declarei os ponteiros *p e *p1 e a variável x como int;
            float y = 20.0;           // Declarei a variável y como float
            p = &x;                   // Atribui o endereço de x ao ponteiro p
            printf("*p : %d \n",*p);  // Aqui vou pegar o conteudo dentro do endereço que p aramzenou ou seja 10;
            p1 = p;// P1 recebe o endereço guardado em um outro ponteiro do mesmo tipo
            printf("*p1: %d \n",*p1);
            p = &y; //ERRADO y é float p é um inteiro e não funciona

            /*Posso fazer operação de Soma e Subtração: São as unicas operações que
              posso fazer com ponteiros pois não faz sentido multiplicar e dividir
              um endereo sobre o valor de endereço armazenado por um ponteiro podemos
              apenas SOMAR E SUBTRAIR valores INTEIROS*/

            int *p = 0x5DC; //Aqui meu ponteiro aponta para uma posição de numeor 1500;
            printf("p = %d \n", p);
            p++; // Aqui soma mais um inteiro NO PONTEIRO ou seja 4 byts
            printf("p = %d \n", p);//1504
            p = p+ 15;
            printf("p = %d \n", p);//1564
            p = p - 2;
            printf("p = %d \n", p);//1556

               Então eu posso andar para frente ou para tras em um enderço;


          /*    As operações de adição e subtração no endereço dependem do tipo
                de dado de o ponteiro aponta */
                int *p = 0x5DC;// Esses dois ponteiros ambos apontam para a mesma posição de memória aqui um é int
                char *c = 0x5DC;// Esses dois ponteiros ambos apontam para a mesma posição de memória aqui é um char
                printf("p = %d\nc = %d\n", p,c);
                p++;//1504 -> Tamnho do int 4 bytes
                c++; //1501 -> Char ocupa apenas um espaço na memoria
                printf("p = %d \nc = %d\n",p,c);// Aqui imprime 1504 e 1501

                QUANDO ESTIVER SOMANDO NO ENDEREÇO QUE ESTOU GUARDADO
                ISSO VAI DEPEDER DO TIPO QUE ESTÁ GUARDADO, TIPO DO PONTEIRO


        /* Ponteiros podem ser comparados
           == , != , > ,< , >= e <= */
           // Como meu endereço pode ir para cima e para baixo dentro da memória então eu posso comparar 2 endereços
           int *p, *p1, x, y;
           p = &x;
           p1 = &y;
           if (p == p1)
                printf("Os ponteiros são iguais\n");
           else
                printf("Os ponteiro são diferentes\n");

            // Da mesma forma eu posso perguntar que ponteiro está na frente

            int *p, *p1, x, y;
           p = &x;
           p1 = &y;
           if(p > p1)// Como são posições de memórias diferentes posso perguntar pé maior que p1?
                     // Aqui comparo quem tá na frente de que
                printf("p > p1\n");
           else
                printf("p <= p1\n");




int main()
{
    printf("Hello world!\n");
    return 0;
}
