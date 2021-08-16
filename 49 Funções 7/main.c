#include <stdio.h>
#include <stdlib.h>
  // ARRAY COMO PAR�MENTRO

    /* Array s�o sempre passados "Por Refer�ncia" para uma fun��o
        VANTAGEM: Isso evita c�pia desnecess�rias de grande quantidade de
        dados para outras �reas de mem�ria durante a chamada da fun��o,
        o que afetaria o desempenho do programa
        DESVANTAGEM: Como estou passando o dado original se eu mudar
        eu posso modificar o valor dentro desse vetor ent�o tenho que
        tomar cuidado;

         */

         //Passando um Array Por Refer�ncia: Posso usar as tr�s nota��es abaixo:

         //void imprime(int *m, int n); // Posso usar int *m; // Perceba que tem um par�metro passado por c�pia eu posso misturar;
                                      // Esse n ser� o tamanho do meu vetor
         //void imprime(int m[], int n); //Posso usar imt m[]; // Perceba que tem um par�metro passado por c�pia eu posso misturar;
                                       // Esse n ser� o tamanho do meu vetor
         //void imprime (int m[5], int n);// Posso usar int m[5]; // Perceba que tem um par�metro passado por c�pia eu posso misturar;
                                        // Esse n ser� o tamanho do meu vetor, esse 5 dentro do parametro anterior n�o quer dizer nada para a fun��o
                                        /* QUANDO PASSAMOS UM VETOR PASSAMOS SOMENTE A PRIMEIRA POSSI��O DELE OU SEJA ONDE ELE COME�A
                                           O N � QUE VAI DIZER QUANTAS POSI��ES EU POSSO SEGUIR NO MEU VETOR*/
                                          /*ENT�O SEMPRE QUE TRABALHAR COM PASSAGEM DE VETOR PRECISA SEMPRE PASSAR ONDE COME�A
                                            E QUANTAS POSI��ES PERTENCEM AO VETOR */

    //EXEMPLO  FUN��O QUE IMPRIME UM VETOR:
    void imprime(int *n , int m){ // AQUI TEM MEU PAR�METRO POR REFERENCIA + O TAMANHO DO MEU VETOR;
                                  /* Vantagem de passar o tamnho do vetor "int m" separado � que se eu mudar e imprimir s� at�
                                     tres basta eu mudar e ao inves de passar 5 passar 3 como tamnho no par�mentro  que ai eu
                                     mudo a condi��o do meu for */
        /*Na fun��o continuamos usando
          colchete e indice*/
          int i;
          for (i=0; i<m; i++)//AQUI USE MEU PAR�METRO M NA CONDI��O DO FOR ENT�O i=0; i<m; VAI DE 0 AT� 4
                printf("%d\n", n[i]);}  /* Vimos na aula anterior que sempre que for usar uma vari�vel passada por
                                        referncia precisa colocar o "*" na frente dela, no caso do vetor n�o precisa
                                        pois o nome do vetor porque eu j� sei que o que vai vir no par�mentro *n � um vetor */

    // IMPRIMIR VETOR DE MAIS DE UMA DIMENS�O: MATRIZ
    /* S� vai ser aceito esse tipo de nota��o a do colchetes,
                                              lembre-se quando passamos o vetor passamos s� a primimera
                                              posi��o dele e ele sabe seguir, s� precisa passar quantas posi��es ele tinha,
                                              na matriz n�o precisa informar quantas linhas tem mas precisamos informar quantas colunas
                                              ou demais linhas que tiver para saber quanto de mem�ria tenho que pular para chegar na proxima
                                              linha */

   void imprime_matriz(int m[][2], int n){ // Se fosse M[][2][3] preciso informar os ultimos dois, o primeiro ser� usado meu paramentro n;
        int i, j;                          // A regra � a mesma do vetor �so que preciso especificar todos par�metros depois do primeiro
            for(i=0; i<n; i++)
                for(j=0; j<2; j++)
                    printf("%d\n", m[i][j]);}// Aqui mostra que devo continuar tratando como vetor, apesar de ser passado por referencia
                                             // eu ja sei que � uma matriz, ent�o continuo usando a nota��o de colchetes



int main(){
    /* Na chamada da fun��o, usa-se  apenas
       o nome do array (sem colchete e �ndice),
       e sem o operaor "&" */
       int v[5] = {1,2,3,4,5};// CRIEI AQUI UM VETOR DE TAMANHO 5
       imprime(v,5);// AQUI CHAMEI A FUN��O IMPRIME E ESTOU DIZENDO QUE O VETOR TEM 5 ELEMENTOS PARA SER IMPRESS
                    /* Perceba que n�o precisei colocar o "�&", o & nos usamos para dizer que
                       � o endere�o onde esta meu dado na mem�ria, s� que o nome do vetor j� � o endere�o dele, ent�o basta passar
                       colocar o nome do vetor sem colchetes e sem indice, assim j� estamos passando onde ele come�a na mem�ria*/


        /* Array com mais de uma dimens�o precisam da informa��o
           do tamanho das outras dimens�es */
           int mat [3][2] = {{1,2},{3,4},{5,6}};
           imprime_matriz(mat,3); // E n�o preciso do "&", mesma coisa do vetor, o nome da matriz j� � o endere�o onde ela come�a na mem�ria e n�o se coloca colchetes e �ndice;






    system("Pause");
    return 0;
}
