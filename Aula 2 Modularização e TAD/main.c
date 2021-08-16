#include <stdio.h>
#include <stdlib.h>
#include "Ponto.h" // Incluindo minha biblioteca que acabei de criar

    /*
        A convenção em linguagem C é preparar dois arquivos para implementar uma "TAD"
        Arquivo ".H" : protótipos das funções, tipos de ponteiros, e dados globalmente acessiveis = CONCEITO

        Arquivo ".C" : declaração do tipo de dados e implementação das suas funções = IMPLEMENTAÇÃO

        Desse modo os dados ficam ocultos para o usuário so terá acesso através das funções

        Assim separamos " o conceito"(definição do tipo) de sua "implementação"

int main()
{
    Exemplo de "TAD": um ponto definido por suas coordenadas "x" e "y"

    struct ponto{
        float x;
        float y;
    };
    1º Passo definir o arquivo .H
    - protótipos das funções --> E o prototipo de funçoes que vao manipular esses dados x e y
    - tipos de ponteiros    --> Vou ter que definir o tipo de ponteiro para essa estrutura ponto
    - dados globalmente acessíveis



    return 0;
}

    */
            //TESTANTO MINHA BIBLIOTECA
int main(){
    float d;
    Ponto *p, *q; // Declarei os meus ponteiros igual fariamos com arquivos
    // Ponto r; ERRO // Não podemos mais declarar outra variável para a estrutura, lembrando que Ponto é apenas um typedef(apelido da struct ponto) r é uma estrutura isso é proibido só consigo declarar ponteiros
    p = pto_cria(10,21);// Criei ponto 1 dentro da estrutura x e y terá 10 e 21
    q = pto_cria(7,25); // Criei ponto 2 dentro da estrutura x e y terá 7 e 25
    // q->x = 2; ERRO // Em nenhum momento vou acessar direto somente atraves das funções
    d = pto_distancia(p,q); // Chamei a função que calcula a distancia entre eles que vai me retorar o valor d
    printf("Distancia entre dois pontos: %f\n",d);// mandei imprimir d
    pto_libera(q);
    pto_libera(p);

    system("pause");
return 0;
}
