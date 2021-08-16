#include <stdio.h>
#include <stdlib.h>
                    Estrutura do tipo "Lista" � uma sequ�ncia de elemento do mesmo tipo.
                    Seus elementos possuem estrutura interna abstraida(nunca teremos acesso ao dado direto
                    somente as fun��es que manipulam esses dados), ou seja, sua complexidade � arbitr�ria
                    e n�o afeta o seu funcionamento( ao implementar uma lista n�o precisamos nos preocupar como ela � feita l� dentro)
                    lista 33 23 16 15 43 58
                          n� n� n� n� n� n�

                    Uma lista poder� ter um total de N n�s (N>=0) elementos.
                    Se N = 0, dizemos que a "Lista" est� vazia
                    Existe lista vazia, com alguns elementos ou lista cheia.

                    Aplica��es que podem usar "Listas"
                    - Cadastro de funcion�rios
                    - Itens de Estoque
                    - Cartas de baralho
                    - etc


                    Em uma "Lista" podemos realizar as seguintes opera��es b�sicas:
                        - Cria��o de lista
                        - inser��o de elementos
                        - exclus�o de elementos
                        - acesso a um elemento
                        - destrui��o da lista
                        - etc


                    Essas opera��es dependem do tipo de aloca��o de mem�ria usada
                    - est�tica
                    - din�mica


                    Aloca��o est�tica
                    - O espa�o de mem�ria � alocada no momento da compila��o
                    - Exige a defini��o do numero m�ximo de elementos da "Lista"
                    - Acesso sequencial: elementos consecutivos na mem�ria

                    Um lista de aloca��o est�tica � um vetor com tamanho max e um campo quantidade que aponta para a proxima posi��o vaga e indica quantos elemento tenho na lista


                    Aloca��o Din�mica
                    O espa�o de mem�ria � alocado em tempo de execu��o, n�o preciso definir o tamanho dela inicial

                    - A "Lista" cresce a medida que novos elementos s�o armazenados, e diminui a medida que elementos
                    s�o removidos.
                    - Acesso encadeado: cada elemento pode estar em uma �rea distinta da mem�ria. Para acessar um elemento,
                    � preciso percorrer todos os seus antecessores na "Lista"

  int main()
{
    printf("Hello world!\n");
    return 0;
}
