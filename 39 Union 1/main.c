#include <stdio.h>
#include <stdlib.h>
/*
    UNION

    // CONTINUANDO NOSSAS AULAS DE TIPOS DE ESTRUTURAS DEFINIDAS PELO PROGRAMADOR
    A linguagem C nos permite també criar nossos próprios tipos de variáveis.
    Além da struct, podemos criar uma union també chamada de UNIÃO

    //FORMA GERAL
    union nome_union{
        tipo1 nome1;
        tipo2 nome2;
        ...
        tipoN nomeN;
        };
    */

    union tipoU{
        short int x;// 16 bits
        unsigned char c;// 8 bits
                        // Porém ao inves de alocar 24 bits a União vai alocar apenas 16 pois é um tipo de estrutura de
                        // memória compartilhada, ela vai ver qual dos campos é maior e vai reservar a memória do maior
                        // quem for menor vai esta guardada dentro da memória do maior
                        // 16 bits é igual 2 partes de 8, os 16 bits é o meu x e 8 bits é o meu c
                        // Então como a linguagem é compartilhada não posso acessar os dois campos ao mesmo tempo

        };

    struct tipoS{     // Uma estrutura vai alocar memória para todos elementos que eu tiver dentro dela
        short int x;    // 16 bits
        unsigned char c;//  8 bits
    };

int main()
       {
           //Declaração de uma variável union
           union tipo u; // mesma regra da struct
           /* Cada campo (variável) da union pode ser acessada usando o operador de "." ponto */
           u.x = 5;
           u.c = 'a';

        /*STRUCT VS UNION*/
        struct tipoS v;
        v.x = 5;
        v.c = 'a'; // 97
        //Ao executar esse comando vai:
        printf("x = %d\n", v.x);//imprimir 5
        printf("c = %c\n",v.c); //imprimir 'a'

        // já na União

        union tipoU v;
        v.x = 5;
        v.c = 'a';//97
        printf("x = %d\n", v.x);
        printf("c = %c\n",v.c);// quando foi impresso o valor de c ele subescreveu o valor 5 de x;

        QUANDO DEVO USAR A UNION? Quando meu programa tem muitas variáveis mas elas não são utilizadas ao mesmo tempo.



    system("pause");
    return 0;
}
