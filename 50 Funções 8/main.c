#include <stdio.h>
#include <stdlib.h>

    /* PASSANDO UMA STRUCT COMO PARÂMETRO PARA UMA FUNÇÃO

            Quando trabalhamos com estruturas
            podemos passar para a função:
                - um campo
                - toda estrutura
                - "Por valor "
                - "Por Referência"

                */


    struct ponto { // Aqui tenho minha estrutura ponto com dois inteiros
        int x, y;
    };

    void imprime_valor(int n){// Aqui fiz uma função que recebe um parametro inteiro Por valor; O tipo da função precisar ser
                              // do mesmo tipo do campo passado
         printf("Valor = %d\n", n);
    }

  void soma_imprime_valor(int *na){// Declarando uma funçaõ que tenha paramentro passado por referencia que seja do mesmo tipo dos campos da estrutura
        *na = *na + 1; // Seguinda as regras da passagem por referencia sempre que usar o paramento por referencia colocar o "*" antes
        printf("Valor = %d\n",*na);
  }

  void atribui (struct ponto *p){ // Aqui coloquei o "*" na frente do p que significa que vou passar uma struct ponto p por referencia para a função
    (*p).x = 10; // Aqui eu vou midifcar o valor da minha estrutura ( aqui tenho que colocar (*p) dentro de parentese para garantir que quem está sendo passdo por referencia é o p
    (*p).y = 20; // Aqui eu vou midifcar o valor da minha estrutura
  }


  /* Podemos usar ainda o Operador SETA "->" para acessar
      um campo de uma estrutura passada por referência  */
  void atribui (struct ponto *p){
    p -> x = 10; // É uma simplificação da opoeração de atribuição da função acima(*p).x = 10
    p -> y = 20;  // São equivalentes p -> y = 20; = (*p).y = 20; // PREFERIVEL  p -> y = 20;

  }



int main()
{
    // Passando um campo "Por Valor"
        struct ponto p1 = {10,20}; //Aqui tenho a estrutura p1 do tipo ponto
        imprime_valor(p1.x); // Aqui eu passei os paramentos para a função por valor
        imprime_valor(p1.y); // Aqui eu passei os paramentos para a função por valor
        /* Ao acessar uma estrutura passada por referencia
        não podemos esquecer de colocar os parentese antes de acessar
        o seu campo
        (*p).x = 10; // Certo: Colocar entre parentese o (*p) e somente depois acessar o campo
        *p.x = 10; // Errado : O compilado vai pensar que quem foi passado por referecnai foi o x mas quem foi passado foi o p
        *(p.x) = 10; // Errado


        */

    // Passando um camapo "Por Referencia"

    struct ponto p2 = {10,20};
        soma_imprime_valor(&p2.x);// Aqui vou passar o campo coloco o "&" na frente( o campo x da estrutura p2 vou passar o endereço daquele campo)
        soma_imprime_valor(&p2.y); // Aqui vou passar o campo coloco o "&" na frente ( o campo y da estrutura p2 vou passar o endereço daquele campo)


    // Passando uma Struct por Referêcia"
    struct ponto p3;// criei uma struct p3
    atribui(&p3);// vou passar por referencia então coloco um "&" na frente dela, como quero passar toda estrutura coloquei &p3
    printf("x = %d\n",p3.x);// Aqui fora da função continuo trabalhando normalmente com a estrutura
    printf("x = %d\n",p3.y);

    system("pause");
    return 0;
}
