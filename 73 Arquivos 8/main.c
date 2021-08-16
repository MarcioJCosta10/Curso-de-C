#include <stdio.h>
#include <stdlib.h>
        // FUNÇÃO fputs();
        /*
        Nas ultimas aulas vimos como gravar um caractere e ler um caractere em uma arquivo, nos exemplos
        anteriores era gravado ou lido um caractere por vez, e eu sempre usava o for;
        Se eu quiser gravar ou ler varias strings eu tenho que fazer sempre o for e os passos para cada
        string? Exite um jeito mais simples? Sim e vamos ver agora;*/

        /* Para se escrever uma string em
           um arquivo usamos a função fputs() */
            //int fputs(char *str, FILE *fp);// Essa função vai receber uma string como paramentro e o arquivo onde eu quero gravar essa string e retornar um valor inteiro
           /* Retorna:
              Em caso de erro a constante  EOF
              Em caso  de sucesso: um valor diferente de Zero
           */

           //A função fputs faz exatamnete o que fizemos com o comando for, vai gravar tod string até encontrar o \0;

int main()
{
    /*
    FILE*f;
    //Exemplo:
    f = fopen("C:\\Projetos\\Arquivofputs.txt","w");
    if(f==NULL){
        printf("Erro na Arbertura\n");
        system("pause");
        exit(1);//Aborta o programa
    }
        char texto[40] = "Meu programa em C com a funcao fputs";
        //Grava toda a string de uma vez e não vou usar o for
        int retorno = fputs(texto,f);//Vou usar a função fputs() que vai receber a string texto como parametro e vai gravar no arquivo f
                                     // e estou recebendo um valor de retorno inteiro
        if(retorno==EOF)// Comparo o retorno com o EOF, se for igual deu erro, caso nao deu certo eu ou gravar toda minha string
            printf("Erro na Gravação\n");
        fclose(f);*/

        //Outro Exemplo
        /* A função fputs não coloca o caracter
           de nova linha '\n', nem nenhum outro tipo
           de caractere, no final da string escrita     */

    FILE * f;
    f = fopen("C:\\Projetos\\Arquivofputs.txt","w");
        if(f==NULL){
            printf("Erro na abertura\n");
            system("Pause");
            exit(1);
            }               //A função fputs grava apenas a string que pedimos para ser gravadas
            fputs("Hello", f);
                            // então entre as duas funções fputs na será gravado no meu arquivo, nenhum espaço nem uma quebra de linha nada, esse apapel  é do programador
            fputs("Word", f);
            fputs("Hello\n", f);// Isso a principio resolveria pois, mas as vezes esse texto está dentro de uma string ou variável
            fputs("Word\n", f);// e não teria como colcar o \n;
                               // então entre as duas funções fputs não será gravado nada no meu arquivo, nenhum espaço nem uma quebra de linha nada, esse papel é do programador definir
            fputs("Hello", f);
            fputc('\n',f)      // Uma outra solução  é usar a função fputc, e pedir para gravar um unico caractere de quebra de linha
                               // Aqui stou usando uma função para inserir somente o quebra de linha

            fputs("Word", f);


            fclose(f);

            //Vamos ver como evitar que sai todo texto junto




    system("pause");
    return 0;
}
