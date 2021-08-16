#include <stdio.h>
#include <stdlib.h>
            //FUN��O fprintf(): Permite garavar dados formatados em um arquivo
            /*  Nas ultimas aulas nos vimos como ler e
                escrever em arquivos caracteres,
                strings e at� mesmo blocos de bytes.

                A lingugem C permite escrever uma lista
                formatada de vari�veis em um
                arquivo do mesmo como fazemos na tela do
                computador com a fun�ao printf()

                Para issso usamos a fun��o fprintf();
            */

            //FORMA GERAL: printf()
            //printf("tipos de saida", vari�veis); //tipos de saidas e as variaveis

            //FORMA GERAL: fprintf()
            //fprintf(FILE*f, "tipos de saidas", vairaveis); // Parametro do arquivo, tipos de saidas, e as variaveis

    // A unica mudan�a de printf para fprintf � o parametro do arquivo




int main()
{
    //EXEMPLO
    char nome [20]="Ricardo";
    int i = 31;
    float a = 1.74;

    FILE *arq = fopen("c:\\Projetos\\fprintf.txt","w");// Escrita em texto
    if(arq == NULL){
            printf("Erro na Abertura!\n");
            system("pause");
            exit(1);// Aborta o programa
        }
        printf("Nome: %s\nIdade: %d\nAltura: %f\n",nome,i,a); // Aqui eu estou mandando imprimir na tela do console
                                                              // Perceba que eu estou usando a mesma formata�ao de dados
                                                              // A unica diferen�a � que na fprintf estou passando o parametro do arquivo
        fprintf(arq,"Nome: %s\nIdade: %d\nAltura: %f\n",nome,i,a);// Aqui estou mandando fazer um print no arquivo
    fclose(arq);

    system("pause");
    return 0;
}
