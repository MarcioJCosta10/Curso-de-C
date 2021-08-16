#include <stdio.h>
#include <stdlib.h>

        "Arrays de comprimento variavel"
    - Na declaração de um array é preciso especificar o seu tamanho
    - Ele deve ser um valor ou uma expressão inteira e constante

    #define M 100
    const int N = 100;

    int v1[100];
    int v2 [M];
    int v3 [N];

    -  O Padrão c99  possui arrays de comprimento variável
    - Neles, o tamanho pode ser especificado em tempo de execução do programa.

    "Exemplo"

    int N;
    printf("Digite o tamanho do array: ");
    scanf("%d", &N);
    int v[N];

    Aqui tenho um array dinâmico o comprimento dele varia de tempo de execução para tempo de execução.

    "Cuidados"
    - Esse tipo de array não pode ser inicializado no momento de sua declaração.

    int N ;
    printf("Digite o tamanho do array: ");
    scanf("%d",&N);

    int v[N]={1,2,3}; //Errado não podemos inicializar pois não sabemos o valor que o usuário vai digitar em N;

    - Apesar de seu tamanho ser definido em tempo de execução, eles são muito diferentes de alocação dinâmica.
    - Ele está sujeito ao escopo de onde foi declarado - ALOCAÇÃO DE BLOCO DE MEMÓRIA É FEITA NA HEAP E A DECLARAÇÃO DE VAIRÁVEIS É FEITO NA STACK
    - Não é preciso liberar com o "free()    "         - DECLARAÇÃO DE VARIÁVEIS ESTÁ SUJEITO A ESCOPO ALOCAÇÃO DINÂMICA NÃO ESTÁ SUJEITA A ESCOPO E EU PRECISO LIBERAR COM FREE();

    "Cuidade quando estivermos trabalhando com funções"
    - Para passar esse tipo de array como parâmentro de uma função, devemos informar as dimensões do array antes de
    informar o array na lista de parâmetro da função.

    //CORRETO
    void imprime(int n, int m, int mat [n][m]); - NESSA ORDEM PRIMEIRO DEFINIR O N E O M (Que são as variávei que define o tamanho do meu array de comprimento variável)(para depois passar ele para a função) DEPOIS MINHA MATRIZ

    // ERRADO
    void imprime(int mat [n][m], int n, int m);
    void imprime(int n, int mat [n][m], int m);









int main()
{
    printf("Hello world!\n");
    return 0;
}
