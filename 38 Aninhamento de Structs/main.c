#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 /*

struct pessoa{
    char nom[50], rua[50];
    int idade, numero;
    };

   Uma Estrutura pode agrupar vari�veis de tipos diferentes
    struct pessoa p;
    p.idade =31;
    p.numero = 101;

    //Podemos perceber que tanto a rua quanto o numero perntence ao mesmo conjunto de informa��o guarda informa��o referente ao endere�o:
    //Ent�o seria interessante combin�-l�s em uma unica estrutura

    ANINHAMENTO DE ESTRUTURA

     Uma estrutura tamb�m � um tipo de dado.
        Logo, uma estrutura pode possuir uma vari�vel do tipo de outra
        estrutura previamente definida.
        A isso chamamos de ESTRUTURAS ANINHADAS

      // FORMA GERAL
      struct nome_struct1{
        ...
      };
      struct nome_struct2{
        ...
        struct nome_struct1 nome; // Essa estrutura de do tipo declarado acima
                                  // Assim eu tenho uma strutura dentro de outra estrutura

      };
    */


       //APLICANDO ESSA CONCEITO

    struct endere�o {
        char rua[50];
        int numero;
    };

    struct pessoa{
        char nome[50];
        int idade;
        struct endere�o ender;   //variavel do tipo struct
                                 // Tenho uma estrutura dentro de outra estrutura
    } ;



int main()
{
    struct pessoa p; // variavel da estrutura pessoa
    p.idade = 31;
    p.ender.numero = 101;// Aqui eu acesso pimeiro a struc ender
                         // Para acessar cada nivel da minha estrutura eu coloco "." at�
                         // Chegar em uma vari�vel do tipo b�sico;
    //Lendo uma estrutura aninhada do teclado
    gets(p.nome);
    scanf("%d", &p.idade);
    gets(p.ender.rua);//Lendo o campo rua do teclado vou simplemente colocando "." at� chegar no tipo b�sico;
    scanf("%d",&p.ender.numero);

    O SENTIDO DE SE FAZER ISSO �:
        - ORGANIZAR OS DADOS;
        - REUTILIZA��O DE C�DIGO; Criei aqui nesse c�digo uma estrutura pessoa
                                  mas eu poderia tercriado uma estrutura aluno queue
                                  tamb�m utilizaria os campos endere�o;



    system("pause");
    return 0;
}
