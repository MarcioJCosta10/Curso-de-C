#include <stdio.h>
#include <stdlib.h>
                "Lista Sequencial Est�tica" ou "Lista Linear Est�tica"

                Tipo de "Lista" onde o sucessor de um elemento ocupa a posi��o f�sica seguinte do mesmo (uso de "array")
                A estrutura dessa Lista: Temos um array de tamanho Max ou seja temos que definir qual � o tamanho da nossa lista
                Temos um campo que diz quantos elementos tenho dentro da lista e ao mesmo tempo ele indica onde � o final da minha lista ou
                qual � a proxima posi��o que esta vaga

                Vantagens do uso de arrays:
                - Acesso r�pido e direto aos elementos (indice)
                - Tempo constante para acessar o elemento
                - Facilidade para modificar as informa��es

                Desvantagens do uso de arrays:
                - Defini��o pr�via do tamanho do array
                - Dificuldade para inserir e remover elemento entre os dois: � necess�rio deslocar os elementos

                Quando utilizar essa "Lista"?
                - Lista pequenas
                - Inser��o / remo��o apenas no final da lista
                - Tamanho m�ximo bem definido
                - A busca � a opera��o mais frequente



int main()
{
    printf("Hello world!\n");
    return 0;
}
