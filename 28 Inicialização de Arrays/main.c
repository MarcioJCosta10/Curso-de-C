#include <stdio.h>
#include <stdlib.h>

int main()
{

    INICIALIZAÇÃO DE ARRAYS:
    Inicializando um array com zeros
    int vet [5],i;
    for (i = 0; i < 5, i++){
        vet [] = 0;


     E se eu quiser colocar um valor diferente em cada posição?
     //Inicializando um array com um valor em cada posição
     Desse modo criaria um comando de atribuição para cada posição do meu array
     //Isso não é muito indicado se for muitas posições
     int vet [5];
     vet[0] = 15;
     vet[1] = 12;
     vet[2] = 9;
     vet[3] = 1;
     vet[4] = 36;
     vet[5] = 35;

      // Felizmente os Arrays da linguagem C suporta a atribuição na ainicialização;
      // FORMA GERAL:
      tipo nome_array[tam1]...[tamN] = {valores}
      //EXEMPLO:
         POSIÇÃO  =   0   1 2 3  4 5
       int vet [5] = {15,12,9,1,36,35};
       // SÓ POSSO FAZER ISSO NA DECLARAÇÃO DO VETOR;

       //Inicializando um vetor
       float vetor[3]={1.5,22.1,4.56};
       //inicializando uma matriz
                    posição  00, 01, 02, 10, 11, 12
       int matriz1 [2][3] = { 1,  2,  3,  4,  5,  6};
                              1ªLinha       2ªLinha
       int matriz2 [2][3] = {{1, 2, 3,} , { 4, 5, 6}};
    }

    //Inicialização sem tamanho
    //Outra coisa que eu posso fazer é: como a declaração é realizada na inicialização eu
    //não preciso definir quantos elementos terá meu vetor, posso declaraar direto, mas não é recomendado;

    //Declara um array com 10 posições:
    int vetor [] = [1,2,3,4,5,6,7,8,9,10];
    // Se tiver mais de uma dimensão eu sou obrigado a definir todas as dimensões exceto a primera
    // Exemplo: O numero de linha da matriz será 5.
    int matriz [][2] = {1,2,3,4,5,6,7,8,9,10};




    return 0;
}
