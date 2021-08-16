#include <stdio.h>
#include <stdlib.h>
            //FUNÇÃO fscanf(): Permite ler uma lista formatada do arquivo, como nos gravamos conseguimos ler;
            /* nas ultimas aulas vimos como ler
               e escrever em arquivos caracteres,
               strings e até mesmo blocos de bytes.

               A linguagem C também permite ler uma
               lista formatada de variáveis do arquivo
               do memso modo como fazemos do teclado do
               computador com a função scanf()

               Para isso usamos a função fscanf();
            */
            //Forma Geral: scanf()
          //  scanf("tipos de entrada", variáveis);

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
        fscanf(f,"%s %s", texto, nome);//Não usei o & comercial pois texto  e nome são vetores;// será onde vou armazenar os valores lidos do arquivo
        printf("%s %s\n",texto,nome);// Aqui mandei imprimir o que eu li
        fscanf(f,"%s %d", texto, &id);// Aqui estou lendo o texto e usei o & comercial antes de id pois preciso saber o endereço da variavel id para armazenar o dado lido
        printf("%s %d\n", texto, id);// aqui vou imprimir os dados lidos
        fscanf(f,"%s %d", texto, &h);// Aqui estou lendo o texto e usei o & comercial antes de id pois preciso saber o endereço da variavel h para armazenar o dado lido
        printf("%s %d\n", texto, h); // aqui vou imprimir os dados lidos

        /* Quando estou lendo um arquivo tenho que levar em conta a ordem dos dados lido de acordo com a sequencia pois isso
        o campo texto é sempre uma string é sempre %s*/

        fclose(f);





    system("pause");
    return 0;
}
