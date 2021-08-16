#include <stdio.h>
#include <stdlib.h>
                //FUN��O fwrite();
                /*
                Nas ultimas aulas vimos como ler ou escrever uma string ou um caractere
                em um arquivo texto;

                Vimos como � poss�vel escrever
                e ler em arquivos caracteres e
                sequencias de caracteres (string)

                As fun��es de escrita de blocos de bytes
                permitem escrever dados mais complexos,
                como os tipos int, float, double, array,
                ou mesmo um tipo definido pelo programador,
                como, por exemplo, a struct

                Elas devem ser usadas preferencialmente
                com arquivos bin�rio
                */

                // COMO ESCREVER BLOCOS DE BYTES ?

                /*Para se escrever um bloco de bytes
                   em um arquivo usamos a fun��o fwrite()*/
                //FORMA GERAL
        //int fwrite(void *buffer, int bytes, int count, FILE *fp);
                /* Parametros:
                   buffer: ponteiro generico para os dados, ou seja, onde na mem�ria est� os dados que eu quero gravar no arquivo
                   bytes : tamanho, em bytes, de cada unidade de dado a ser gravada, ou seja quero gravar inteiror ent�o bytes � o tamanho de um inteiro
                   count : total de unidades de dados que devem ser gravadas, ou seja vamos pensar em um vetor de inteiros, ent�o um inteiro tem 4 bytes e meu vetor tem 10 elementos
                           eu trabalho com esses dois parametros em conjunto(bytes e count) por exemplo, eu quero gravar 10 unidades de 4 bytes, ent�o o tamanho de cada unidade e quantas unidades
                   fp    : o ponteiro para o arquivo

                */

                /* Essa fun��o vai retornar o valor inteiro, que �:
                   Retorno: total de unidades de dados
                   gravados com sucesso
                   ent�o se o retorno for igual ao count, significa de deu sucesso na
                   minha escrita
                */

    struct cadastro{
        char nome[30], endereco[30];
        int idade;
        };

int main()
{
    /*
    //EXEMPLO:

    FILE *arq;
    arq = fopen("c:\\Projetos\\vetor.txt","wb");//Abrindo para escrita bin�ria
        if(arq == NULL){
            printf("Erro na abertura!\n");
            system("pause");
            exit(1);//Aborta o programa
            }
    int total_gravado, v[5]={1,2,3,4,5};// Criei um vetor de 5 posi��es e ai eu quero gravar; vou retorar o total_gravado aqui;
    //Grava todo o array no arquivo (5 posi��es)
    total_gravado = fwrite(v,sizeof(int),5,arq);// total_gravado vai receber o resultado de fwrite();
                                                // Eu vou gravar o v, lembrando que o nome de um vetor e seu proprio ponteiro seu endere�o // aqui � o endere�o de onde est� os dados na mem�ria
                                                // sizeof(int) � o tamanho de cada  unidade a ser gravada // O tamanho de cada unidade
                                                // 5 unidades v�o ser gravadas // e quantas unidades
                                                // no arquivo arq  // e onde, qual arquivo gravar

        if(total_gravado!=5){   // se o total gravado for diferente de 5 tive um erro na escrita
            printf("Erro na escrita do arquivo\n");
            system("pause");
            exit(1);
        }
        fclose(arq); // e n�o s� fechar o arquivo deu tudo certo

    */

    //OUTRO EXEMPLO
    /*

    FILE *arq;
    arq = fopen("c:\\Projetos\\dados.txt","wb");
        if(arq==NULL){
                printf("Erro na abertura\n");
                system("pause");
                exit(1);
        }

         char str[20] = "Hello World!"; // Defini uma string
         float x = 5;                   // um valor float
         int v[5]={1,2,3,4,5};          // Um vetor int
                                        // e ai vou gravar esses tres dados em um unico arquivo
         fwrite(str,sizeof(char),20,arq); // tenho minha string gravada no arquivo arq
         fwrite(&x,sizeof(float),1,arq);  // Vou gravar o meu x, ent�o &x que � o endere�o da vari�vel vou gravar apenas um dado pois minha vari�vel s� tem um elemento
         fwrite(v,sizeof(int),5,arq);    // e o vetor como tinhamos visto antes
         fclose(arq);
         */

         //COMO GRAVAR UMA ESTRUTURA

        FILE *arq;
        arq = fopen("c:\\Projetos\\struct.txt","wb");
            if(arq==NULL){
                printf("Erro na abertura!\n");
                system("pause");
                exit(1);//Aborta o programa
            }
    struct cadastro cad = {"Andre","Rua 1", 31};
    fwrite(&cad,sizeof(struct cadastro),1, arq);//&cad pois cad n�o � um vetor � uma variavel struct ent�o preciso usar o & para ter acesso ao endere�o dele
                                                //sizeof(struct cadastro) ou seja quero saber o tamanho de cada cadastro
                                                // 1 pois vou gravar apenas uma unidade desse cadastro
                                                // no arquivo arq
    fclose(arq);



         system("pause");
         return 0;
}
