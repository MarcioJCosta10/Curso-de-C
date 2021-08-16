#ifndef PONTO_H_INCLUDED
#define PONTO_H_INCLUDED

//Arquivo Ponto.h
typedef struct ponto Ponto; // Criei um apelido para minha struct para facilitar struct ponto passa a ser conhecida como Ponto

/* Criei algumas funções*/

//Cria um novo ponto
Ponto* pto_cria(float x, float y); // Equivale a um fopen() pois quando crio um arquivo ele me devolve um ponteiro para o arquivo

// Libera um ponto
void pto_libera(Ponto* p);  // Equivale a fclose()

//Acessa os valores "x" e "y" de um ponto
void pto_acessa(Ponto* p, float* x, float* y); // Vou retornar a parte x e a parte y por referencia do Ponto

//Atribui valores "x" e "y" a um ponto
void pto_atribui(Ponto* p, float x, float y); // Pegar o valor x e y que está sendo passado para a função e colocar dentro do Ponto

//Calcula a distancia entre dois pontos
float pto_distancia(Ponto* p1, Ponto* p2); // Calcula a distancia entre dois pontos


//Esse é o arquivo ponto h com os prototipos e nome dos ponteiros, agora temos que implementar essas funções dentro do .C









#endif // PONTO_H_INCLUDED
