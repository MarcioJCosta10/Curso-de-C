#include <stdio.h>
#include <stdlib.h>

            //ARQUIVOS EM LINGUAGEM C

        ->DEFINI��ES: O que � um arquivo?
        Arquivo: � ma cole��o de bytes armazenados em um
        dispositivo de armazenamento secund�rio.

        - disco r�gido
        - CD
        - DVD
        - Pendrive
        - Etc


        ->VANTAGENS DE SE USAR ARQUIVOS:
        - Armazenamento dur�vel;
        - Permite Armazenar uma
          grande quantidade de informa��es;
        - Acesso concorrentes aos dados, pode ser usado por varios programas;


        _->CUIDADOS: A extens�o n�o define o tipo de arquivo, a extens�o � somente para
        o sistema operacional saber qual programa � o mais indicado para abrir aquele arquivo.

        O que define um arquivo � a maneira
        como os dados est�o organizados e as
        opera��es usadas por um programa para
        processar (ler e escrever) esse arquivo.



       Para trabalhar com arquivos vamos usar a biblioteca stdio.h
       Para se trabalhar com arquivos a linguagem C tem um tipo especial de ponteiros
      /* A linguagem C usa um tipo especial de ponteiro para manipular arquivos*/
      //FORMA GERAL
      FILE *nome_ponteiro; //� igual declarar uma vari�vel,�s� que � um ponteiro especial do tipo FILE
      /* � esse ponteiro que controla o fluxo de leitura e escrita dentro de um arquivo  */

         Ent�o sempre que eu vor ler ou escrever um arquivo eu vou precisar desse ponteito declarado antes



int main()
{

    system("pause");
    return 0;
}
