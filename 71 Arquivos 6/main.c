#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // a função toupper() pertence a essa bibloteca;
                //EXERCÍCIO SOBRE ARQUIVO:
                /* Problema: ler um arquivo contendo
                   um texto em minúsculo e criar outro
                   arquivo com o texto em maiúsculo */


int main()
{
   FILE *f1, *f2;
   f1 = fopen("C:\\Projetos\\minusculo.txt","r");
   f2 = fopen("C:\\Projetos\\maiusculo.txt","w");
    if(f1==NULL || f2==NULL){
        printf("Erro na abertura\n");
        system("pause");
        exit(1);//Aborta o programa

    }
    char c = fgetc(f1);  //Esse é o código para a leitura do meu arquivo minusculo
    while (c!=EOF){      //Esse é o código para a leitura do meu arquivo minusculo// encontrou EOF sai do laço e fecha os dois arquivos
        fputc(toupper(c),f2);/*Esse é o código para a gravação do meu arquivo maiusculo
                               usando a função toupper() que pertence a biblioteca
                               ctype.h que pega um caracter minusculo e devolve ele
                               maiusculo, se ele já for maiusculo ela não faz nada,
                               e esse retorno passo como parametro para a função fputc();
                               Então esse pedacinho do código converte para maiusculo, grava no arquivo f2 maiusculo.txt */
        c = fgetc(f1);   //Esse é o código para a leitura do meu arquivo minusculo
    }
    fclose(f1);// Fecha o arquivo
    fclose(f2);// Fecha o arquivo

    system("pause");
    return 0;
}
