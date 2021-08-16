#include <stdio.h>
#include <stdlib.h>
            "Inicializa��o designada"
    - � uma nova forma de inicializa��o trazida para o C99.
    - Permite inicializar posi��es espec�ficas de uma array ou apenas alguns campos de uma estrutura ou uni�o,
      deixando o resto das posi��es e dos campos sem inicializadores explicitos ou com o valor padr�o que ele inicializa.

      Como assim?
      "Inicializando algumas posi��es de um array"
      - Suponha um array de 5 posi��es inteiras
      - A forma geral de inicializa��o dele � definir uma lista de valores entre chaves.
      "Forma geral"
      int vetor[5]={1,2,3,4,5};

      - Na "inicializa��o designada" podemos indicar quais posi��es queremos inicializar
      - Basta, na lista de valores, especificar a posi��o e o valor a ser inserido
        [indice] = valor

        "Exemplo"
        "Inicializa��o designada"
        int vetor [5]= {[2]=10, [4]=20};// aqui inicializei somente as posi��es 2 e 4 as outras posi��es continuam conforme padr�o;

      - Posi��es n�o inicializada recebem o valor-padr�o do tipo
      -Assim:
          int vetor [5]={[2]=10,[4]=20}; // � muito �til quando quero inicializar no fim do vetor digamos que seria 20 no fim ai teria que inicializar 0,0,0,0,20 para um vetor pequeno n�o interfere mas para um vetor de 100 posi��es faz diferen�a.
        � equivalente a:
          int vetor[5]={0,0,10,0,20};

    "Outra coisda que podemos fazer"
    - P�demos tamb�m definir um intervalo de posi��es para ser inicializado com um mesmo valor com o comando
    [indice_inicial ...indice_final] = valor // Tem um espa�o entre o valor do indice inicial e o indice de fim se juntar o compilador vai pensar quem � um n�mero decimal

    Assim
    int vet [5] = {[0 ... 1]=10, [2 ... 4]= 20};
    � equivalente a
    int vet [5]= {10,10,20,20,20};

    "POSSO FAZER ISSO COM UMA ESTRUTURA"
- A inicializa��o de estrutra sempre foi uma tarefa problem�tica e sujeita a erros
- Imagine a seguinte estrutura e sua inicializa��o:

struct aluno{  // temos a estrutura
    int mat; // campo matricula
    char nome[50];// campo nome tamanho 50
};
            "Se colocarmos outro campo nessa estrutura essa inicializa��o estar� errada pois os campos n�o est�o em ordem na inicializa��o."
struct aluno p = {123, "Ricardo"};// Vou fazer a iniciliza��o � a mesma ideia da inicializa��o de array
                                  //deifine a vari�vel = abre chaves, lista de valores na ordem dos campos, nesse caso
                                  // um campo inteiro e um campo string
O incoveniente dessa inicializa��o � que: Se fizermos alguma mudan�ana na estrutura durante o processo de desenvolvimento,
                                          somos obrigados a rever todas as inicializa��es

- Com a "inicializa��o designada" podemos especificar o campo que ser� inicializado e o valor a ser inserido

nome_campo = valor

"Exemplo"

struct aluno{
    int mat;
    char npome[50];
};
struct aluno p = {.mat=123,.nome="Ricardo"};

"VANTAGEM DE FAZER ASSIM" - SE COLOCAR UM NOVO CAMPO NA ESTRUTURA A INICIALIZA��O J� FEITA CONTINUA VALENDO
- Dessa forma, mudan�a na ordem dos campos ou adi��o de novos campos na minha estrutura n�o afetam a inicializa��o.


"POSSO TRABALHAR QUANDO TENHO UM ARRAY DE ESTRUTURAS?"
- Imagine que temos um array de estruturas

struct aluno{
    int mat;
    char nome[50];
};
struct aluno p[5]; // Array de 5 estruturas alunos

- Neste caso, basta combinar as duas formas inicializa��o:
     [indice].nome_campo = valor // vou na posi��o x do meu vetor p pego o campo que eu quiser e ponho o valor

"Exemplo"
struct aluno p[5]= {[2].mat=123,[2].nome="Ricardo"}; // nesse caso inicializei apenas a posi��o 2 e os dois campo dela

"DA PARA FAZER O CONTR�RIO? D�."

- Por fim, podemos inicializar um array detro de uma estrutura
struct aluno{
    int mat;
    char nome[50];
    int notas[3];// quero inicializar esse vetor detro da estrutura
};

struct aluno p[5];

- Neste caso, usamos
    .nome_campo[indice] = valor // s� inverti a ordem do exemplo anterior
"Exemplo"

struct aluno p  = {.notas[0]=60}; // vou na estruct p que tem a estrutura aluno e vou no campo nota que � um vetor e coloco na posi�ao 0;
            .campo_acessar = valor que vai receber

"ASSIM N�O FICO DEPENDENDO MAIS DA ORDEM DOS CAMPOS DA MINHA ESTRUTURA"








int main()
{
    printf("Hello world!\n");
    return 0;
}
