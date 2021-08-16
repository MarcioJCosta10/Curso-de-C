#include <stdio.h>
#include <stdlib.h>
        ALOCAÇÃO DINAMICA:
            Vamos relamenbrar, sempre que
            vamos processar uma informação precisamos
            de uma vairável?
            /* Uma variável é uma posição de memória
               que armazena um dado que pode ser usado
               pelo programa.
               Deve ser declarada duarante o
               desenvolvimento do programa.
            */
            int x, y;
            float c;
            char nome[50];

                Isso significa que eu preciso saber de antemão quanto eu preciso de memória:
            /*
                Vamos pensar nesse Problema: precisamo contruir um programa
                que processe os valores dos salário dos
                funcionários de uma pequea empresa;
                Solução simples: declarar uma array
                bem grande: */
                float salarios [1000];/* É uma solução simples mas tem alguns incovenientes:
                                         Se a empresa tiver mais de 1000
                                         funcionários esse vetor não é suficiente;
                                         Se a empresa tem 100 funcionários
                                         tenho 900 posições de memória
                                         que nunca são usadas
                                      */
                Como podemos fazer isso:
           /*
                VAMOS FAZER NOSSAS CONSIDERAÇÕES:
            Considere o seguinte:
            Arrays são agrupamentos sequenciais
            de dados de um mesmo tipo na memória.
            - Um ponteiro guarda o endereço de um
              dado na memória
            - O nome do array é um ponteiro para o
              primeiro elemento do array
           */
        Ideia: Posso solicitar um bloco de
        memória e colocar a sua primeira
        posição em um ponteiro? Sim eu posso:

         /*
          A linguagem C permite alocar (RESERVAR)
          dinamicamente (EM TEMPO DE EXECUÇÃO) blocos
          de memórias utilizando poteiros.
          A esse processo dá-se o nome de ALOCAÇÃO DINÂMICA
         */
           Primeiramente eu tenho um ponteiro que inicialmente aponta para nullptr
           Depois eu peço ao programa, olha eu preciso de 5 posições de memória:
               Então o que ele faz, separa uma região de memória, atribui o endereço inicial
               dessa posião para meu ponteiro, e eu começo a trabalhar com o meu ponteiro
               como se fosse um vetor, então por meio da ALOCAÇÂO DINÂMICA eu posso tranformar
               o meu ponteiro em um array;

        PARA FAZER ISSO A LINGUAGEM C TEM POR PADRÃO TEM 4 FUNÇÕES DE ALOCAÇÃO:
            /*
            A linguagem C ANSI usa apenas
            4 funções para a alocação dinâmica,
            disponíveis na biblioteca stdlib.h

            */
               malloc();
               calloc();
               realloc();
               free();

        // Existe também o operador
        sizeof // Ajuda no processo de alocação dinamica


int main()
{



    system("pause");
    return 0;
}
