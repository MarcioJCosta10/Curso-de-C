#include <stdio.h>
#include <stdlib.h>
        ALOCA��O DINAMICA:
            Vamos relamenbrar, sempre que
            vamos processar uma informa��o precisamos
            de uma vair�vel?
            /* Uma vari�vel � uma posi��o de mem�ria
               que armazena um dado que pode ser usado
               pelo programa.
               Deve ser declarada duarante o
               desenvolvimento do programa.
            */
            int x, y;
            float c;
            char nome[50];

                Isso significa que eu preciso saber de antem�o quanto eu preciso de mem�ria:
            /*
                Vamos pensar nesse Problema: precisamo contruir um programa
                que processe os valores dos sal�rio dos
                funcion�rios de uma pequea empresa;
                Solu��o simples: declarar uma array
                bem grande: */
                float salarios [1000];/* � uma solu��o simples mas tem alguns incovenientes:
                                         Se a empresa tiver mais de 1000
                                         funcion�rios esse vetor n�o � suficiente;
                                         Se a empresa tem 100 funcion�rios
                                         tenho 900 posi��es de mem�ria
                                         que nunca s�o usadas
                                      */
                Como podemos fazer isso:
           /*
                VAMOS FAZER NOSSAS CONSIDERA��ES:
            Considere o seguinte:
            Arrays s�o agrupamentos sequenciais
            de dados de um mesmo tipo na mem�ria.
            - Um ponteiro guarda o endere�o de um
              dado na mem�ria
            - O nome do array � um ponteiro para o
              primeiro elemento do array
           */
        Ideia: Posso solicitar um bloco de
        mem�ria e colocar a sua primeira
        posi��o em um ponteiro? Sim eu posso:

         /*
          A linguagem C permite alocar (RESERVAR)
          dinamicamente (EM TEMPO DE EXECU��O) blocos
          de mem�rias utilizando poteiros.
          A esse processo d�-se o nome de ALOCA��O DIN�MICA
         */
           Primeiramente eu tenho um ponteiro que inicialmente aponta para nullptr
           Depois eu pe�o ao programa, olha eu preciso de 5 posi��es de mem�ria:
               Ent�o o que ele faz, separa uma regi�o de mem�ria, atribui o endere�o inicial
               dessa posi�o para meu ponteiro, e eu come�o a trabalhar com o meu ponteiro
               como se fosse um vetor, ent�o por meio da ALOCA��O DIN�MICA eu posso tranformar
               o meu ponteiro em um array;

        PARA FAZER ISSO A LINGUAGEM C TEM POR PADR�O TEM 4 FUN��ES DE ALOCA��O:
            /*
            A linguagem C ANSI usa apenas
            4 fun��es para a aloca��o din�mica,
            dispon�veis na biblioteca stdlib.h

            */
               malloc();
               calloc();
               realloc();
               free();

        // Existe tamb�m o operador
        sizeof // Ajuda no processo de aloca��o dinamica


int main()
{



    system("pause");
    return 0;
}
