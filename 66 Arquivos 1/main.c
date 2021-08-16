#include <stdio.h>
#include <stdlib.h>

            //ARQUIVOS EM LINGUAGEM C

        ->DEFINIÇÕES: O que é um arquivo?
        Arquivo: É ma coleção de bytes armazenados em um
        dispositivo de armazenamento secundário.

        - disco rígido
        - CD
        - DVD
        - Pendrive
        - Etc


        ->VANTAGENS DE SE USAR ARQUIVOS:
        - Armazenamento durável;
        - Permite Armazenar uma
          grande quantidade de informações;
        - Acesso concorrentes aos dados, pode ser usado por varios programas;


        _->CUIDADOS: A extensão não define o tipo de arquivo, a extensão é somente para
        o sistema operacional saber qual programa é o mais indicado para abrir aquele arquivo.

        O que define um arquivo é a maneira
        como os dados estão organizados e as
        operações usadas por um programa para
        processar (ler e escrever) esse arquivo.



       Para trabalhar com arquivos vamos usar a biblioteca stdio.h
       Para se trabalhar com arquivos a linguagem C tem um tipo especial de ponteiros
      /* A linguagem C usa um tipo especial de ponteiro para manipular arquivos*/
      //FORMA GERAL
      FILE *nome_ponteiro; //É igual declarar uma variável,´só que é um ponteiro especial do tipo FILE
      /* É esse ponteiro que controla o fluxo de leitura e escrita dentro de um arquivo  */

         Então sempre que eu vor ler ou escrever um arquivo eu vou precisar desse ponteito declarado antes



int main()
{

    system("pause");
    return 0;
}
