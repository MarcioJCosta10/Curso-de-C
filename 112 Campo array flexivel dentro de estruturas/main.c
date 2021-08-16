#include <stdio.h>
#include <stdlib.h>
                "Voltando a ideia de array de comrpimento variável temos:" Parecido com o array da última aula
                "Campo de array flexível dentro de estruturas"
    - Sempre que declararmos um array, temos que declarar o seu tamanho.
    - O padrão c99 permite declarar um array sem tamnaho, chamado de "array flexível",
    se ele for o "ultimo campo" de uma estrutura.

    "Exemplo"
    struct aluno{
        char nome[40];
        int matricula;
        int notas[];// array flexível

    };
    (Se eu declarar uma variável desse tipo que tem um array flexível dentro dela esse campo vai ser ignorado)
    - Na declaração de uma variável dessa estrutura, o "array flexível" é ignorado.
    - O tamanho da estrutura ignora a existencia do "array flexível"

    "Exemplo"
    //Declarei uma variável aqui steuct
    struct aluno{
        char nome[40];
        int matricula;
        int notas[]; // array flexível

    };

    struct aluno p;
    p.matricula = 123; //se eu tentar acessar a matricula tranquilo
    strcpy(p.nome, "Joao");// se quiser copiar alguma coisa para o  nome de boa.
    p.notas[0]= 65;//undefined behavior - se eu quiser acessar uma posição 0 do array notas ele vai dar um  comportamento indefinido. pois não exite tamanho no array naõ exite nenhuma posição. esntão como está querendo colocar valor dentro de uma posição.

    Então não é muito útil pensar em uma variável.

    Mas o que posso fazer com isso?

    - Uma forma de usar o "array flexível" é por meio da alocação dinâmica:
    - Além de especificar o número de bytes da parte fixa da estrutura (Campos "matricula" e "nome"), podemos especificar
      o tamanho que o "array flexível"(campo notas) terá.

      Como eu faço isso?

    //Defini aqui minha estrutura novamente
      struct aluno{
        char nome[40];
        int matricula;
        int notas[]; // array flexível
    };

    struct aluno *p; // criei um ponteiro para essa estrutura
    p = malloc (sizeof(struct aluno)+(sizeof(int)*5)); //eu tenho de fazer o malloc para a parte física da estrutura + (como é um array de notas inteiro) sizeof (int)vezes5 então meu array vai ter o tamanho 5 inteiros

    Então é como se meu "p" equivale a uma estrutura aqui abaixo:
    Então eu tenho uma estrutura onde eu tenho um campo que pode assumuir qualque tamanho dependendo de quanto eu passar no meu malloc
    Isso serve para o caso onde eu preciso usar para cada professor um tamnho de nota diferente, ai eu vou definindo o tamnaho da estrutura notas em tempo de execução, conforme eu vou precisando
    mas a estrutura do aluno é a mesma.
    struct aluno{
        char nome[40];
        int matricula;
        int nota [5];
    };













int main()
{
    printf("Hello world!\n");
    return 0;
}
