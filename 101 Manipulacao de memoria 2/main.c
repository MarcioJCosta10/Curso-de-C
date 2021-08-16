#include <stdio.h>
#include <stdlib.h>
/*
                *A linguagem C possui algumas fun��es que permitem a manipula��o de "mem�ria"
                  essas fun��es est�o na biblioteca "string.h"
                   Hoje Vamos ver:
                    - "memmove": c�pia de mem�ria (maneira mais segura)
                    - "memcmp" : compara��o de mem�ria
                    - "memchr" : busca de mem�ria


                    "Fun��o memmove()"
                    - Copia uma quantidade de "bytes" de uma regi�o de mem�ria
                    para outra
                    - Ambas as regi�es de mem�ria s�o tratadas como unsigned char

                    "Forma Geral"
                    void* memmove(void* destino, void* origem, size_t N);

                    "Entrada"
                    - "destino" : ponteiro para a regi�o de mem�ria que receber� os dados copiados
                    - "origem"  : ponteiro para a regi�o de mem�ria de onde os dados ser�o copiado
                    - "N"       : n�mero de "bytes" que ser�o copiados.(N�o � necess�riamento o tamanho do array )

                    "Retorno"
                    - retorna uma c�pia do ponteiro "dest"
                    - retonar "NULL " em caso de erro

                    "Fun��o memmove()"
                    - Tem funcionamento exatamente igual ao "memcpy()"
                    Diferen�a exata:
                    - Mais lenta - Pois fa�o a copia duas vezes do auxiliara para o original
                    - Mais segura no caso de existir sobreposi��o(uma �rea em comum)
                    entre as duas regi�es de mem�ria: Usa um array auxiliar para fazer a c�pia e assim n�o tem proble de sobrescrever alguma coisa que j� foi copiada


                    char str[16];
                    memcpy(&str[0];&str[3], 10 );//Inv�lido
                    memmove(&str[0];&str[3], 10); //V�lido



                    "Fun��o memcmp()"
                    - Compara os primeiros "N bytes " de mem�ria de duas regi�es
                    - Ambas as regi�es de mem�ria s�o tratadas como unsigned char
                    - Compara��o "lexicografica"(se forem string ser� a compara��o do alfabeto, assim avem antes de b que vem antes de c...)

                    "Forma geral "
                    void* memcmp(void* P1, void*P2, P2*size_t N);
                     int*
                    "Entrada"
                    - "P1" : ponteiro para uma regi�o de mem�ria
                    - "P2" : ponteiro para uma regi�o de mem�ria
                    - "N"  : n�mero de "bytes"  comparados. N�o � necess�riamente o tamanho do array

                    "Retorno "  No caso de um void * inteiro (int)
                    - "< 0" : primeiro "byte" diferente tem um valor "menor" em "P1"
                    - "=="  : blocos de mem�ria iguais
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
                                                 // Estou comparando o endere�o da primeira struct endere�o da segunda struct
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

        "Fun��o memchr()"
        - Procura pela primeira ocorrencia de um determinado
        valor em uma regi�o de mem�ria, procura por um byte espec�fico em uma determinada regi�o de mem�ria
        - Tanto o valor como a regi�o de mem�ria s�o tratadas
        como unsigned char

        "Forma Geral"
        void* memchr(void*P, int V, size_t N);
        "Entrada"
        -"P": ponteiro para uma regi�o de mem�ria que vai ser procurada
        -"V": valor a ser procurado vai ser tratado como unsigned char ou seja s� o primeiro byte
        -"N": n�mero de "bytes" comparados. Ou seja dentro dessa regi�o de mem�ria aqui
                                            quntos bytes ser�o olhados ou seja qual � o intervalo
                                            de bytes que eu posso usar(N�o � necess�riamente o tamanho do array � o n�mero de bytes)

        "Retorno"

        - Retornar um ponteiro para a primeira ocorrencia do valor a ser procurado
        - Retorna "NULL" se n�o encontrar

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


