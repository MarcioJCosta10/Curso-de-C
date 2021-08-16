#include <stdio.h>
#include <stdlib.h>

            /*
            "Mau uso da Função feof()"
    - Um mau uso muito comum da função "feof"
    é usar a função para terminar um "loop"

    - Esse erro é tão comum que está inclusive
    na video aula 72
            */

/* 1º void salva (){
    int V[5] ={10,20,30,40,50};
    int i;
    FILE *F  = fopen ("c:\\Projetos\\teste.txt","w");
    if(F == NULL){
        printf("Erro na abertura!\n");
        exit(1);
    }
    for (i=0; i<5; i++)
           fprintf(F,"%d\n",V[i]);
    fclose(F);

}
*/
/* 2º void carrega1(){
    int i, n;
    FILE *F = fopen ("c:\\Projetos\\teste.txt","r");
    if(F==NULL){
        printf("Erro na abertura!\n");
        exit(1);
        }
    while (!feof(F)){
        fscanf(F, "%d",&n);
        printf("%d\n",n);
    }
    fclose(F);




}
*/
void carrega2(){
    int i, n;
    FILE *F = fopen ("c:\\Projetos\\teste.txt","r");
    if(F==NULL){
        printf("Erro na abertura!\n");
        exit(1);
        }
    while (1){              //4 então eu não estou verificando dentro do whilee sim sempre depois de uma leitura;
        fscanf(F, "%d",&n); //1 Faço a leitura e se a leitura falhar o meu indicador vai ser setado
        if(feof(F))         //2 Ai eu verifico aqui se feof depois de ter feito uma leitura então eu dou um break
            break;
        printf("%d\n",n); //3 Só se não falhar a leitura é que eu vou dar um print dos dados
    }
    fclose(F);




}




int main()
{ //1º Salvando um arquivo com 5 numeros
  //  salva();
  //carrega os numeros do arquivo o ultimo numero está duplicado
  //2º carrega1();
  carrega2();

  /*
    Por que isso acontece?
    - Vamos ver a definição da função FEOF
    int feof(FILE * stream);

    Descrição:
    A função feof() testa o indicador de "fim de arquivo "
    para o fluxo do apontado por stream

    retorno:
    A função feof() retorna diferente de zero
    se e somente se o indicador de fim-de-arquivo
    está marcado para o stream

    Mas qual é o problema disso ?

    A função testa o indicador de fim de arquivo,
    não o proprio arquivo

    Isto significa que outra função é responsável
    por alterar o indicador para indicar que o
    EOF foi alcançado.


    A maioria das funções de leitura ira alterar
    o indicador apor ler todos os dados, e entao
    realizar uma nova leitura resultando em nenhum
    dado, apenas o EOF


    Como resolver isso?
    - Primeiro devemos evitar o uso da feof()
    para testar um loop
    - Devemos verificar o valor retornado pelas
    funções de leitura e encerrar o loop se um delar falhar
    - Se há um erro de leitura a função ferrorf()
    irá retornar verdadeiro

    ou então o exemplo da carrega2 seria uma solução



  */

    system("pause");

    return 0;
}
