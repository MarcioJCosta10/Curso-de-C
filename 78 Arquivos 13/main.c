#include <stdio.h>
#include <stdlib.h>
            //FUN��O fscanf(): Permite ler uma lista formatada do arquivo, como nos gravamos conseguimos ler;
            /* nas ultimas aulas vimos como ler
               e escrever em arquivos caracteres,
               strings e at� mesmo blocos de bytes.

               A linguagem C tamb�m permite ler uma
               lista formatada de vari�veis do arquivo
               do memso modo como fazemos do teclado do
               computador com a fun��o scanf()

               Para isso usamos a fun��o fscanf();
            */
            //Forma Geral: scanf()
          //  scanf("tipos de entrada", vari�veis);

            //Forma Geral: fscanf()
          //  fscanf(FILE *f, "tipo de entrada", variaveis);


int main()
{
    FILE *f = fopen("C:\\Projetos\\fscanf.txt","r");
        if(f==NULL){
            printf("Erro na abertura! \n");
            system("pause");
            exit(1);
        }
        char texto[20], nome[20];
        int id;
        float h;
        fscanf(f,"%s %s", texto, nome);//N�o usei o & comercial pois texto  e nome s�o vetores;// ser� onde vou armazenar os valores lidos do arquivo
        printf("%s %s\n",texto,nome);// Aqui mandei imprimir o que eu li
        fscanf(f,"%s %d", texto, &id);// Aqui estou lendo o texto e usei o & comercial antes de id pois preciso saber o endere�o da variavel id para armazenar o dado lido
        printf("%s %d\n", texto, id);// aqui vou imprimir os dados lidos
        fscanf(f,"%s %d", texto, &h);// Aqui estou lendo o texto e usei o & comercial antes de id pois preciso saber o endere�o da variavel h para armazenar o dado lido
        printf("%s %d\n", texto, h); // aqui vou imprimir os dados lidos

        /* Quando estou lendo um arquivo tenho que levar em conta a ordem dos dados lido de acordo com a sequencia pois isso
        o campo texto � sempre uma string � sempre %s*/

        fclose(f);





    system("pause");
    return 0;
}
