#include <stdio.h>
#include <stdlib.h>

                    "Fun��es em linha"
        - O padr�o c99 permite solicitar ao compilador fa�a uma expans�o "em linha " da fun��o.
        O que significa:
        - Neste caso, ao inv�s de gerar o c�digo para chamar a fun��o, o compilador ir� inserir
        o corpo completo da fun��o em cada lugar do c�figo em que a fun��o for chamada .

        Por que fazewr isso?

        - Trata-se de um recurso de otimiza��o
        - Visa melhorar o tempo de uso da mem�ria durante a execu��o do programa
        - Tem a desvantagem de talvez aumentar o tamanho final do programa gerado
        Vamos usar isso quando?
        - � um recurso normalmente utilizado para fun��es que executam com muita frequ�ncia
        N�o serve para todas as fun��es  e n�o � garantido que vai funcionar sempre

        Como fazemos paradeclarar fun��o em linha:
            inline tipo_da_fun��o nome_fun��o(par�metro){
            sequencia de declara��oes e comandos
        }
        (Fun��o em linha funciona mais ou menos da mesma forma do #define onde quando definimos o define e sempre que for usar chamos o definido no define, pois vou pegar
        o c�digo da fun��o e botar onde foi chamado a fun��o. S� que ela tem a vantagem de ter a seguran�a baseado em tipo, pois ela � type-safety
        O que � isso? Quando fazemos uma fun��o macro e defini uma fun��o para um x, esse x n�o � especificado o tipo por mais que tenha definido o tipo inteiro nada impede de termos colocado um x double e talvez o c�digo n�o funcione para double
         COmo uma fun��o em linha tem seguran�a de tipo se tentarmos passar um double ele vai fazer a convers�o de tipos, ent�o ele vai verificar e tratar os tipos de par�mentros
         se est�o bem formatados ou tudo mais. Ent�o � melhor)

        "Aten��o"
        - A ideia de Fun��es "em linha" se parece muito com a ideia de fun��e macro, por�m com a vantagem de possuir
        seguran�a basedada em tipo (type-safety)
        - Chamadas de macro n�o fazem verifica��es de tipo nos par�metros nem verificam se eles
        s�o bem formados, enquanto uma fun��o exige isso

        "S� para termos uma ideia"
        "Fun��o convencional"

        int maior (int x, int y){
            return (x>y)?x:y;

        }
        int c = maior(a,b);

        "Fun��o em linha"

        inline int maior(int x, int y){
            return (x>y)?x:y;

        }

        int c = maior(a,b); // Aqui eu chamei a fun��o maior
        int c = a>b?a:b; // Na hora que eu compilar a fun��o ele vai fazer isso aqui, ent�o ele vai pegar o corpo da fun��o e substituir da mesma forma que uma fun��o macro faria mas fazendo os ajustes necess�rios
                         // Ent�o o compilador vai tentar pegar o corpo da fun��o e fazer os ajustes necess�rios   , ent�o beleza n�o tem mais a chamada da fun��o pois � o c�digo direto
                         // Ent�o fun��es simples que s�o frequentemente chamadas vale a pena fazermos isso



        "Restri��es e limita��es "
        - N�o existe garantia de que o compilador (vai conseguir fazer )conseguir� expandir uma fun��o inline recursiva. (fun��o recursiva funciona um pouco diferente) pode ser que o compilador n�o consiga desmembrar ela para colocar o c�digo
        - N�o � adequada em fun��es com n�mero de par�metros vari�vel - O que � isso ? pense no scanf() e printf(). Podemos passar quantos parametros quisermos, fun��o inline n�o � adequada para isso
        - N�o � adequada com array de comprimento vari�vel
        - Deve-se evitar o uso do goto - Vamos iserir o codigo em um lugar- Pode ser que o goto mande para um lugar onde n�o queriamos
        - Deve-se o uso de fun��es aninhadas - somente em fun��es simples

        "� UM RECURSO MUITO �TIL PARA MEHORAR O DESEMPENHO MAS TEM CERTAS RESTRI��ES"

int main()
{
    printf("Hello world!\n");
    return 0;
}
