#ifndef LISTASEQUENCIAL_H_INCLUDED
#define LISTASEQUENCIAL_H_INCLUDED
#define MAX 100 // Tamanho do meu vetor
struct aluno{ // Defini um tipo struct aluno, esse vai ser o dado que vou guardar dentro da minha lista
    int matricula;
    char nome[30];
    float n1,n2,n3;
};
typedef struct lista Lista; //Defini um apelido para minhalista agora será necessário dizer somente Lista ao invés de struct lista Lista

//Definir a função cria lista, é a função que eu vou inicializar a minha lista
Lista * cria_lista();

//Definir a função libera lista
void libera_lista(Lista* li);

// definir função do tamanho da lista
int tamanho_lista(Lista* li);

// definir a função de lista cheia
int lista_cheia (Lista * li);

// definir a função de lista vazia
int lista_vazia(Lista* li);

//definir a função inserir no final da lista
int insere_lista_final(Lista* li, struct aluno al);

//definir a função inserir no inicio da lista
int insere_lista_inicio(Lista* li, struct aluno al);

//definir a função insere de forma ordenada
int insere_lista_ordenada(Lista*li, struct aluno al);

//definir a função remove no final da lista
int remove_lista_final(Lista*li);

//definir a função remove inicio da lista
int remove_lista_inicio(Lista*li);

//definir a função remove em qualquer posição
int remove_lista(Lista*li, int mat);

// definir a função consulta lista posição
int consulta_lista_pos(Lista* li, int pos, struct aluno *al );/*Passo o ponteiro para a lista
                                                                A Posição que eu quero acessar
                                                                e um ponteiro para a struct aluno onde eu vou guardar as informações


                                                               */


//definir função consulta lista pelo conteudo no caso pela matricula
int consulta_lista_mat(Lista* li, int mat, struct aluno * al);// Passo a lista, passo a matricula que quero , e o ponteiro para  a strutura aluno onde vou retornar os dados







#endif // LISTASEQUENCIAL_H_INCLUDED
