#include <stdio.h>
#include <stdlib.h>
            "Inicialização designada"
    - É uma nova forma de inicialização trazida para o C99.
    - Permite inicializar posições específicas de uma array ou apenas alguns campos de uma estrutura ou união,
      deixando o resto das posições e dos campos sem inicializadores explicitos ou com o valor padrão que ele inicializa.

      Como assim?
      "Inicializando algumas posições de um array"
      - Suponha um array de 5 posições inteiras
      - A forma geral de inicialização dele é definir uma lista de valores entre chaves.
      "Forma geral"
      int vetor[5]={1,2,3,4,5};

      - Na "inicialização designada" podemos indicar quais posições queremos inicializar
      - Basta, na lista de valores, especificar a posição e o valor a ser inserido
        [indice] = valor

        "Exemplo"
        "Inicialização designada"
        int vetor [5]= {[2]=10, [4]=20};// aqui inicializei somente as posições 2 e 4 as outras posições continuam conforme padrão;

      - Posições não inicializada recebem o valor-padrão do tipo
      -Assim:
          int vetor [5]={[2]=10,[4]=20}; // é muito útil quando quero inicializar no fim do vetor digamos que seria 20 no fim ai teria que inicializar 0,0,0,0,20 para um vetor pequeno não interfere mas para um vetor de 100 posições faz diferença.
        è equivalente a:
          int vetor[5]={0,0,10,0,20};

    "Outra coisda que podemos fazer"
    - Pòdemos também definir um intervalo de posições para ser inicializado com um mesmo valor com o comando
    [indice_inicial ...indice_final] = valor // Tem um espaço entre o valor do indice inicial e o indice de fim se juntar o compilador vai pensar quem é um número decimal

    Assim
    int vet [5] = {[0 ... 1]=10, [2 ... 4]= 20};
    é equivalente a
    int vet [5]= {10,10,20,20,20};

    "POSSO FAZER ISSO COM UMA ESTRUTURA"
- A inicialização de estrutra sempre foi uma tarefa problemática e sujeita a erros
- Imagine a seguinte estrutura e sua inicialização:

struct aluno{  // temos a estrutura
    int mat; // campo matricula
    char nome[50];// campo nome tamanho 50
};
            "Se colocarmos outro campo nessa estrutura essa inicialização estará errada pois os campos não estão em ordem na inicialização."
struct aluno p = {123, "Ricardo"};// Vou fazer a inicilização é a mesma ideia da inicialização de array
                                  //deifine a variável = abre chaves, lista de valores na ordem dos campos, nesse caso
                                  // um campo inteiro e um campo string
O incoveniente dessa inicialização é que: Se fizermos alguma mudançana na estrutura durante o processo de desenvolvimento,
                                          somos obrigados a rever todas as inicializações

- Com a "inicialização designada" podemos especificar o campo que será inicializado e o valor a ser inserido

nome_campo = valor

"Exemplo"

struct aluno{
    int mat;
    char npome[50];
};
struct aluno p = {.mat=123,.nome="Ricardo"};

"VANTAGEM DE FAZER ASSIM" - SE COLOCAR UM NOVO CAMPO NA ESTRUTURA A INICIALIZAÇÃO JÁ FEITA CONTINUA VALENDO
- Dessa forma, mudança na ordem dos campos ou adição de novos campos na minha estrutura não afetam a inicialização.


"POSSO TRABALHAR QUANDO TENHO UM ARRAY DE ESTRUTURAS?"
- Imagine que temos um array de estruturas

struct aluno{
    int mat;
    char nome[50];
};
struct aluno p[5]; // Array de 5 estruturas alunos

- Neste caso, basta combinar as duas formas inicialização:
     [indice].nome_campo = valor // vou na posição x do meu vetor p pego o campo que eu quiser e ponho o valor

"Exemplo"
struct aluno p[5]= {[2].mat=123,[2].nome="Ricardo"}; // nesse caso inicializei apenas a posição 2 e os dois campo dela

"DA PARA FAZER O CONTRÁRIO? DÁ."

- Por fim, podemos inicializar um array detro de uma estrutura
struct aluno{
    int mat;
    char nome[50];
    int notas[3];// quero inicializar esse vetor detro da estrutura
};

struct aluno p[5];

- Neste caso, usamos
    .nome_campo[indice] = valor // só inverti a ordem do exemplo anterior
"Exemplo"

struct aluno p  = {.notas[0]=60}; // vou na estruct p que tem a estrutura aluno e vou no campo nota que é um vetor e coloco na posiçao 0;
            .campo_acessar = valor que vai receber

"ASSIM NÃO FICO DEPENDENDO MAIS DA ORDEM DOS CAMPOS DA MINHA ESTRUTURA"








int main()
{
    printf("Hello world!\n");
    return 0;
}
