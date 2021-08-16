#include <stdio.h>
#include <stdlib.h>
                "Lista Sequencial Estática" ou "Lista Linear Estática"

                Tipo de "Lista" onde o sucessor de um elemento ocupa a posição física seguinte do mesmo (uso de "array")
                A estrutura dessa Lista: Temos um array de tamanho Max ou seja temos que definir qual é o tamanho da nossa lista
                Temos um campo que diz quantos elementos tenho dentro da lista e ao mesmo tempo ele indica onde é o final da minha lista ou
                qual é a proxima posição que esta vaga

                Vantagens do uso de arrays:
                - Acesso rápido e direto aos elementos (indice)
                - Tempo constante para acessar o elemento
                - Facilidade para modificar as informações

                Desvantagens do uso de arrays:
                - Definição prévia do tamanho do array
                - Dificuldade para inserir e remover elemento entre os dois: é necessário deslocar os elementos

                Quando utilizar essa "Lista"?
                - Lista pequenas
                - Inserção / remoção apenas no final da lista
                - Tamanho máximo bem definido
                - A busca é a operação mais frequente



int main()
{
    printf("Hello world!\n");
    return 0;
}
