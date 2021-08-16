#include <stdio.h>
#include <stdlib.h>
                    Estrutura do tipo "Lista" é uma sequência de elemento do mesmo tipo.
                    Seus elementos possuem estrutura interna abstraida(nunca teremos acesso ao dado direto
                    somente as funções que manipulam esses dados), ou seja, sua complexidade é arbitrária
                    e não afeta o seu funcionamento( ao implementar uma lista não precisamos nos preocupar como ela é feita lá dentro)
                    lista 33 23 16 15 43 58
                          nó nó nó nó nó nó

                    Uma lista poderá ter um total de N nós (N>=0) elementos.
                    Se N = 0, dizemos que a "Lista" está vazia
                    Existe lista vazia, com alguns elementos ou lista cheia.

                    Aplicações que podem usar "Listas"
                    - Cadastro de funcionários
                    - Itens de Estoque
                    - Cartas de baralho
                    - etc


                    Em uma "Lista" podemos realizar as seguintes operações básicas:
                        - Criação de lista
                        - inserção de elementos
                        - exclusão de elementos
                        - acesso a um elemento
                        - destruição da lista
                        - etc


                    Essas operações dependem do tipo de alocação de memória usada
                    - estática
                    - dinâmica


                    Alocação estática
                    - O espaço de memória é alocada no momento da compilação
                    - Exige a definição do numero máximo de elementos da "Lista"
                    - Acesso sequencial: elementos consecutivos na memória

                    Um lista de alocação estática é um vetor com tamanho max e um campo quantidade que aponta para a proxima posição vaga e indica quantos elemento tenho na lista


                    Alocação Dinâmica
                    O espaço de memória é alocado em tempo de execução, não preciso definir o tamanho dela inicial

                    - A "Lista" cresce a medida que novos elementos são armazenados, e diminui a medida que elementos
                    são removidos.
                    - Acesso encadeado: cada elemento pode estar em uma área distinta da memória. Para acessar um elemento,
                    é preciso percorrer todos os seus antecessores na "Lista"

  int main()
{
    printf("Hello world!\n");
    return 0;
}
