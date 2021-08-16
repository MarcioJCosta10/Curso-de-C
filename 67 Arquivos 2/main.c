#include <stdio.h>
#include <stdlib.h>

    // QUE TIPO DE ARQUIVOS EU POSSO TRABALHAR NA LINGUAGEM C
    A linguagem C trabalha com apenas dois tipos de arquivos:
        - Aquivos texto: podem ser
        editados no bloco de notas
        - Arquivos binários: NÃO podem ser
        editados no bloco de notas

        /*Todos arquivos que conseguirmos imaginar eles serão classificados
        ou em arquivos textos ou binários e a maneira como leio e escrevo é
        que define se pertence a um tipo ou ao outro*/

    ARQUIVO TEXTO: gravados exatamente como
    seriam impressos na tela.
    - Os dados são gravados como caracteres
    de 8 bits utilizando a tabela ASCII
    - Para que isso ocorra, existe uma etapa de
    "conversão" dos dados.


    Como funciona isso?

    Problemas com a conversão:
    - vou ter arquivos maiores // por causa da etapa de conversão
    - vou ter leitura e escrita mais lentas // por causa da etapa de conversão

    Considere um numero inteiro com 8 dígitos:
        int n = 12345678; // 32 bits na memória

    Em um arquivo texto, cada digito sera convertido para
    seu caractere ASCII, ou seja, 8 bits por digito.

    "12345678"// 64 bitis no arquivo


    ARQUIVO BINÁRIO:
    - Os dados são gravados exatamente como
    estão na memória do computador
    - Não existe etapa de "Conversão" dos dados.

    Consequentemente:
    - arquivos em geral menores
    - leitura e escrita mias rápidas
    Você simplismente pega o conteudo que está dentro da memória e joga dentro do arquivo, simplismente uma cópia

    Voltemos ao numero inteiro com 8 digitos:
        int n = 12345678; // 32 bits na memória
    Em um arquivo binário, o conteudo da memória será
    copiado diretamente para o arquivo, sem conversão

    12345678 //32 bits no arquivo (codificado)

    /* Para entendermos melhor a diferença entre esses
       dois arquivos, imagine os seguintes dados a serem
       gravados: */
       char nome[20] = "Ricardo";
       int i = 30;
       float a = 1.74;

    //EM ARQUIVO TEXTO SERIA ASSIM:
    Ricardo 30 1.74000
    //EM ARQUIVO BINÁRIO SERIA ASSIM:
    Ricardo R.P? // Perceba que os valores numéricos sairam totalmente codificados


