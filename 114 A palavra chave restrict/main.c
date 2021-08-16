#include <stdio.h>
#include <stdlib.h>
            "A palavra- chave restrict"
    - Tem como objetivo limitar os efeitos de "aliasing" sobre ponteiros, auxiliando assim as otimizações de cahce.
    - "aliasing" é a situação em que uma mesma posição de memória pode ser acessada usando dois pnteiros diferentes.
    - Neste caso, um ponteiro é um pseudônimo (ou "ALIAS") do outro

    Suponha a seguinte declaração
    int * restrict  y;
    - A palavra-chave "restrict"  informa que "y" e mais nenhum outro ponteiro, durante todo o seu tempo de vida,
    será o único que poderá acessar a posição de memória para onde ele aponta .
    - Operações aritméticas sobre esse ponteiro (por exemplo, y + 1 )continua válidas para acessar o local para onde ele aponta

    "Atenção"
    - "restrict"  pode ser entendida como uma dica sobre o ponteiro que damos para o compilador
    - O compilador é livre para ignorar

    - Considere a seguinte declaração

    void func(int* p, int *q);
    - Nela o compilador assume que "p" e "q" podem apontar para o mesmo lugar.
    - Então eu tenho que tratar essa situação para dizer que p e q não necessáriamente são lugares distintos, então eu tenho que tratar.-
    - Se eu garantir que p e q apontam para locais distintos eu tenho possibilidade de otimizaçao de memória, pois não tenho que tratar problemas do tipo p e q apontam para o memso lugar-

    -COMO FAÇO ISSO coloco restrict-

    Ja na declaração abaixo, o compilador
    assume que "p" e "q" apontam para locais distintos abrindo caminho para otimização de acesso aos dados.

    void func(int * restrict p , int * restrict q);
Varias funções da linguagem c foram adaptadas para trabalhar com restrict ex: strcpy() sabemos que cópia de strings são para strings diferentes então se olharmos na definição da funçãõ strcpy tem lá restrict
    Cuidado"
    - É tarefa do programador, e não do compilador, garantir que os ponteiros não apontem para o mesmo local de memória, pois não adianta dizer que p e q é restict e apontar p e q para o mesmo lugar, lembra
    estamos dando uma dica para o compilador otimizar o código e ai não posso ir lá e apontar para o mesmo lugar os doisp ponteoiros.





int main()
{
    printf("Hello world!\n");
    return 0;
}
