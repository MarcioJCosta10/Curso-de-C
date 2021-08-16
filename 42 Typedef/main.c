#include <stdio.h>
#include <stdlib.h>
  /*
    // ULTIMO COMANDO DA NOSSA PARTE DE DEFINI��O DE TIPOS PELO PROGRAMADOR
    Comando typedef:
    permite que o programador defina um "apelido" para um tipo existente, podemos renomear uma struct, uma union ou mesmo uma enum
    //FORMA GERAL
    typedef tipo_exixtente novo_nome;
     */

//criar um sin�nimo para int

typedef int inteiro;

//QUANDO VOU UTILIZAR ISSO? PENSANDO NA STRUCT CADASTRO:
struct cadastro {
    char nome [50], rua[50];
    int idade, numero;
    };
typedef struct cadastro cad;


int main()
{
//"int" e "inteiro" s�o omesmo tipo
int x = 10;
inteiro y = 20;
y = x+y;

printf("Soma = %d\n",y);


/*"Struct cadastro" e "cad" s�o do mesmo tipo*/
struct cadastro c1;
struct cad c2;

    // PODEMOS COLOCAR UM APELIDO EM QUALQUER TIPO, MAS PRECISAMOS TOMAR CUDADO COM OS SEGUINTES PONTOS:
    A linguagem C permite voc� fazer uma contru��o com typedef complexa e obscura, observe o exemplo:

        typedef unsigned int positivos[5];
        /*  O comando typedef deve ser usado com cuidados pois ele pode produzir declara��es confusas.
        No caso, "positivos" � um sin�nimo para "array de 5 inteiros positivos"*/
        positivos v ={10,20,30,40,50};// N�o da para saber que o meu vetor � com typedef como nome positivo pois ficou confuso
                                      // temos que tomar cuidado na escolha dos nomes para n�o ficar sem sentido;
        int i;
        for (i=0; i<5; i++)
        printf("v[%d]: %d\n", i, v[i]);




    system("pause");


    return 0;
}
