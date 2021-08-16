#include <stdlib.h>
#include <stdio.h>
#include "Ponto.h" // Inclui os protótipos

//Definição do tipo de dados

struct ponto{
    float x;
    float y;
};

/* Começar a implementar as funções*/
//Aloca e retorna um ponto com coordenadas "x" e "y"

Ponto* pto_cria(float x, float y){ // Começo com x e y e eu vou criar um ponto, o ponto é um ponteiro
Ponto* p = (Ponto*) malloc(sizeof(Ponto));// Então tenho que fazer um malloc, ou seja estou alocando um espaço de memória para guardar x e y
                                             // Por isso está trabalhando com ponteiro e tudo meio dinâmico, então reservei o espaço para guardar x e y
    if(p!= NULL){  // Se deu certo a aloção
            p->x = x;// eu atribuo os valores x e y que recebi como paramentro da função
            p->y = y;// aos campos x e y do ponto
        }
        return p;  //Terminei a atribuição retorno o meu ponto, ou seja quando eu chamar a função pto_cria, eu vou retornar um ponteiro p para o ponto que eu aloquei dinamicamente que está guardado os valores x e y
}

// Libera a memória alocada para um ponto
void pto_libera(Ponto*p){ // Se eu aloquei com o malloc
    free(p);   // para liberar basta dar um free() do ponteiro p que passei como parâmetro
}

// Recupera, por referencia, o valor de um ponto
void pto_acessa(Ponto*p, float* x, float* y){ // Eu tenho minha estrutura x e y dentro do meu ponteiro p e eu quero pegar esses
    *x = p->x;                                // dois valores para os dois ponteiros x e y, lembrando que eu não consigo devolver mais de um valor pelo meu retorno então eu tenho que devolver por referencia
    *y = p->y;                                // Peguei o valor de x e coloquei no x e o de y e coloquei em y
}                                             // Quando eu chamar essa função eu vou ter x e y lá nos parâmentros copiando os valores da estrutura e passando por referencia

// Atribui a um ponto as coordenadas "x" e "y"
void pto_atribui(Ponto* p, float x, float y){// Na atribuição é o contrario da função acima, eu tenho a minha estrutura x e y, peguei os valores passados na função em x e y e atribuo aos campos da estrutura
p->x = x;
p->y = y;
}

// Calcular a distancia entre dois pontos
float pto_distancia(Ponto* p1, Ponto* p2){  // Eu tenho agora dois pontos
    float dx = p1 -> x - p2 -> x; // calculo a diferença entre os dois x e os dois y
    float dy = p1 -> y - p2 -> y;
    return sqrt (dx * dx + dy *dy); // retorno a distancia que é a raiz de dx² - dy²
}


//Então essa é minha biblioteca
