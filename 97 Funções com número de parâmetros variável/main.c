#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


/
    "Fun��es com numeros de par�metros vari�vel"
    - Algumas fun��es, como a fun��o printf(),
      podem ser utilizadas com um, dois, tres ou at� mais
      par�metros:
          "Exemplo"
 int main()
{   int x = 1, y = 2;
    float z = 3;
    printf("Um par�metro: texto\n");
    printf("Dois par�metros: texto e %d\n",x);
    printf("Tr�s par�metros: texto e %d %d",x,y);

    return 0;
}


        "Fun��es com n�mero de par�metro vari�vel"
    - Podemos escrever fun��es que aceitem quantidades
    vari�vel de par�metros, que podem ser de diversos tipos,
    como � o caso da fun��o printf() e scanf();
    - Para declarar uma fun��o com quantidade vari�vel de par�metros,
    basta colocar "..." como o ultimo par�metro na declara��o da fun��o

    "Forma Geral"
    tipoRetornoFuncao nomeFuncao (lista de parametros obigat�rios,...){
        sequ�ncia de declara��es e comando
    }
    "Importante"
    - Uma fun��o com quatidade vari�vel de par�metros
      deve possuir pelo menos um par�metro "normal"
      ante dos "...", ou seja, antes da parte vari�vel;
    - Isso � necess�rio porque a fun��o agora n�o sabe
    quantos par�metros ser�o passados para ela nem seus os
    tipos.
    - Portanto, o primeiro par�metro deve ser usado
    para informar isso dentro da fun��o


    "Exempo"
    - A fun��o printf() como ela sabe quantos par�metros ela tem? sabe quantos par�metros ela receber�, e os seus tipos,
    por meio dos tipos de sa�da presentes dentro do primeiros par�metro
    - "%c" para char, "%d" para int, etc

    "Para trabalha com fun��es com varios par�metros precisamos da biblioteca stdarg.h"
    - A biblioteca "stdarg.h" possui as defini��es de tipos e macros necess�rias
    para acessar a lista de par�metros da fun��o

    "Tipo e Macros "
     - va_list : � um tipo usado como um par�metro para as macros definidas na bilbioteca
     "stdarg.h" para recuperar os par�metros adicionais da fun��o //Criando o par�metro para recuperar os parametr�s adicionais

     - va_strat(lista, ultimo_parametro) : Macro que inicializa uma vari�vel "lista", do tipo
     "va_list", com as informa��es necess�rias para recuperar os par�metros adicionais//Inicializando a vari�vel do tipo lista

    - va_arg(lista, tipo_de_dado): Macro que retorna o par�metros atual contido na varia�vel "lista",
    do tipo "va_list", sob a forma do tipo informado em "tipo_de_dado". Em seguida, a
        macro move a vari�vel lista para o pr�ximo par�metro, se existir;
    "Exemplo"
    x = va_arg(lista,float)
    retornar� para a vari�vel "x" o valor do par�metro "atual" em "lista" formatada para o
    tipo float // Acessando os meus par�metros

    -va_end(lista): Essa Macro deve ser executada antes da finaliza��o d fun��o (ou do comando "return",
    se este existir) Seu objetivo � destruir a vari�vel "lista" do  tipo "va_lista" de modo apropriado

    "Exemplo"
 */
int soma_int (int n, ...){ // Criando a fun��o com o nome soma_int, int n � para informar quantos parametros ter� na lista
                           // Essa fun��o vai somar todos os parametros em seguida que eu passei depois do n
    va_list lista;         // Criei a minha vari�vel lista do tipo va_list
    int i, s = 0;
    va_start (lista,n);    // Dei um start na lista , informando atrav�s do n quantos parametros ter� na lista
    for (i =1; i<=n; i++)
        s = s + va_arg(lista,int); // Fazendo o somat�rio e atribuindo no s, e estou sempre recuperando da minha lista um valor convertido para inteiro
    va_end(lista);                  // Terminei de percorrer toda lita va_end para destruir a lista
    return s;
}
int main(){
    int soma;
    soma = soma_int(2,4,5); // soma 2 parametros = 4 e 5, o primeiro par�metros vai sempre dizer quantos parametros v�o vir depois
    printf("Soma 2 parametros: %d\n",soma);
    soma = soma_int(3,4,5,6); // soma 3 parametros 4 5 e 6 , o primeiro par�metros vai sempre dizer quantos parametros v�o vir depois
    printf("Soma 3 parametros: %d\n",soma);
    soma = soma_int(4,4,5,6,10); // soma 4 parametros 4,5,6,10 , o primeiro par�metros vai sempre dizer quantos parametros v�o vir depois
    printf("Soma 4 parametros: %d\n",soma);
    system("pause");
    return 0;
}
/

        "Cuidado: N�o existe a defini��o de tipos "
        - Fun��es com quantidade vari�vel de par�metros devem ser
        usadas com modera��o porque existe potencial muito grande
        para que uma fun��o projetada para trabalhar com um tipo
        seja usada com outro

        "Cuidado: n�o existe seguran�a baseada em tipo"
        "(type-safety)"
        - Fun��es com quantidade vari�vel de par�metros
        podem expor o programa a uma s�rie de problemas
        de seguran�a baseada em tipo ("type-safety")
        - Pode-se tentar recuperar mais par�metros do que foram
        passados, corrompendo assim o funcionamento do programa,
        que poder� apresentar comportamento inesperado

*/


















