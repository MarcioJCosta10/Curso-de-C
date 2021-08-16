#include <stdio.h>
#include <stdlib.h>

                       "Novos Tipos Inteiros"
            - O padr�o C99 possui novos tipos de inteiros.
            - O prop�sito disso � melhorar a portabilidade
            de programas, j� que os tipos inteiros b�sicos
            podem variar em diferentes sistemas operacionais.
            - Definidos na biblioteca "inttypes.h" e "stdint.h".


                       "Novos Tipos Inteiros"
            - Tipos inteiros de largura exata, possuem "N" bits em
            todos os sistemas
            int8_t
            int16_t
            int32_t
            int64_t

            - Tipos inteiros de largura m�nima, possuem pelo menos "N" bits
            em todos os sistemas
            int_least8_t
            int_least16_t
            int_least32_t
            int_least64_t

            - Tipos inteiros r�pidos, s�o os tipos inteiros mais r�pidos disponiveis
            no sistema e possuem pelo menos "N" bits
            int_fast8_t
            int_fast16_t
            int_fast32_t
            int_fast64_t

            - Tipos inteiros de largura m�xima, � capaz de representar todos os demais
            tipos inteiros
            intmax_t

            - Ponteiro de inteiro, garante armazenar um ponteiro para inteiro
            intptr_t

            O padr�o C99 tamb�m fornece a vers�o unsigned desses tipos
            Basta acrescentar o prefixo "u" ao nome do tipo

            "Exemplo"
            - Inteiro 8 bits com sinal
            int8_t
            - Inteiro 8 bits sem sinal
            uint8_t



            "Leitura/Escrita dos novos tipos inteiros"
            Os tipos de saidas/entrada padr�o n�o funcionam para os novos tipos
            inteiros

            Devemos usar as macros pre-definidas para cada tipo
#include <stdio.h>
#include <inttypes.h>

int main()
{
    int64_t n = 123456781234;
    //ERRADO
    printf("Valor = %d\n",n)

    //CORRETO
    printf("Valor =%"PRId64"\n",n);



    "TABELA DE MACRO DE LEITURA"

                Tipos de inteiros e respectivos tipos de entrada
L� um               intN_t          int_leastN_t    int_fastN_t     intmax_t    intptr_t
                    N=8,16,32       N=8,16,32       N=8,16,32
                        ou 64           ou 64           ou 64
Inteiro decimal     SCNdN           SCNdLEASTN      SCNdFASTN       SCNdMAX     SCNdPRT
com sinal           SCNiN           SCNiLEASTN      SCNiFASTN       SCNiMAX     SCNiPRT

Inteiro decimal     SCNuN           SCNuLEASTN      SCNuFASTN       SCNuMAX     SCNuPRT
sem sinal

Inteiro octal       SCNoN           SCNoLEASTN      SCNoFASTN       SCNoMAX     SCNoPRT
sem sinal

Inteiro hexadecimal SCNxN           SCNxLEASTN      SCNxFASTN       SCNxMAX     SCNxPRT
sem sinal



    "TABELA DE MACRO DE ESCRITA"

                Tipos de inteiros e respectivos tipos de entrada
Imprime um          intN_t          int_leastN_t    int_fastN_t     intmax_t    intptr_t
                    N=8,16,32       N=8,16,32       N=8,16,32
                        ou 64           ou 64           ou 64
Inteiro decimal     PRIdN           PRIdLEASTN      PRIdFASTN       PRIdMAX     PRIdPRT
com sinal           PRIiN           PRIiLEASTN      PRIiFASTN       PRIiMAX     PRIiPRT

Inteiro decimal     PRIuN           PRIuLEASTN      PRIuFASTN       PRIuMAX     PRIuPRT
sem sinal

Inteiro octal       PRIoN           PRIoLEASTN      PRIoFASTN       PRIoMAX     PRIoPRT
sem sinal

Inteiro hexadecimal PRIxN           PRIxLEASTN      PRIxFASTN       PRIxMAX     PRIxPRT
sem sinal









    return 0;
}
