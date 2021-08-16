#include <stdio.h>
#include <stdlib.h>

            /*
            "Mau uso da Fun��o feof()"
    - Um mau uso muito comum da fun��o "feof"
    � usar a fun��o para terminar um "loop"

    - Esse erro � t�o comum que est� inclusive
    na video aula 72
            */

/* 1� void salva (){
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
/* 2� void carrega1(){
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
    while (1){              //4 ent�o eu n�o estou verificando dentro do whilee sim sempre depois de uma leitura;
        fscanf(F, "%d",&n); //1 Fa�o a leitura e se a leitura falhar o meu indicador vai ser setado
        if(feof(F))         //2 Ai eu verifico aqui se feof depois de ter feito uma leitura ent�o eu dou um break
            break;
        printf("%d\n",n); //3 S� se n�o falhar a leitura � que eu vou dar um print dos dados
    }
    fclose(F);




}




int main()
{ //1� Salvando um arquivo com 5 numeros
  //  salva();
  //carrega os numeros do arquivo o ultimo numero est� duplicado
  //2� carrega1();
  carrega2();

  /*
    Por que isso acontece?
    - Vamos ver a defini��o da fun��o FEOF
    int feof(FILE * stream);

    Descri��o:
    A fun��o feof() testa o indicador de "fim de arquivo "
    para o fluxo do apontado por stream

    retorno:
    A fun��o feof() retorna diferente de zero
    se e somente se o indicador de fim-de-arquivo
    est� marcado para o stream

    Mas qual � o problema disso ?

    A fun��o testa o indicador de fim de arquivo,
    n�o o proprio arquivo

    Isto significa que outra fun��o � respons�vel
    por alterar o indicador para indicar que o
    EOF foi alcan�ado.


    A maioria das fun��es de leitura ira alterar
    o indicador apor ler todos os dados, e entao
    realizar uma nova leitura resultando em nenhum
    dado, apenas o EOF


    Como resolver isso?
    - Primeiro devemos evitar o uso da feof()
    para testar um loop
    - Devemos verificar o valor retornado pelas
    fun��es de leitura e encerrar o loop se um delar falhar
    - Se h� um erro de leitura a fun��o ferrorf()
    ir� retornar verdadeiro

    ou ent�o o exemplo da carrega2 seria uma solu��o



  */

    system("pause");

    return 0;
}
