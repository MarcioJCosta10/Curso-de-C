#include <stdio.h>
#include <stdlib.h>
        //OPERA��ES QUE PODEMOS REALIZAR COM PONTEIROS

        /*ATRIBUI��O: Um ponteiro s� pode
          receber o endere�o de uma vari�vel
          do mesmo tipo do ponteiro*/
            int *p, *p1, x = 10;      // Declarei os ponteiros *p e *p1 e a vari�vel x como int;
            float y = 20.0;           // Declarei a vari�vel y como float
            p = &x;                   // Atribui o endere�o de x ao ponteiro p
            printf("*p : %d \n",*p);  // Aqui vou pegar o conteudo dentro do endere�o que p aramzenou ou seja 10;
            p1 = p;// P1 recebe o endere�o guardado em um outro ponteiro do mesmo tipo
            printf("*p1: %d \n",*p1);
            p = &y; //ERRADO y � float p � um inteiro e n�o funciona

            /*Posso fazer opera��o de Soma e Subtra��o: S�o as unicas opera��es que
              posso fazer com ponteiros pois n�o faz sentido multiplicar e dividir
              um endereo sobre o valor de endere�o armazenado por um ponteiro podemos
              apenas SOMAR E SUBTRAIR valores INTEIROS*/

            int *p = 0x5DC; //Aqui meu ponteiro aponta para uma posi��o de numeor 1500;
            printf("p = %d \n", p);
            p++; // Aqui soma mais um inteiro NO PONTEIRO ou seja 4 byts
            printf("p = %d \n", p);//1504
            p = p+ 15;
            printf("p = %d \n", p);//1564
            p = p - 2;
            printf("p = %d \n", p);//1556

               Ent�o eu posso andar para frente ou para tras em um ender�o;


          /*    As opera��es de adi��o e subtra��o no endere�o dependem do tipo
                de dado de o ponteiro aponta */
                int *p = 0x5DC;// Esses dois ponteiros ambos apontam para a mesma posi��o de mem�ria aqui um � int
                char *c = 0x5DC;// Esses dois ponteiros ambos apontam para a mesma posi��o de mem�ria aqui � um char
                printf("p = %d\nc = %d\n", p,c);
                p++;//1504 -> Tamnho do int 4 bytes
                c++; //1501 -> Char ocupa apenas um espa�o na memoria
                printf("p = %d \nc = %d\n",p,c);// Aqui imprime 1504 e 1501

                QUANDO ESTIVER SOMANDO NO ENDERE�O QUE ESTOU GUARDADO
                ISSO VAI DEPEDER DO TIPO QUE EST� GUARDADO, TIPO DO PONTEIRO


        /* Ponteiros podem ser comparados
           == , != , > ,< , >= e <= */
           // Como meu endere�o pode ir para cima e para baixo dentro da mem�ria ent�o eu posso comparar 2 endere�os
           int *p, *p1, x, y;
           p = &x;
           p1 = &y;
           if (p == p1)
                printf("Os ponteiros s�o iguais\n");
           else
                printf("Os ponteiro s�o diferentes\n");

            // Da mesma forma eu posso perguntar que ponteiro est� na frente

            int *p, *p1, x, y;
           p = &x;
           p1 = &y;
           if(p > p1)// Como s�o posi��es de mem�rias diferentes posso perguntar p� maior que p1?
                     // Aqui comparo quem t� na frente de que
                printf("p > p1\n");
           else
                printf("p <= p1\n");




int main()
{
    printf("Hello world!\n");
    return 0;
}
