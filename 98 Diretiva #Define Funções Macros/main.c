#include <stdio.h>
#include <stdlib.h
                "Diretiva de Compilação"
                Para que serve:
            - São instruções que servem para fazer alterações
              no código-fonte antes de enviá-lo para o compilador

              "Diretiva #define"
            - Essa diretiva informa ao compilador que ele deve
            procurar todas as ocorrências de determinada expressão
            e substituí-la por outra quando o programa for compilado
            Basicamente é procure alguma coisa e substitua por outra

            "Diretiva #define" possui tres formas de utilizar
            - Permite três sintaxes

            - Sintaxe 1:
            #define nome
            -Define um nome que poderá ser testado com os comandos
            de inclusão condicional
            Simplismente definindo uma palavra chave que poderá ser testada dentro do meu programa

"Exemplo"
        #define valor

int main()
{
    #ifdef valor // se ess nome valor existe e foi definido no meu programa compila o comando Valor definido
        printf("Valor definido \n") ;
    #else // Se não será esse outro comando
          // Consigo mudar a versão do meu programa mudando apenas uma palavra
        printf("Valor não definido \n");
    #endif

    system("pause");

    return 0;
}
    - Sintaxe 2:
        #define nomeContante valorConstante
    - Informa ao compilador que ele deve procurar todas as ocorrências de "nomeConstante"  e
      substituí-la por "valorConstante" quando o programa for compilado, então procura um valor e
      substitui por outro

      "Exemplo"

      #define PI 3.1415
int main (){
    printf("Valor de PI = %f\n", PI) // Então quando for compilaro o programa ele procurar o valor PI ao encontrar irá
                                     // substituir por 3.1415
    system("pause");
    return 0;
}


     - Sintaxe 3:
    #define nomeMacro(parâmetro) expressão // Então sempre que eu usar esse nome de macro será substituida por essa expressão
                                           // Realmente substitui no código e não irá criar uma função
                                           //Toda vez que eu usar esse nome macro ele substitui por esse conjunto de comandos aqui
    -Define uma função macro
    - Uma macro é um pedaço de código ao qual foi atribuido um nome, não é exatamente uma função mas fuinciona como uma

"Exemplo"
#define maior(x , y) x>y?a:b

int main(){
    int a = 5;
    int b = 8;
    int c = maior(a,b);// Então sempre que encontrar maior(a,b) ele vai substituir por a>b?a:b
                       // a equilave ao x e b equivale ao y
                       // ele vai lá faz a adaptação pega a expressão e substitui no lugar do maior
                       // então vocÊ não terá mais uma chamada de função aqui
                       // vocÊ terá realmente a expressoa que foi definida no lugar da chamada da função, isso é mais rápido
    printf("Maior valor = %d\n",c);

    system("pause");
    return 0;

}

    "Cuidado"
    -É aconselhável sempre colocar, na sequência de substituição, os parâmetros
    da macro entre parênteses. Isso serve para preservar a "precedência dos operadores"

    "Exemplo"
#define prod1(x,y) x*y;
#define prod2(x,y)(x)*(y);

int a = 1 , b = 2;
int c = prod1(a+2,b);//a +2 * b
int d = prod2(a+2,b);//(a+2)*(b)

"Cuidado"
- Quero criar uma macro um pouco mais complicada, pois quero colocar multiplos comando dentro dela então uso "chaves";
- Dependendo da Macro criada,  pode ser necessário colocar a expressão entre "chaves " {}
- Um exemplo dessa situação é quando precisamos criar uma
  variável auxiliar dentro de uma função macro. Variáveis estão sujeitas a escopo
  e como se trata de uma regra de substituição determinada variável já pode existir.
  Então eu crio um escopo com as "chaves {}", por mais que a vaiável exista eu crio uma outra local que só exixte
  dentro daquele escopo ai não tem problema.
  Nesse caso, as chaves permitem criar um novo escopo local para essa variável

  "Exemplo"
  #define TROCA(a,b,c){c t=a; a=b; b=t;} // Mas o que é esse c espaço? Vamos ver quando chamo a função

  TROCA(x,y, int); // aqui no int estou passando um tipo para ser substituido
                   // Então esse comando vai colocar o int no lugar do c
                   // Então t que recebe a será do tipo int, seu eu quiser que t seja do tipo float era so passar o tipo float na
                   // c



"Quebra de linha"
- Podemos escrever uma função macro usando mais de uma linha usando mais de uma linha.
Para tanto, basta adicionar a barra (\) ao final de cada linha da macro

"Exemplo"
"Sem quebra de linha"
#define TROCA(a,b,c)(c t=a, a=b, b=t;)

"Com quebra de linha"
#define TROCA (a,b,c){c t=a; \
a=b; \
b=t;}

"Diretiva #undef"
- Essa Diretiva é utilizada sempre que desejamos apagar a definição de uma macro que existe
da tabela interna que as guarda. Em outras palavras, ela removea definição de uma macro para que
ela possa ser redefinida.
As definições de #undef para a valer da declaração em diante

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








