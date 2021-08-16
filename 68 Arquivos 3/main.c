#include <stdio.h>
#include <stdlib.h>

            // ABERTURA E FECHAMENTO DE ARQUIVO:

         /*Fun��o fopen(): permite abrir um
           arquivo em determinado modo de
           leitura ou escrita
        //FORMA GERAL
        FILE *fopen(char *nome, char *modo);
                                              /*Nada mais � que uma fun��o
                                               que recebe como parametro o
                                               endere�o do arquivo que eu
                                               vou abrir, o modo que eu vou
                                               abrir esse arquivo eu posso abrir
                                               para leitura e escrita e vai me
                                               retornar um ponteiro do tipo FILE*
                                               */
        //EXEMPLO
        //FILE *f;// Tipo ponteiro para o arquivo
        //f = fopen("arquivo.txt","w");//f vai receber fopen, quero abrir um arquivo de nome arquivo.txt no modo de escrita

       //EU POSSO ESTAR ABRINDO MEU ARQUIVO E PODE OCORRER UM ERRO
       /* Se a fun��o fopen() n�o conseguir
          abrir o arquivo, ela ir� retornar NULL
       */
       // Exemplo
       FILE *f;
       f = fopen("H:\arquivo.txt","w");
        if(f==NULL){
            printf("Erro na abertura!\n");
            }

 // COMO VOU DIZER( ESPESSIFICAR) O NOME DO MEU ARQUIVO? Par isso posso usar duas maneiras:
 /*
    Para o "nome" do arquivo, podemos usar caminho
    - Absoluto: (endere�o completo)
    - Relativo: (Relativo a pasta do programa)
    Exemplo:*/
    FILE *f
    //Caminho absoluto // Como especifiquei desde a raiz C: at� o arquivo arq.txt ent�o esse � o caminho absoluto
    f = fopen("C:\\Projetos\\arq.txt","w");// Sempre usar \\ para n�o confundir com \n na separa��o de diret�rios
    //Caminho relativo// � a parti de onde eu estou
    f = fopen("arquivo.txt","w");// Aqui eu s� vou conseguir acessar esse arquivo se o meu programa estiver sendo compilado na mesma pasta que ele ou seja tem que estar na mesma pasta do main
    f = fopen("..\\Novo\\arq2.txt","w");// Aqui .. quer dizer que � para voltar uma pasta, digamos que eu esteja na pasta projeto, ent�o � para voltar para minha pasta C: entrar na pasta novo e acessa o arq2.txt



    /* O modo de abertura determina que tipo
       de uso ser� feito do arquivo */
       FILE *f;
       //Leitura de Arquivo Texto
       f = fopen("Arquivo.txt","r");
       //Escrita de Arquivo Texto
       f = fopen("Arquivo.txt","w");
       //Leitura de Arquivo Binario
       f = fopen("Arquivo.txt","rb");
       //Escrita de Arquivo Binario
       f = fopen("Arquivo.txt","wb");



       /* Sempre que terminamos de usar um arquivo,
          devemos fech�-lo. Para realizar essa tarefa,
          usa-se a fun��o fclose()*/
          //FORMA GERAL
          int fclose(FILE *f);// recebe como parameto o nosso ponteiro que estavamos usando para acessar o arquivo e ela vai retornar um c�digo inteiro

          /* fclose() retorna do ZERO no caso de
             sucesso no fechamento do arquivo*/







int main()
{

    FILE *f;                            //Neste caso n�o exite o drive H: no compurtador
       f = fopen("H:\arquivo.txt","w");//Se a fun��o fopen() tentar abrir o arquivo e der um erro vai me retornar a contante NULL
        if(f==NULL){ // Sempre que for trabalhar com arquivo tenho que verificar se ele foi aberto com sucesso ou se teve erro, e ele n�o entrou dentro do if ent�o eu posso continuar
            printf("Erro na abertura!\n");
            system("pause");
            exit(1); // Aborta o programa
            }

            FILE *f;
    //Caminho absoluto // Como especifiquei desde a raiz C: at� o arquivo arq.txt ent�o esse � o caminho absoluto
    f = fopen("C:\\Projetos\\arq.txt","w");// Sempre usar \\ para n�o confundir com \n na separa��o de diret�rios

    //Exemplo completo:
    FILE *f;
    f = fopen("C:\\Projetos\\Arquvo.txt" , "w");
    if(f==NULL){
            printf("Erro na abertuta!\n");
            system("pause");
            exit(1);//Aborta o programa
            }
    /* Fechar o arquivo garante que todos
       os dados foram realmente gravados*/
       fclose(f);


    system("pause");
    return 0;


}
