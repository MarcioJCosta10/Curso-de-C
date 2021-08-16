#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // a fun��o toupper() pertence a essa bibloteca;
                //EXERC�CIO SOBRE ARQUIVO:
                /* Problema: ler um arquivo contendo
                   um texto em min�sculo e criar outro
                   arquivo com o texto em mai�sculo */


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
    char c = fgetc(f1);  //Esse � o c�digo para a leitura do meu arquivo minusculo
    while (c!=EOF){      //Esse � o c�digo para a leitura do meu arquivo minusculo// encontrou EOF sai do la�o e fecha os dois arquivos
        fputc(toupper(c),f2);/*Esse � o c�digo para a grava��o do meu arquivo maiusculo
                               usando a fun��o toupper() que pertence a biblioteca
                               ctype.h que pega um caracter minusculo e devolve ele
                               maiusculo, se ele j� for maiusculo ela n�o faz nada,
                               e esse retorno passo como parametro para a fun��o fputc();
                               Ent�o esse pedacinho do c�digo converte para maiusculo, grava no arquivo f2 maiusculo.txt */
        c = fgetc(f1);   //Esse � o c�digo para a leitura do meu arquivo minusculo
    }
    fclose(f1);// Fecha o arquivo
    fclose(f2);// Fecha o arquivo

    system("pause");
    return 0;
}
