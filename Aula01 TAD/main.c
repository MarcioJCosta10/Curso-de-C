#include <stdio.h>
#include <stdlib.h>

                Tipo de Dado: define o conjunto de valores (dominio) que uma variável pode assumi
                Ex: int
                ... -2,-1,0,+1,+2,...

                Um Estruturas de dados: Trata-se de um relacionamento lógico entre tipos de dados
                Mas o que seria isso? Uma struct
                Onde teremos varias variaveis um int um char e um float onde temos uma logica entre esses dados:
                    Ex: nome, idade, peso de uma pessoa;

                No Tipo abstrato de dados: Ou simplesmente "TAD": incluem as operações para manipulação dos dados
                Ex:
                - criação da estrutura
                - inclusão de um elemento
                - remoção de um elemento
                - acesso a um elemento // Diferente da estrutura não teremos mais acesso direto ao que está dentro da estrutura
                - etc                  //Só vamos conseguir acessar por meio de uma operação um função que trabalha com esse tipo abstrato

                Essa é a ideia de tipo abstrato criar funções que irão interagir com seus dados e seus dados ficam ocultos do usuário


              Vantagens:
                  Encapsulamente e Segurança: Usuário não tem acesso direto aos dados
                  Flexibilidade e Reutiliação: Podemos alterar a "TAD" sem alterar as aplicações que o utilizam, eu tenho a implementação separada da aplicação

                 Exemplo de "TAD": arquivos C
                 FILE * f;

                 Os dados de "f" somente podem ser acessados pelas funções de manipulação do tipo:
                - fopen()
                - fclose()
                - fputc()
                - fgetc()
                - feof()
                - ...


int main()
{
    printf("Hello world!\n");
    return 0;
}
