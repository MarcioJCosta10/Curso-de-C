#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 /*

struct pessoa{
    char nom[50], rua[50];
    int idade, numero;
    };

   Uma Estrutura pode agrupar variáveis de tipos diferentes
    struct pessoa p;
    p.idade =31;
    p.numero = 101;

    //Podemos perceber que tanto a rua quanto o numero perntence ao mesmo conjunto de informação guarda informação referente ao endereço:
    //Então seria interessante combiná-lás em uma unica estrutura

    ANINHAMENTO DE ESTRUTURA

     Uma estrutura também é um tipo de dado.
        Logo, uma estrutura pode possuir uma variável do tipo de outra
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

    struct endereço {
        char rua[50];
        int numero;
    };

    struct pessoa{
        char nome[50];
        int idade;
        struct endereço ender;   //variavel do tipo struct
                                 // Tenho uma estrutura dentro de outra estrutura
    } ;



int main()
{
    struct pessoa p; // variavel da estrutura pessoa
    p.idade = 31;
    p.ender.numero = 101;// Aqui eu acesso pimeiro a struc ender
                         // Para acessar cada nivel da minha estrutura eu coloco "." até
                         // Chegar em uma variável do tipo básico;
    //Lendo uma estrutura aninhada do teclado
    gets(p.nome);
    scanf("%d", &p.idade);
    gets(p.ender.rua);//Lendo o campo rua do teclado vou simplemente colocando "." até chegar no tipo básico;
    scanf("%d",&p.ender.numero);

    O SENTIDO DE SE FAZER ISSO É:
        - ORGANIZAR OS DADOS;
        - REUTILIZAÇÃO DE CÓDIGO; Criei aqui nesse código uma estrutura pessoa
                                  mas eu poderia tercriado uma estrutura aluno queue
                                  também utilizaria os campos endereço;



    system("pause");
    return 0;
}
