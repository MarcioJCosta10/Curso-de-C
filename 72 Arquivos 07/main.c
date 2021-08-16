#include <stdio.h>
#include <stdlib.h>
        /
        // FUNÇÃO feof()

        * Já vimos a função a constante EOF que indica o final de um arquivo*

        // Até agora estavamos manipulando arquivos texto e um caractere inteiro por vez;

        *Porem, o problema é quando manipulamos dados binários, em um valor inteiro o valor da constante EOF vai ser sempre diferente,
         mas em binário o valor porde ser igual ao da constante EOF.

         Para evitar este tipo de situação e difernciar,
         a linguagem C inclui a função feof();
         //FORMA GERAL
          int feof(FILE *fp);//Recebe como parametro o meu arquivo que quero verificar se chegou no final ou não e retorna um valor inteiro.


         Essa função retorna um valor inteiro // E quanto vale esse valor inteiro?
         que será igual a Zero se ainda não tiver atingido o final do arquivo//Então se a função feof() retornar 0 significa que não estou no final do arquivo
                                                                          // Diferente de zero cheguei ao final do arquivo

            //ESSA FUNÇÃO FUNCIONA PARA QUALQUER TIPO DE ARQUIVO E PARA QUALQUER TIPO DE DADA, ENTÃO É MUITO MELHOR QUE EU TRABALHAR COM A CONSTANTE EOF;
            // EOF É BOM SÓ PARA fgetc() e fputc();
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

    while (!feof(f)){//   A unica mudança é aqui, ao invés de fazer c!=EOF, eu fiz !feof(f);
                     //   Lembre-se feof() retonar zero se eu não estiver no final do arquivo
                     //   Notfeof(f) (not 0 = V) quer dizer verdadeiro então eu continuo no laço
                     //   (Not 1 = F) é igual a falso então eu termino o meu laço
        printf("%c",c);
        c = fgetc(f);

        }
        printf("\nFim\n");
        fclose(f);






    return 0;
}
