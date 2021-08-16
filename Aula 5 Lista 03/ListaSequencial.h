#ifndef LISTASEQUENCIAL_H_INCLUDED
#define LISTASEQUENCIAL_H_INCLUDED
#define MAX 100 // Tamanho do meu vetor
struct aluno{ // Defini um tipo struct aluno, esse vai ser o dado que vou guardar dentro da minha lista
    int matricula;
    char nome[30];
    float n1,n2,n3;
};
typedef struct lista Lista; //Defini um apelido para minhalista agora ser� necess�rio dizer somente Lista ao inv�s de struct lista Lista

//Definir a fun��o cria lista, � a fun��o que eu vou inicializar a minha lista
Lista * cria_lista();

//Definir a fun��o libera lista
void libera_lista(Lista* li);

// definir fun��o do tamanho da lista
int tamanho_lista(Lista* li);

// definir a fun��o de lista cheia
int lista_cheia (Lista * li);

// definir a fun��o de lista vazia
int lista_vazia(Lista* li);

//definir a fun��o inserir no final da lista
int insere_lista_final(Lista* li, struct aluno al);

//definir a fun��o inserir no inicio da lista
int insere_lista_inicio(Lista* li, struct aluno al);

//definir a fun��o insere de forma ordenada
int insere_lista_ordenada(Lista*li, struct aluno al);

//definir a fun��o remove no final da lista
int remove_lista_final(Lista*li);

//definir a fun��o remove inicio da lista
int remove_lista_inicio(Lista*li);

//definir a fun��o remove em qualquer posi��o
int remove_lista(Lista*li, int mat);

// definir a fun��o consulta lista posi��o
int consulta_lista_pos(Lista* li, int pos, struct aluno *al );/*Passo o ponteiro para a lista
                                                                A Posi��o que eu quero acessar
                                                                e um ponteiro para a struct aluno onde eu vou guardar as informa��es


                                                               */


//definir fun��o consulta lista pelo conteudo no caso pela matricula
int consulta_lista_mat(Lista* li, int mat, struct aluno * al);// Passo a lista, passo a matricula que quero , e o ponteiro para  a strutura aluno onde vou retornar os dados







#endif // LISTASEQUENCIAL_H_INCLUDED
