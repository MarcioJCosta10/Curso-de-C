#include <stdio.h>
#include <stdlib.h>

            // COMO GRAVAR ALGUMA COISA DENTRO DE UM ARQUIVO, GRAVAR UM CARACTER POR VEZ EM UM ARQUIVO;
            //Fun��es b�sicas de escrita: fputc();
            /*   Para se escrever um caractere em
                 um arquivo usamos a fun��o fputc()
            */

            //FORMA GERAL
            /*int fputc( char c, FILE *fp); //Ent�o eu quero gravar um char em um arqivo usao afun��o fputc(), essa fun��o me retorna um valor inteiro que vai ser:

            /*Retorna:
            - Em caso de erro a fun��o: EOF
            - Em caso de sucesso: O pr�prio caractere
            */




int main()
{
   //EXEMPLO COMPLETO:
   FILE *f;
   f = fopen("C:\\Projetos\\arquivo.txt","w");
    if(f==NULL){
        printf("Erro na abertura\n");
        system("pause");
        exit(1);//Abortar o programa
        }
        char texto[20]= "Meu Programa em C";
        int i;
        //Grava a string caractere a caractere
        for(i=0; i<strlen(texto); i++)// i come�ando em zero; enquanto i for menor que a string texto ; i incrementado;
            fputc(texto[i],f);
            fclose(f);


            //Posso fazer algo mais alem de gravar um caractere por vez?
            // Posso manipular a maneira que eu estou gravando, posso combinar as fun��es fputc da maneira que eu quiser:
            //Vou usar o mesmo exemplo s� que vou usar dois comando fputc dento do meu for


   FILE *fa;
   fa = fopen("C:\\Projetos\\arquivo1.txt","w");
    if(fa==NULL){
        printf("Erro na abertura\n");
        system("pause");
        exit(1);//Abortar o programa
        }
        char textoA[20]= "Meu Programa em C";
        int b;
        //Grava a string caractere a caractere

        for(b=0; b<strlen(textoA); b++){
            fputc(textoA[b],fa); // Ent�o para caractere que eu gravar dentro do meu arquivo
            fputc(' ',fa);// estou escrevento em seguida um espa�o
            fputc('-',fa); // posso colocar um tra�o entre as letras
                            /* Podemos perceber que sou eu programador que vou definir como os dados estar�o gravados no meu arquivo,
                               a fun��o fputc gravar� um caractere por vez sou eu que vou definir a combina��o, eu vou poder manipular
                               a string quando estiver gravando
                            */

        }
            fclose(fa);// Nunca esquecer de fechar o arquivo � o que garante que tudo que eu fiz vai estar realemte gravado dentro do arquivo


    system("pause");
    return 0;
}
