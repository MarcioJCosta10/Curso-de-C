#include <stdio.h>
#include <stdlib.h>
        /
        // FUN��O feof()

        * J� vimos a fun��o a constante EOF que indica o final de um arquivo*

        // At� agora estavamos manipulando arquivos texto e um caractere inteiro por vez;

        *Porem, o problema � quando manipulamos dados bin�rios, em um valor inteiro o valor da constante EOF vai ser sempre diferente,
         mas em bin�rio o valor porde ser igual ao da constante EOF.

         Para evitar este tipo de situa��o e difernciar,
         a linguagem C inclui a fun��o feof();
         //FORMA GERAL
          int feof(FILE *fp);//Recebe como parametro o meu arquivo que quero verificar se chegou no final ou n�o e retorna um valor inteiro.


         Essa fun��o retorna um valor inteiro // E quanto vale esse valor inteiro?
         que ser� igual a Zero se ainda n�o tiver atingido o final do arquivo//Ent�o se a fun��o feof() retornar 0 significa que n�o estou no final do arquivo
                                                                          // Diferente de zero cheguei ao final do arquivo

            //ESSA FUN��O FUNCIONA PARA QUALQUER TIPO DE ARQUIVO E PARA QUALQUER TIPO DE DADA, ENT�O � MUITO MELHOR QUE EU TRABALHAR COM A CONSTANTE EOF;
            // EOF � BOM S� PARA fgetc() e fputc();
            */

int main()
{
    //Exemplo:
     FILE *f;
    f = fopen("C:\\Projetos\\Arquivo.txt","r");
    if(f==NULL){
        printf("Erro na abertura do arquivo!\n");
        system("pause");
        exit(1);
    }
    char c = fgetc(f);

    while (!feof(f)){//   A unica mudan�a � aqui, ao inv�s de fazer c!=EOF, eu fiz !feof(f);
                     //   Lembre-se feof() retonar zero se eu n�o estiver no final do arquivo
                     //   Notfeof(f) (not 0 = V) quer dizer verdadeiro ent�o eu continuo no la�o
                     //   (Not 1 = F) � igual a falso ent�o eu termino o meu la�o
        printf("%c",c);
        c = fgetc(f);

        }
        printf("\nFim\n");
        fclose(f);






    return 0;
}
