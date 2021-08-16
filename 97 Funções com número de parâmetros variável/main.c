#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


/
    "Funções com numeros de parâmetros variável"
    - Algumas funções, como a função printf(),
      podem ser utilizadas com um, dois, tres ou até mais
      parâmetros:
          "Exemplo"
 int main()
{   int x = 1, y = 2;
    float z = 3;
    printf("Um parâmetro: texto\n");
    printf("Dois parêmetros: texto e %d\n",x);
    printf("Três parâmetros: texto e %d %d",x,y);

    return 0;
}


        "Funções com número de parâmetro variável"
    - Podemos escrever funções que aceitem quantidades
    variável de parâmetros, que podem ser de diversos tipos,
    como é o caso da função printf() e scanf();
    - Para declarar uma função com quantidade variável de parâmetros,
    basta colocar "..." como o ultimo parâmetro na declaração da função

    "Forma Geral"
    tipoRetornoFuncao nomeFuncao (lista de parametros obigatórios,...){
        sequência de declarações e comando
    }
    "Importante"
    - Uma função com quatidade variável de parâmetros
      deve possuir pelo menos um parâmetro "normal"
      ante dos "...", ou seja, antes da parte variável;
    - Isso é necessário porque a função agora não sabe
    quantos parâmetros serão passados para ela nem seus os
    tipos.
    - Portanto, o primeiro parâmetro deve ser usado
    para informar isso dentro da função


    "Exempo"
    - A função printf() como ela sabe quantos parâmetros ela tem? sabe quantos parâmetros ela receberá, e os seus tipos,
    por meio dos tipos de saída presentes dentro do primeiros parâmetro
    - "%c" para char, "%d" para int, etc

    "Para trabalha com funções com varios parâmetros precisamos da biblioteca stdarg.h"
    - A biblioteca "stdarg.h" possui as definições de tipos e macros necessárias
    para acessar a lista de parâmetros da função

    "Tipo e Macros "
     - va_list : É um tipo usado como um parâmetro para as macros definidas na bilbioteca
     "stdarg.h" para recuperar os parâmetros adicionais da função //Criando o parâmetro para recuperar os parametrôs adicionais

     - va_strat(lista, ultimo_parametro) : Macro que inicializa uma variável "lista", do tipo
     "va_list", com as informações necessárias para recuperar os parâmetros adicionais//Inicializando a variável do tipo lista

    - va_arg(lista, tipo_de_dado): Macro que retorna o parâmetros atual contido na variaável "lista",
    do tipo "va_list", sob a forma do tipo informado em "tipo_de_dado". Em seguida, a
        macro move a variável lista para o próximo parâmetro, se existir;
    "Exemplo"
    x = va_arg(lista,float)
    retornará para a variável "x" o valor do parâmetro "atual" em "lista" formatada para o
    tipo float // Acessando os meus parâmetros

    -va_end(lista): Essa Macro deve ser executada antes da finalização d função (ou do comando "return",
    se este existir) Seu objetivo é destruir a variável "lista" do  tipo "va_lista" de modo apropriado

    "Exemplo"
 */
int soma_int (int n, ...){ // Criando a função com o nome soma_int, int n é para informar quantos parametros terá na lista
                           // Essa função vai somar todos os parametros em seguida que eu passei depois do n
    va_list lista;         // Criei a minha variável lista do tipo va_list
    int i, s = 0;
    va_start (lista,n);    // Dei um start na lista , informando através do n quantos parametros terá na lista
    for (i =1; i<=n; i++)
        s = s + va_arg(lista,int); // Fazendo o somatório e atribuindo no s, e estou sempre recuperando da minha lista um valor convertido para inteiro
    va_end(lista);                  // Terminei de percorrer toda lita va_end para destruir a lista
    return s;
}
int main(){
    int soma;
    soma = soma_int(2,4,5); // soma 2 parametros = 4 e 5, o primeiro parâmetros vai sempre dizer quantos parametros vão vir depois
    printf("Soma 2 parametros: %d\n",soma);
    soma = soma_int(3,4,5,6); // soma 3 parametros 4 5 e 6 , o primeiro parâmetros vai sempre dizer quantos parametros vão vir depois
    printf("Soma 3 parametros: %d\n",soma);
    soma = soma_int(4,4,5,6,10); // soma 4 parametros 4,5,6,10 , o primeiro parâmetros vai sempre dizer quantos parametros vão vir depois
    printf("Soma 4 parametros: %d\n",soma);
    system("pause");
    return 0;
}
/

        "Cuidado: Não existe a definição de tipos "
        - Funções com quantidade variável de parâmetros devem ser
        usadas com moderação porque existe potencial muito grande
        para que uma função projetada para trabalhar com um tipo
        seja usada com outro

        "Cuidado: não existe segurança baseada em tipo"
        "(type-safety)"
        - Funções com quantidade variável de parâmetros
        podem expor o programa a uma série de problemas
        de segurança baseada em tipo ("type-safety")
        - Pode-se tentar recuperar mais parâmetros do que foram
        passados, corrompendo assim o funcionamento do programa,
        que poderá apresentar comportamento inesperado

*/


















