#include <stdio.h>
#include <stdlib.h>

                Tipo de Dado: define o conjunto de valores (dominio) que uma vari�vel pode assumi
                Ex: int
                ... -2,-1,0,+1,+2,...

                Um Estruturas de dados: Trata-se de um relacionamento l�gico entre tipos de dados
                Mas o que seria isso? Uma struct
                Onde teremos varias variaveis um int um char e um float onde temos uma logica entre esses dados:
                    Ex: nome, idade, peso de uma pessoa;

                No Tipo abstrato de dados: Ou simplesmente "TAD": incluem as opera��es para manipula��o dos dados
                Ex:
                - cria��o da estrutura
                - inclus�o de um elemento
                - remo��o de um elemento
                - acesso a um elemento // Diferente da estrutura n�o teremos mais acesso direto ao que est� dentro da estrutura
                - etc                  //S� vamos conseguir acessar por meio de uma opera��o um fun��o que trabalha com esse tipo abstrato

                Essa � a ideia de tipo abstrato criar fun��es que ir�o interagir com seus dados e seus dados ficam ocultos do usu�rio


              Vantagens:
                  Encapsulamente e Seguran�a: Usu�rio n�o tem acesso direto aos dados
                  Flexibilidade e Reutilia��o: Podemos alterar a "TAD" sem alterar as aplica��es que o utilizam, eu tenho a implementa��o separada da aplica��o

                 Exemplo de "TAD": arquivos C
                 FILE * f;

                 Os dados de "f" somente podem ser acessados pelas fun��es de manipula��o do tipo:
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
