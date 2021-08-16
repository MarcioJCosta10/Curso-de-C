#include <stdio.h>
#include <stdlib.h>
            //FUNÇÃO fprintf(): Permite garavar dados formatados em um arquivo
            /*  Nas ultimas aulas nos vimos como ler e
                escrever em arquivos caracteres,
                strings e até mesmo blocos de bytes.

                A lingugem C permite escrever uma lista
                formatada de variáveis em um
                arquivo do mesmo como fazemos na tela do
                computador com a funçao printf()

                Para issso usamos a função fprintf();
            */

            //FORMA GERAL: printf()
            //printf("tipos de saida", variáveis); //tipos de saidas e as variaveis

            //FORMA GERAL: fprintf()
            //fprintf(FILE*f, "tipos de saidas", vairaveis); // Parametro do arquivo, tipos de saidas, e as variaveis

    // A unica mudança de printf para fprintf é o parametro do arquivo




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
                                                              // Perceba que eu estou usando a mesma formataçao de dados
                                                              // A unica diferença é que na fprintf estou passando o parametro do arquivo
        fprintf(arq,"Nome: %s\nIdade: %d\nAltura: %f\n",nome,i,a);// Aqui estou mandando fazer um print no arquivo
    fclose(arq);

    system("pause");
    return 0;
}
