#include <stdio.h>
#include <stdlib.h>
  // ARRAY COMO PARÂMENTRO

    /* Array são sempre passados "Por Referência" para uma função
        VANTAGEM: Isso evita cópia desnecessárias de grande quantidade de
        dados para outras áreas de memória durante a chamada da função,
        o que afetaria o desempenho do programa
        DESVANTAGEM: Como estou passando o dado original se eu mudar
        eu posso modificar o valor dentro desse vetor então tenho que
        tomar cuidado;

         */

         //Passando um Array Por Referência: Posso usar as três notações abaixo:

         //void imprime(int *m, int n); // Posso usar int *m; // Perceba que tem um parêmetro passado por cópia eu posso misturar;
                                      // Esse n será o tamanho do meu vetor
         //void imprime(int m[], int n); //Posso usar imt m[]; // Perceba que tem um parêmetro passado por cópia eu posso misturar;
                                       // Esse n será o tamanho do meu vetor
         //void imprime (int m[5], int n);// Posso usar int m[5]; // Perceba que tem um parêmetro passado por cópia eu posso misturar;
                                        // Esse n será o tamanho do meu vetor, esse 5 dentro do parametro anterior não quer dizer nada para a função
                                        /* QUANDO PASSAMOS UM VETOR PASSAMOS SOMENTE A PRIMEIRA POSSIÇÃO DELE OU SEJA ONDE ELE COMEÇA
                                           O N É QUE VAI DIZER QUANTAS POSIÇÕES EU POSSO SEGUIR NO MEU VETOR*/
                                          /*ENTÃO SEMPRE QUE TRABALHAR COM PASSAGEM DE VETOR PRECISA SEMPRE PASSAR ONDE COMEÇA
                                            E QUANTAS POSIÇÕES PERTENCEM AO VETOR */

    //EXEMPLO  FUNÇÃO QUE IMPRIME UM VETOR:
    void imprime(int *n , int m){ // AQUI TEM MEU PARÂMETRO POR REFERENCIA + O TAMANHO DO MEU VETOR;
                                  /* Vantagem de passar o tamnho do vetor "int m" separado é que se eu mudar e imprimir só até
                                     tres basta eu mudar e ao inves de passar 5 passar 3 como tamnho no parâmentro  que ai eu
                                     mudo a condição do meu for */
        /*Na função continuamos usando
          colchete e indice*/
          int i;
          for (i=0; i<m; i++)//AQUI USE MEU PARÂMETRO M NA CONDIÇÃO DO FOR ENTÃO i=0; i<m; VAI DE 0 ATÉ 4
                printf("%d\n", n[i]);}  /* Vimos na aula anterior que sempre que for usar uma variável passada por
                                        referncia precisa colocar o "*" na frente dela, no caso do vetor não precisa
                                        pois o nome do vetor porque eu já sei que o que vai vir no parâmentro *n é um vetor */

    // IMPRIMIR VETOR DE MAIS DE UMA DIMENSÃO: MATRIZ
    /* Só vai ser aceito esse tipo de notação a do colchetes,
                                              lembre-se quando passamos o vetor passamos só a primimera
                                              posição dele e ele sabe seguir, só precisa passar quantas posições ele tinha,
                                              na matriz não precisa informar quantas linhas tem mas precisamos informar quantas colunas
                                              ou demais linhas que tiver para saber quanto de memória tenho que pular para chegar na proxima
                                              linha */

   void imprime_matriz(int m[][2], int n){ // Se fosse M[][2][3] preciso informar os ultimos dois, o primeiro será usado meu paramentro n;
        int i, j;                          // A regra é a mesma do vetor ´so que preciso especificar todos parâmetros depois do primeiro
            for(i=0; i<n; i++)
                for(j=0; j<2; j++)
                    printf("%d\n", m[i][j]);}// Aqui mostra que devo continuar tratando como vetor, apesar de ser passado por referencia
                                             // eu ja sei que é uma matriz, então continuo usando a notação de colchetes



int main(){
    /* Na chamada da função, usa-se  apenas
       o nome do array (sem colchete e índice),
       e sem o operaor "&" */
       int v[5] = {1,2,3,4,5};// CRIEI AQUI UM VETOR DE TAMANHO 5
       imprime(v,5);// AQUI CHAMEI A FUNÇÃO IMPRIME E ESTOU DIZENDO QUE O VETOR TEM 5 ELEMENTOS PARA SER IMPRESS
                    /* Perceba que não precisei colocar o "¨&", o & nos usamos para dizer que
                       é o endereço onde esta meu dado na memória, só que o nome do vetor já é o endereço dele, então basta passar
                       colocar o nome do vetor sem colchetes e sem indice, assim já estamos passando onde ele começa na memória*/


        /* Array com mais de uma dimensão precisam da informação
           do tamanho das outras dimensões */
           int mat [3][2] = {{1,2},{3,4},{5,6}};
           imprime_matriz(mat,3); // E não preciso do "&", mesma coisa do vetor, o nome da matriz já é o endereço onde ela começa na memória e não se coloca colchetes e índice;






    system("Pause");
    return 0;
}
