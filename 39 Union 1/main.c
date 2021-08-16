#include <stdio.h>
#include <stdlib.h>
/*
    UNION

    // CONTINUANDO NOSSAS AULAS DE TIPOS DE ESTRUTURAS DEFINIDAS PELO PROGRAMADOR
    A linguagem C nos permite tamb� criar nossos pr�prios tipos de vari�veis.
    Al�m da struct, podemos criar uma union tamb� chamada de UNI�O

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
                        // Por�m ao inves de alocar 24 bits a Uni�o vai alocar apenas 16 pois � um tipo de estrutura de
                        // mem�ria compartilhada, ela vai ver qual dos campos � maior e vai reservar a mem�ria do maior
                        // quem for menor vai esta guardada dentro da mem�ria do maior
                        // 16 bits � igual 2 partes de 8, os 16 bits � o meu x e 8 bits � o meu c
                        // Ent�o como a linguagem � compartilhada n�o posso acessar os dois campos ao mesmo tempo

        };

    struct tipoS{     // Uma estrutura vai alocar mem�ria para todos elementos que eu tiver dentro dela
        short int x;    // 16 bits
        unsigned char c;//  8 bits
    };

int main()
       {
           //Declara��o de uma vari�vel union
           union tipo u; // mesma regra da struct
           /* Cada campo (vari�vel) da union pode ser acessada usando o operador de "." ponto */
           u.x = 5;
           u.c = 'a';

        /*STRUCT VS UNION*/
        struct tipoS v;
        v.x = 5;
        v.c = 'a'; // 97
        //Ao executar esse comando vai:
        printf("x = %d\n", v.x);//imprimir 5
        printf("c = %c\n",v.c); //imprimir 'a'

        // j� na Uni�o

        union tipoU v;
        v.x = 5;
        v.c = 'a';//97
        printf("x = %d\n", v.x);
        printf("c = %c\n",v.c);// quando foi impresso o valor de c ele subescreveu o valor 5 de x;

        QUANDO DEVO USAR A UNION? Quando meu programa tem muitas vari�veis mas elas n�o s�o utilizadas ao mesmo tempo.



    system("pause");
    return 0;
}
