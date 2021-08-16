#include <stdio.h>
#include <stdlib.h>
                "Voltando a ideia de array de comrpimento vari�vel temos:" Parecido com o array da �ltima aula
                "Campo de array flex�vel dentro de estruturas"
    - Sempre que declararmos um array, temos que declarar o seu tamanho.
    - O padr�o c99 permite declarar um array sem tamnaho, chamado de "array flex�vel",
    se ele for o "ultimo campo" de uma estrutura.

    "Exemplo"
    struct aluno{
        char nome[40];
        int matricula;
        int notas[];// array flex�vel

    };
    (Se eu declarar uma vari�vel desse tipo que tem um array flex�vel dentro dela esse campo vai ser ignorado)
    - Na declara��o de uma vari�vel dessa estrutura, o "array flex�vel" � ignorado.
    - O tamanho da estrutura ignora a existencia do "array flex�vel"

    "Exemplo"
    //Declarei uma vari�vel aqui steuct
    struct aluno{
        char nome[40];
        int matricula;
        int notas[]; // array flex�vel

    };

    struct aluno p;
    p.matricula = 123; //se eu tentar acessar a matricula tranquilo
    strcpy(p.nome, "Joao");// se quiser copiar alguma coisa para o  nome de boa.
    p.notas[0]= 65;//undefined behavior - se eu quiser acessar uma posi��o 0 do array notas ele vai dar um  comportamento indefinido. pois n�o exite tamanho no array na� exite nenhuma posi��o. esnt�o como est� querendo colocar valor dentro de uma posi��o.

    Ent�o n�o � muito �til pensar em uma vari�vel.

    Mas o que posso fazer com isso?

    - Uma forma de usar o "array flex�vel" � por meio da aloca��o din�mica:
    - Al�m de especificar o n�mero de bytes da parte fixa da estrutura (Campos "matricula" e "nome"), podemos especificar
      o tamanho que o "array flex�vel"(campo notas) ter�.

      Como eu fa�o isso?

    //Defini aqui minha estrutura novamente
      struct aluno{
        char nome[40];
        int matricula;
        int notas[]; // array flex�vel
    };

    struct aluno *p; // criei um ponteiro para essa estrutura
    p = malloc (sizeof(struct aluno)+(sizeof(int)*5)); //eu tenho de fazer o malloc para a parte f�sica da estrutura + (como � um array de notas inteiro) sizeof (int)vezes5 ent�o meu array vai ter o tamanho 5 inteiros

    Ent�o � como se meu "p" equivale a uma estrutura aqui abaixo:
    Ent�o eu tenho uma estrutura onde eu tenho um campo que pode assumuir qualque tamanho dependendo de quanto eu passar no meu malloc
    Isso serve para o caso onde eu preciso usar para cada professor um tamnho de nota diferente, ai eu vou definindo o tamnaho da estrutura notas em tempo de execu��o, conforme eu vou precisando
    mas a estrutura do aluno � a mesma.
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
