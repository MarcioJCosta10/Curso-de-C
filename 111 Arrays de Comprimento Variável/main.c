#include <stdio.h>
#include <stdlib.h>

        "Arrays de comprimento variavel"
    - Na declara��o de um array � preciso especificar o seu tamanho
    - Ele deve ser um valor ou uma express�o inteira e constante

    #define M 100
    const int N = 100;

    int v1[100];
    int v2 [M];
    int v3 [N];

    -  O Padr�o c99  possui arrays de comprimento vari�vel
    - Neles, o tamanho pode ser especificado em tempo de execu��o do programa.

    "Exemplo"

    int N;
    printf("Digite o tamanho do array: ");
    scanf("%d", &N);
    int v[N];

    Aqui tenho um array din�mico o comprimento dele varia de tempo de execu��o para tempo de execu��o.

    "Cuidados"
    - Esse tipo de array n�o pode ser inicializado no momento de sua declara��o.

    int N ;
    printf("Digite o tamanho do array: ");
    scanf("%d",&N);

    int v[N]={1,2,3}; //Errado n�o podemos inicializar pois n�o sabemos o valor que o usu�rio vai digitar em N;

    - Apesar de seu tamanho ser definido em tempo de execu��o, eles s�o muito diferentes de aloca��o din�mica.
    - Ele est� sujeito ao escopo de onde foi declarado - ALOCA��O DE BLOCO DE MEM�RIA � FEITA NA HEAP E A DECLARA��O DE VAIR�VEIS � FEITO NA STACK
    - N�o � preciso liberar com o "free()    "         - DECLARA��O DE VARI�VEIS EST� SUJEITO A ESCOPO ALOCA��O DIN�MICA N�O EST� SUJEITA A ESCOPO E EU PRECISO LIBERAR COM FREE();

    "Cuidade quando estivermos trabalhando com fun��es"
    - Para passar esse tipo de array como par�mentro de uma fun��o, devemos informar as dimens�es do array antes de
    informar o array na lista de par�metro da fun��o.

    //CORRETO
    void imprime(int n, int m, int mat [n][m]); - NESSA ORDEM PRIMEIRO DEFINIR O N E O M (Que s�o as vari�vei que define o tamanho do meu array de comprimento vari�vel)(para depois passar ele para a fun��o) DEPOIS MINHA MATRIZ

    // ERRADO
    void imprime(int mat [n][m], int n, int m);
    void imprime(int n, int mat [n][m], int m);









int main()
{
    printf("Hello world!\n");
    return 0;
}
