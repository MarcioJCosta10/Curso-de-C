#include <stdio.h>
#include <stdlib.h
                "Diretiva de Compila��o"
                Para que serve:
            - S�o instru��es que servem para fazer altera��es
              no c�digo-fonte antes de envi�-lo para o compilador

              "Diretiva #define"
            - Essa diretiva informa ao compilador que ele deve
            procurar todas as ocorr�ncias de determinada express�o
            e substitu�-la por outra quando o programa for compilado
            Basicamente � procure alguma coisa e substitua por outra

            "Diretiva #define" possui tres formas de utilizar
            - Permite tr�s sintaxes

            - Sintaxe 1:
            #define nome
            -Define um nome que poder� ser testado com os comandos
            de inclus�o condicional
            Simplismente definindo uma palavra chave que poder� ser testada dentro do meu programa

"Exemplo"
        #define valor

int main()
{
    #ifdef valor // se ess nome valor existe e foi definido no meu programa compila o comando Valor definido
        printf("Valor definido \n") ;
    #else // Se n�o ser� esse outro comando
          // Consigo mudar a vers�o do meu programa mudando apenas uma palavra
        printf("Valor n�o definido \n");
    #endif

    system("pause");

    return 0;
}
    - Sintaxe 2:
        #define nomeContante valorConstante
    - Informa ao compilador que ele deve procurar todas as ocorr�ncias de "nomeConstante"  e
      substitu�-la por "valorConstante" quando o programa for compilado, ent�o procura um valor e
      substitui por outro

      "Exemplo"

      #define PI 3.1415
int main (){
    printf("Valor de PI = %f\n", PI) // Ent�o quando for compilaro o programa ele procurar o valor PI ao encontrar ir�
                                     // substituir por 3.1415
    system("pause");
    return 0;
}


     - Sintaxe 3:
    #define nomeMacro(par�metro) express�o // Ent�o sempre que eu usar esse nome de macro ser� substituida por essa express�o
                                           // Realmente substitui no c�digo e n�o ir� criar uma fun��o
                                           //Toda vez que eu usar esse nome macro ele substitui por esse conjunto de comandos aqui
    -Define uma fun��o macro
    - Uma macro � um peda�o de c�digo ao qual foi atribuido um nome, n�o � exatamente uma fun��o mas fuinciona como uma

"Exemplo"
#define maior(x , y) x>y?a:b

int main(){
    int a = 5;
    int b = 8;
    int c = maior(a,b);// Ent�o sempre que encontrar maior(a,b) ele vai substituir por a>b?a:b
                       // a equilave ao x e b equivale ao y
                       // ele vai l� faz a adapta��o pega a express�o e substitui no lugar do maior
                       // ent�o voc� n�o ter� mais uma chamada de fun��o aqui
                       // voc� ter� realmente a expressoa que foi definida no lugar da chamada da fun��o, isso � mais r�pido
    printf("Maior valor = %d\n",c);

    system("pause");
    return 0;

}

    "Cuidado"
    -� aconselh�vel sempre colocar, na sequ�ncia de substitui��o, os par�metros
    da macro entre par�nteses. Isso serve para preservar a "preced�ncia dos operadores"

    "Exemplo"
#define prod1(x,y) x*y;
#define prod2(x,y)(x)*(y);

int a = 1 , b = 2;
int c = prod1(a+2,b);//a +2 * b
int d = prod2(a+2,b);//(a+2)*(b)

"Cuidado"
- Quero criar uma macro um pouco mais complicada, pois quero colocar multiplos comando dentro dela ent�o uso "chaves";
- Dependendo da Macro criada,  pode ser necess�rio colocar a express�o entre "chaves " {}
- Um exemplo dessa situa��o � quando precisamos criar uma
  vari�vel auxiliar dentro de uma fun��o macro. Vari�veis est�o sujeitas a escopo
  e como se trata de uma regra de substitui��o determinada vari�vel j� pode existir.
  Ent�o eu crio um escopo com as "chaves {}", por mais que a vai�vel exista eu crio uma outra local que s� exixte
  dentro daquele escopo ai n�o tem problema.
  Nesse caso, as chaves permitem criar um novo escopo local para essa vari�vel

  "Exemplo"
  #define TROCA(a,b,c){c t=a; a=b; b=t;} // Mas o que � esse c espa�o? Vamos ver quando chamo a fun��o

  TROCA(x,y, int); // aqui no int estou passando um tipo para ser substituido
                   // Ent�o esse comando vai colocar o int no lugar do c
                   // Ent�o t que recebe a ser� do tipo int, seu eu quiser que t seja do tipo float era so passar o tipo float na
                   // c



"Quebra de linha"
- Podemos escrever uma fun��o macro usando mais de uma linha usando mais de uma linha.
Para tanto, basta adicionar a barra (\) ao final de cada linha da macro

"Exemplo"
"Sem quebra de linha"
#define TROCA(a,b,c)(c t=a, a=b, b=t;)

"Com quebra de linha"
#define TROCA (a,b,c){c t=a; \
a=b; \
b=t;}

"Diretiva #undef"
- Essa Diretiva � utilizada sempre que desejamos apagar a defini��o de uma macro que existe
da tabela interna que as guarda. Em outras palavras, ela removea defini��o de uma macro para que
ela possa ser redefinida.
As defini��es de #undef para a valer da declara��o em diante

"Forma geral"
#undef nome_da_macro

"Exemplo"

#define valor 10
int main(){
    print("Valor = %d\n",valor);

    #undef valor
    #define valor 20
    printf("Novo valor = %d \n", valor );
    system("pause");
    return 0;
    }








