#include <stdio.h>
#include <stdlib.h>

int main()
{

    INICIALIZA��O DE ARRAYS:
    Inicializando um array com zeros
    int vet [5],i;
    for (i = 0; i < 5, i++){
        vet [] = 0;


     E se eu quiser colocar um valor diferente em cada posi��o?
     //Inicializando um array com um valor em cada posi��o
     Desse modo criaria um comando de atribui��o para cada posi��o do meu array
     //Isso n�o � muito indicado se for muitas posi��es
     int vet [5];
     vet[0] = 15;
     vet[1] = 12;
     vet[2] = 9;
     vet[3] = 1;
     vet[4] = 36;
     vet[5] = 35;

      // Felizmente os Arrays da linguagem C suporta a atribui��o na ainicializa��o;
      // FORMA GERAL:
      tipo nome_array[tam1]...[tamN] = {valores}
      //EXEMPLO:
         POSI��O  =   0   1 2 3  4 5
       int vet [5] = {15,12,9,1,36,35};
       // S� POSSO FAZER ISSO NA DECLARA��O DO VETOR;

       //Inicializando um vetor
       float vetor[3]={1.5,22.1,4.56};
       //inicializando uma matriz
                    posi��o  00, 01, 02, 10, 11, 12
       int matriz1 [2][3] = { 1,  2,  3,  4,  5,  6};
                              1�Linha       2�Linha
       int matriz2 [2][3] = {{1, 2, 3,} , { 4, 5, 6}};
    }

    //Inicializa��o sem tamanho
    //Outra coisa que eu posso fazer �: como a declara��o � realizada na inicializa��o eu
    //n�o preciso definir quantos elementos ter� meu vetor, posso declaraar direto, mas n�o � recomendado;

    //Declara um array com 10 posi��es:
    int vetor [] = [1,2,3,4,5,6,7,8,9,10];
    // Se tiver mais de uma dimens�o eu sou obrigado a definir todas as dimens�es exceto a primera
    // Exemplo: O numero de linha da matriz ser� 5.
    int matriz [][2] = {1,2,3,4,5,6,7,8,9,10};




    return 0;
}
