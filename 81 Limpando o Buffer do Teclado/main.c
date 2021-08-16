#include <stdio.h>
#include <stdlib.h>
                //LIMPANDO O BUFFER DO TECLADO

                /*Toda informa��o que digitamos no
                teclado � armazenadas em um buffer
                e fica disponivel para a nossa utiliza��o

                Quando usamos a fun��o scanf(), ela
                recupera a informa��o do buffer. Por�m,
                ela pode deixar a "sujeira" no buffer,
                comprometendo futuras leituras.*/








int main()
{
    /*
    Exemplo
    char ch;
    int i;
    for(i = 0; i<5; i++){
        printf("Digite o %do caracter: ", i+1);
        scanf("%c",&ch);

        Esse programa vai apresentar um erro pois o buffer est� sujo*/

        /*Existem muitas formas de limpar o buffer do teclado
        Minha sujest�o � usar o seguinte comando
        setbuf(stdin,NULL); // Ela vai colocar o valor null no buffer stdin que � o buffer do teclado, que � o buffer de entrada dos dados

        "N�o utilize o comando"
        fflush(stdin);

        A fun��o fflush() server para limpar
        o buffer, mas tem comportamento "Indefinido"
        para o buffer do teclado, pois � mais indicada para
        limpeza de buffer de saida e n�o o de teclado, e dependendo
        do sistema pode n�o funcionar*/
    //Exemplo de uso

    char ch;
    int i;
    for(i = 0; i<5; i++){
        printf("Digite o %do caracter: ", i+1); // Imprime i de caracter
        scanf("%c",&ch);                        // Leio com scanf
        setbuf(stdin,NULL);                     //Limpo o buffer para a proxima leitura
                                                // Terminei o meu for limpo o buffer tambem
        }

    system("pause");
    return 0;
}
