#include <stdio.h>
#include <stdlib.h>

            // COMO GRAVAR ALGUMA COISA DENTRO DE UM ARQUIVO, GRAVAR UM CARACTER POR VEZ EM UM ARQUIVO;
            //Funções básicas de escrita: fputc();
            /*   Para se escrever um caractere em
                 um arquivo usamos a função fputc()
            */

            //FORMA GERAL
            /*int fputc( char c, FILE *fp); //Então eu quero gravar um char em um arqivo usao afunção fputc(), essa função me retorna um valor inteiro que vai ser:

            /*Retorna:
            - Em caso de erro a função: EOF
            - Em caso de sucesso: O próprio caractere
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
        for(i=0; i<strlen(texto); i++)// i começando em zero; enquanto i for menor que a string texto ; i incrementado;
            fputc(texto[i],f);
            fclose(f);


            //Posso fazer algo mais alem de gravar um caractere por vez?
            // Posso manipular a maneira que eu estou gravando, posso combinar as funções fputc da maneira que eu quiser:
            //Vou usar o mesmo exemplo só que vou usar dois comando fputc dento do meu for


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
            fputc(textoA[b],fa); // Então para caractere que eu gravar dentro do meu arquivo
            fputc(' ',fa);// estou escrevento em seguida um espaço
            fputc('-',fa); // posso colocar um traço entre as letras
                            /* Podemos perceber que sou eu programador que vou definir como os dados estarão gravados no meu arquivo,
                               a função fputc gravará um caractere por vez sou eu que vou definir a combinação, eu vou poder manipular
                               a string quando estiver gravando
                            */

        }
            fclose(fa);// Nunca esquecer de fechar o arquivo é o que garante que tudo que eu fiz vai estar realemte gravado dentro do arquivo


    system("pause");
    return 0;
}
