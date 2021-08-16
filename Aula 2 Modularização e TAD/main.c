#include <stdio.h>
#include <stdlib.h>
#include "Ponto.h" // Incluindo minha biblioteca que acabei de criar

    /*
        A conven��o em linguagem C � preparar dois arquivos para implementar uma "TAD"
        Arquivo ".H" : prot�tipos das fun��es, tipos de ponteiros, e dados globalmente acessiveis = CONCEITO

        Arquivo ".C" : declara��o do tipo de dados e implementa��o das suas fun��es = IMPLEMENTA��O

        Desse modo os dados ficam ocultos para o usu�rio so ter� acesso atrav�s das fun��es

        Assim separamos " o conceito"(defini��o do tipo) de sua "implementa��o"

int main()
{
    Exemplo de "TAD": um ponto definido por suas coordenadas "x" e "y"

    struct ponto{
        float x;
        float y;
    };
    1� Passo definir o arquivo .H
    - prot�tipos das fun��es --> E o prototipo de fun�oes que vao manipular esses dados x e y
    - tipos de ponteiros    --> Vou ter que definir o tipo de ponteiro para essa estrutura ponto
    - dados globalmente acess�veis



    return 0;
}

    */
            //TESTANTO MINHA BIBLIOTECA
int main(){
    float d;
    Ponto *p, *q; // Declarei os meus ponteiros igual fariamos com arquivos
    // Ponto r; ERRO // N�o podemos mais declarar outra vari�vel para a estrutura, lembrando que Ponto � apenas um typedef(apelido da struct ponto) r � uma estrutura isso � proibido s� consigo declarar ponteiros
    p = pto_cria(10,21);// Criei ponto 1 dentro da estrutura x e y ter� 10 e 21
    q = pto_cria(7,25); // Criei ponto 2 dentro da estrutura x e y ter� 7 e 25
    // q->x = 2; ERRO // Em nenhum momento vou acessar direto somente atraves das fun��es
    d = pto_distancia(p,q); // Chamei a fun��o que calcula a distancia entre eles que vai me retorar o valor d
    printf("Distancia entre dois pontos: %f\n",d);// mandei imprimir d
    pto_libera(q);
    pto_libera(p);

    system("pause");
return 0;
}
