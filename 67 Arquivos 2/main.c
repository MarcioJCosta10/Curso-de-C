#include <stdio.h>
#include <stdlib.h>

    // QUE TIPO DE ARQUIVOS EU POSSO TRABALHAR NA LINGUAGEM C
    A linguagem C trabalha com apenas dois tipos de arquivos:
        - Aquivos texto: podem ser
        editados no bloco de notas
        - Arquivos bin�rios: N�O podem ser
        editados no bloco de notas

        /*Todos arquivos que conseguirmos imaginar eles ser�o classificados
        ou em arquivos textos ou bin�rios e a maneira como leio e escrevo �
        que define se pertence a um tipo ou ao outro*/

    ARQUIVO TEXTO: gravados exatamente como
    seriam impressos na tela.
    - Os dados s�o gravados como caracteres
    de 8 bits utilizando a tabela ASCII
    - Para que isso ocorra, existe uma etapa de
    "convers�o" dos dados.


    Como funciona isso?

    Problemas com a convers�o:
    - vou ter arquivos maiores // por causa da etapa de convers�o
    - vou ter leitura e escrita mais lentas // por causa da etapa de convers�o

    Considere um numero inteiro com 8 d�gitos:
        int n = 12345678; // 32 bits na mem�ria

    Em um arquivo texto, cada digito sera convertido para
    seu caractere ASCII, ou seja, 8 bits por digito.

    "12345678"// 64 bitis no arquivo


    ARQUIVO BIN�RIO:
    - Os dados s�o gravados exatamente como
    est�o na mem�ria do computador
    - N�o existe etapa de "Convers�o" dos dados.

    Consequentemente:
    - arquivos em geral menores
    - leitura e escrita mias r�pidas
    Voc� simplismente pega o conteudo que est� dentro da mem�ria e joga dentro do arquivo, simplismente uma c�pia

    Voltemos ao numero inteiro com 8 digitos:
        int n = 12345678; // 32 bits na mem�ria
    Em um arquivo bin�rio, o conteudo da mem�ria ser�
    copiado diretamente para o arquivo, sem convers�o

    12345678 //32 bits no arquivo (codificado)

    /* Para entendermos melhor a diferen�a entre esses
       dois arquivos, imagine os seguintes dados a serem
       gravados: */
       char nome[20] = "Ricardo";
       int i = 30;
       float a = 1.74;

    //EM ARQUIVO TEXTO SERIA ASSIM:
    Ricardo 30 1.74000
    //EM ARQUIVO BIN�RIO SERIA ASSIM:
    Ricardo R.P? // Perceba que os valores num�ricos sairam totalmente codificados


