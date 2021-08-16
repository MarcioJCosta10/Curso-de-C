#include <stdlib.h>
#include <stdio.h>
#include "Ponto.h" // Inclui os prot�tipos

//Defini��o do tipo de dados

struct ponto{
    float x;
    float y;
};

/* Come�ar a implementar as fun��es*/
//Aloca e retorna um ponto com coordenadas "x" e "y"

Ponto* pto_cria(float x, float y){ // Come�o com x e y e eu vou criar um ponto, o ponto � um ponteiro
Ponto* p = (Ponto*) malloc(sizeof(Ponto));// Ent�o tenho que fazer um malloc, ou seja estou alocando um espa�o de mem�ria para guardar x e y
                                             // Por isso est� trabalhando com ponteiro e tudo meio din�mico, ent�o reservei o espa�o para guardar x e y
    if(p!= NULL){  // Se deu certo a alo��o
            p->x = x;// eu atribuo os valores x e y que recebi como paramentro da fun��o
            p->y = y;// aos campos x e y do ponto
        }
        return p;  //Terminei a atribui��o retorno o meu ponto, ou seja quando eu chamar a fun��o pto_cria, eu vou retornar um ponteiro p para o ponto que eu aloquei dinamicamente que est� guardado os valores x e y
}

// Libera a mem�ria alocada para um ponto
void pto_libera(Ponto*p){ // Se eu aloquei com o malloc
    free(p);   // para liberar basta dar um free() do ponteiro p que passei como par�metro
}

// Recupera, por referencia, o valor de um ponto
void pto_acessa(Ponto*p, float* x, float* y){ // Eu tenho minha estrutura x e y dentro do meu ponteiro p e eu quero pegar esses
    *x = p->x;                                // dois valores para os dois ponteiros x e y, lembrando que eu n�o consigo devolver mais de um valor pelo meu retorno ent�o eu tenho que devolver por referencia
    *y = p->y;                                // Peguei o valor de x e coloquei no x e o de y e coloquei em y
}                                             // Quando eu chamar essa fun��o eu vou ter x e y l� nos par�mentros copiando os valores da estrutura e passando por referencia

// Atribui a um ponto as coordenadas "x" e "y"
void pto_atribui(Ponto* p, float x, float y){// Na atribui��o � o contrario da fun��o acima, eu tenho a minha estrutura x e y, peguei os valores passados na fun��o em x e y e atribuo aos campos da estrutura
p->x = x;
p->y = y;
}

// Calcular a distancia entre dois pontos
float pto_distancia(Ponto* p1, Ponto* p2){  // Eu tenho agora dois pontos
    float dx = p1 -> x - p2 -> x; // calculo a diferen�a entre os dois x e os dois y
    float dy = p1 -> y - p2 -> y;
    return sqrt (dx * dx + dy *dy); // retorno a distancia que � a raiz de dx� - dy�
}


//Ent�o essa � minha biblioteca
