#include <stdio.h>
#include <stdlib.h>
            // FUNÇÃO fgets();
            /*
            Nas ultimas aulas vimos como ler uma arquivo texto usando a função fgetc(); que eu usava para
            ler um unico caractre por vez*/
            //Imagine que temos varias string e uma por linha teria que usar o comando for para cada string, e isso é muito trabalhoso

            //Existe uma maneira mais facil de eu ler uma string do meu arquivo? Sim exite para isso vamos usar a função fgets();

            /*Para se ler uma string de um arquivo
               usamos a função fgets()*/
               //FORMA GERAL
              /* char* fegts (char *str ,int tamanho, FILE *fp); /* A função fgets() recebe tres parametros:
                                                                1- A string que eu vou ler = char *str onde vai ser armazenada a string lida, eu
                                                                vou ler do arquivo= FILE*fp e vou armazenar aqui;
                                                                2- O tamanho ou seja qual é o tamanho máximo da minha string, ou quantos caracteres eu
                                                                vou ler do meu arquivo, posso especificar um ou outro;
                                                                3- O arquivo onde está lendo
                                                                E vai retornar um ponteiro para char
                                                                */
            /*Retorna:
              Em caso de erro a constante: NULL
              Em caso de sucesso: um ponteiro para
              o primeiro caractere de str, simplismente
              um ponteiro para onde começa a string lida
            */





int main()
{
    /*
    char str[20];
    FILE *arq;
    arq = fopen("C:\\Projetos\\Arquivofgets.txt","r");
        if(arq==NULL){
            printf("Erro na abertura\n");
            system("pause");
            exit(1);
            }
    char *result = fgets(str,12,arq);//Vou ler o arquivo arq, vou armazenar o conteudo dentro da string str que tem tamanho 20 ou seja posso ler até 19 caracteres guardando um para o \0;
                                     // Mas eu vou ler só 11 caracteres no maximo do arquivo arq


        if(result = NULL)           // Aqui vou fazer uma verificação se der NULL teve um erro na leitura
        printf("Erro na leitura\n");

    else
        printf("%s", str); // Se não eu vou imprimir a strig lida na tela
    printf("\n");
    fclose(arq);

    */


  // Exemplo 2:

    char str[20];
    FILE *arq;
    arq = fopen("C:\\Projetos\\Arquivofgets.txt","r");
        if(arq==NULL){
            printf("Erro na abertura\n");
            system("pause");
            exit(1);
            }

        /* A função fgets ()lê uma string até
           encontrar um caractere de nova linha (\n)
           ou "tamanho -1" caracteres

        */
        char *result = fgets(str,20,arq);// Nesse caso como é para ler 19 caracteres era para ler toda a string
                                         // mas a função fgets lê até encontrar o (\n), então ela para na primeira linho
                                         // ou lê tamanho -1;
                                         // O que vier primeiro para a leitura
            if(result = NULL)
                printf("Erro na leitura\n");
            else
        printf("%s", str);
        printf("\n");
        fclose(arq);



    system("pause");
    return 0;
}
