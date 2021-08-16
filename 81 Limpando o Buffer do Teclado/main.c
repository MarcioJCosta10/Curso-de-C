#include <stdio.h>
#include <stdlib.h>
                //LIMPANDO O BUFFER DO TECLADO

                /*Toda informação que digitamos no
                teclado é armazenadas em um buffer
                e fica disponivel para a nossa utilização

                Quando usamos a função scanf(), ela
                recupera a informação do buffer. Porém,
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

        Esse programa vai apresentar um erro pois o buffer está sujo*/

        /*Existem muitas formas de limpar o buffer do teclado
        Minha sujestão é usar o seguinte comando
        setbuf(stdin,NULL); // Ela vai colocar o valor null no buffer stdin que é o buffer do teclado, que é o buffer de entrada dos dados

        "Não utilize o comando"
        fflush(stdin);

        A função fflush() server para limpar
        o buffer, mas tem comportamento "Indefinido"
        para o buffer do teclado, pois é mais indicada para
        limpeza de buffer de saida e não o de teclado, e dependendo
        do sistema pode não funcionar*/
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
