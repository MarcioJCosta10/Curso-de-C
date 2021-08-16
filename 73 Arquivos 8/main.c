#include <stdio.h>
#include <stdlib.h>
        // FUN��O fputs();
        /*
        Nas ultimas aulas vimos como gravar um caractere e ler um caractere em uma arquivo, nos exemplos
        anteriores era gravado ou lido um caractere por vez, e eu sempre usava o for;
        Se eu quiser gravar ou ler varias strings eu tenho que fazer sempre o for e os passos para cada
        string? Exite um jeito mais simples? Sim e vamos ver agora;*/

        /* Para se escrever uma string em
           um arquivo usamos a fun��o fputs() */
            //int fputs(char *str, FILE *fp);// Essa fun��o vai receber uma string como paramentro e o arquivo onde eu quero gravar essa string e retornar um valor inteiro
           /* Retorna:
              Em caso de erro a constante  EOF
              Em caso  de sucesso: um valor diferente de Zero
           */

           //A fun��o fputs faz exatamnete o que fizemos com o comando for, vai gravar tod string at� encontrar o \0;

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
        //Grava toda a string de uma vez e n�o vou usar o for
        int retorno = fputs(texto,f);//Vou usar a fun��o fputs() que vai receber a string texto como parametro e vai gravar no arquivo f
                                     // e estou recebendo um valor de retorno inteiro
        if(retorno==EOF)// Comparo o retorno com o EOF, se for igual deu erro, caso nao deu certo eu ou gravar toda minha string
            printf("Erro na Grava��o\n");
        fclose(f);*/

        //Outro Exemplo
        /* A fun��o fputs n�o coloca o caracter
           de nova linha '\n', nem nenhum outro tipo
           de caractere, no final da string escrita     */

    FILE * f;
    f = fopen("C:\\Projetos\\Arquivofputs.txt","w");
        if(f==NULL){
            printf("Erro na abertura\n");
            system("Pause");
            exit(1);
            }               //A fun��o fputs grava apenas a string que pedimos para ser gravadas
            fputs("Hello", f);
                            // ent�o entre as duas fun��es fputs na ser� gravado no meu arquivo, nenhum espa�o nem uma quebra de linha nada, esse apapel  � do programador
            fputs("Word", f);
            fputs("Hello\n", f);// Isso a principio resolveria pois, mas as vezes esse texto est� dentro de uma string ou vari�vel
            fputs("Word\n", f);// e n�o teria como colcar o \n;
                               // ent�o entre as duas fun��es fputs n�o ser� gravado nada no meu arquivo, nenhum espa�o nem uma quebra de linha nada, esse papel � do programador definir
            fputs("Hello", f);
            fputc('\n',f)      // Uma outra solu��o  � usar a fun��o fputc, e pedir para gravar um unico caractere de quebra de linha
                               // Aqui stou usando uma fun��o para inserir somente o quebra de linha

            fputs("Word", f);


            fclose(f);

            //Vamos ver como evitar que sai todo texto junto




    system("pause");
    return 0;
}
