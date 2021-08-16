#include <stdio.h>
#include <stdlib.h>
/*
                *A linguagem C possui algumas funções que permitem a manipulação de "memória"
                  essas funções estão na biblioteca "string.h"
                   Hoje Vamos ver:
                    - "memmove": cópia de memória (maneira mais segura)
                    - "memcmp" : comparação de memória
                    - "memchr" : busca de memória


                    "Função memmove()"
                    - Copia uma quantidade de "bytes" de uma região de memória
                    para outra
                    - Ambas as regiões de memória são tratadas como unsigned char

                    "Forma Geral"
                    void* memmove(void* destino, void* origem, size_t N);

                    "Entrada"
                    - "destino" : ponteiro para a região de memória que receberá os dados copiados
                    - "origem"  : ponteiro para a região de memória de onde os dados serão copiado
                    - "N"       : número de "bytes" que serão copiados.(Não é necessáriamento o tamanho do array )

                    "Retorno"
                    - retorna uma cópia do ponteiro "dest"
                    - retonar "NULL " em caso de erro

                    "Função memmove()"
                    - Tem funcionamento exatamente igual ao "memcpy()"
                    Diferença exata:
                    - Mais lenta - Pois faço a copia duas vezes do auxiliara para o original
                    - Mais segura no caso de existir sobreposição(uma área em comum)
                    entre as duas regiões de memória: Usa um array auxiliar para fazer a cópia e assim não tem proble de sobrescrever alguma coisa que já foi copiada


                    char str[16];
                    memcpy(&str[0];&str[3], 10 );//Inválido
                    memmove(&str[0];&str[3], 10); //Válido



                    "Função memcmp()"
                    - Compara os primeiros "N bytes " de memória de duas regiões
                    - Ambas as regiões de memória são tratadas como unsigned char
                    - Comparação "lexicografica"(se forem string será a comparação do alfabeto, assim avem antes de b que vem antes de c...)

                    "Forma geral "
                    void* memcmp(void* P1, void*P2, P2*size_t N);
                     int*
                    "Entrada"
                    - "P1" : ponteiro para uma região de memória
                    - "P2" : ponteiro para uma região de memória
                    - "N"  : número de "bytes"  comparados. Não é necessáriamente o tamanho do array

                    "Retorno "  No caso de um void * inteiro (int)
                    - "< 0" : primeiro "byte" diferente tem um valor "menor" em "P1"
                    - "=="  : blocos de memória iguais
                    - "> 0" : primeiro "byte" diferente tem valor maior em "P1"


*
struct pessoa {
    char nome [50];
    int idade;

};



int main()
{

    struct pessoa p1 = {"Andre", 34};
    struct pessoa p2 = {"AndrE",34};

    int re;
    re = memcmp(&p1, &p2, sizeof(struct pessoa)); // re recebe o resultado da memcpy
                                                 // Estou comparando o endereço da primeira struct endereço da segunda struct
                                                 // quantos bytes vou comparar? o tamanho da estrutura    sizeof(struct pessoa)
    if(re==0)
        printf("Iguais\n");
    else
        if (re>0)
            printf("P1 eh maior que P2\n");
        else
            printf("P2 eh maior que P1\n");

        system("pause");

    return 0;


}

        "Função memchr()"
        - Procura pela primeira ocorrencia de um determinado
        valor em uma região de memória, procura por um byte específico em uma determinada região de memória
        - Tanto o valor como a região de memória são tratadas
        como unsigned char

        "Forma Geral"
        void* memchr(void*P, int V, size_t N);
        "Entrada"
        -"P": ponteiro para uma região de memória que vai ser procurada
        -"V": valor a ser procurado vai ser tratado como unsigned char ou seja só o primeiro byte
        -"N": número de "bytes" comparados. Ou seja dentro dessa região de memória aqui
                                            quntos bytes serão olhados ou seja qual é o intervalo
                                            de bytes que eu posso usar(Não é necessáriamente o tamanho do array é o número de bytes)

        "Retorno"

        - Retornar um ponteiro para a primeira ocorrencia do valor a ser procurado
        - Retorna "NULL" se não encontrar

"Exemplo"*/
int main(){
    char str[50]="Exemplo de string em C";
    char* p;
    p = (char*) memchr(str,'s',strlen(str));
    if(p!= NULL)
        printf("Encontrado Posicao:%d \n",(p-str+1));
    else
        printf("Nao encontrado!\n");
        system("pause");
        return 0;

}


