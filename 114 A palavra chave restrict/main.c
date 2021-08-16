#include <stdio.h>
#include <stdlib.h>
            "A palavra- chave restrict"
    - Tem como objetivo limitar os efeitos de "aliasing" sobre ponteiros, auxiliando assim as otimiza��es de cahce.
    - "aliasing" � a situa��o em que uma mesma posi��o de mem�ria pode ser acessada usando dois pnteiros diferentes.
    - Neste caso, um ponteiro � um pseud�nimo (ou "ALIAS") do outro

    Suponha a seguinte declara��o
    int * restrict  y;
    - A palavra-chave "restrict"  informa que "y" e mais nenhum outro ponteiro, durante todo o seu tempo de vida,
    ser� o �nico que poder� acessar a posi��o de mem�ria para onde ele aponta .
    - Opera��es aritm�ticas sobre esse ponteiro (por exemplo, y + 1 )continua v�lidas para acessar o local para onde ele aponta

    "Aten��o"
    - "restrict"  pode ser entendida como uma dica sobre o ponteiro que damos para o compilador
    - O compilador � livre para ignorar

    - Considere a seguinte declara��o

    void func(int* p, int *q);
    - Nela o compilador assume que "p" e "q" podem apontar para o mesmo lugar.
    - Ent�o eu tenho que tratar essa situa��o para dizer que p e q n�o necess�riamente s�o lugares distintos, ent�o eu tenho que tratar.-
    - Se eu garantir que p e q apontam para locais distintos eu tenho possibilidade de otimiza�ao de mem�ria, pois n�o tenho que tratar problemas do tipo p e q apontam para o memso lugar-

    -COMO FA�O ISSO coloco restrict-

    Ja na declara��o abaixo, o compilador
    assume que "p" e "q" apontam para locais distintos abrindo caminho para otimiza��o de acesso aos dados.

    void func(int * restrict p , int * restrict q);
Varias fun��es da linguagem c foram adaptadas para trabalhar com restrict ex: strcpy() sabemos que c�pia de strings s�o para strings diferentes ent�o se olharmos na defini��o da fun��� strcpy tem l� restrict
    Cuidado"
    - � tarefa do programador, e n�o do compilador, garantir que os ponteiros n�o apontem para o mesmo local de mem�ria, pois n�o adianta dizer que p e q � restict e apontar p e q para o mesmo lugar, lembra
    estamos dando uma dica para o compilador otimizar o c�digo e ai n�o posso ir l� e apontar para o mesmo lugar os doisp ponteoiros.





int main()
{
    printf("Hello world!\n");
    return 0;
}
