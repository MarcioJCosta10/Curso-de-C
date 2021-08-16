            "LITERAIS COMPOSTOS"
            "Funcionamento"

        - Parecido com o modelador de tipos dos dados (cast), seguidos pelos dados da inicialização entre chaves{}
        "Como funciona?"
        - Uma variável declarada e inicializada como: //Exemplo array de estrutura
            tipo_variavel nome_variável = {dados};

            Uma variávrel desse tipo:
        Terá como composição literal :
            (tipo_da_variavel){dados}; // tipo da variável entre parenteses e os dados entre chaves

        "Como funciona"
        "Exemplo"

#include <stdio.h>
#include <stdlib.h>
    "Imagina que tenho aqui uma estrutua com os campos int matricula e char nome"

struct aluno {
    int mat;
    char nome[50];
};
int main()
{
    struct aluno p; // Criei aqui um p mas não inicializado, e se eu quiser colocar um dado em p posso fazer como se fosse um cast
    //p recebe os dados especificados
    p = (struct aluno){123,"Ricardo"}; // p vai receber uma struct aluno e o que está entre chaves vai ser a lista de dados meio que formatado para esse formato struct aluno

    "POSSO FAZER COM PONTEIROS?"
    int* v; // Meu ponteiro v vair receber o que? Vai receber meu vetor de inteiros e uma lista de valores
    //v recebe o endereço do array
    v = (int[3]){11,22,33};// então meu ponteiro estará apóntando para essa lista de dados aqui.
    //v =(int[]){11,22,33};

    Então eu posso fazer esse tipo de inicialização, não preciso mais ir la declarar p recebe.matricula que recebe tal ou
    strcpy p.nome recebe fulano posso fazer direto

    "ATENÇÃO" PARECE COM O CAST NÉ MAS NÃO É.
    - Um literal se parece como uma forma explicita de conversão de tipo (cast).
    MAS O QUE ESTOU FAZENDO QUANDO USO UM LITERAL COMPOSTO?

    - No entanto, trata-se da declaração de uma "variável temporária anônima" do tipo especificado e inicializada usando as
    mesmas regras que se a uma variável desse tipo

    - Assim, o literal composto
        p = (struct aluno){123,"Ricardo"}; // Estou criando uma variavel temporária e anônima do tipo struct aluno  preenchedo ela com esses dados e copiando o conteudo dela para p
        é equivalente a
        struct aluno sem_nome = {123,"Ricardo"};
        p = sem_nome;

    "NÃO É QUE EU FIZ UM CAST, EU CRIEI A VARIÁVEL E COPIEI O CONTEÚDO DELA"


    EU POSSO USAR ISSO COM FUNÇÕES:
        "Sendfo uma variável anônima"
    o Literal composto está sujeito as regras de escopo da variável, eu criei uma variável anônima  então tenh oque tomar cuidado com isso.
    - Pode ser passado diretamente como parâmetro de uma função:

    void imprime (struct aluno p);// Normalmente Teria que declarar um p preencher esse p e imprime p


    imprime((struct aluno){123,"Ricardo"}) //Eu posso fazer o seguinte agora:
                                          // Ao inves de criar uma variavel preencher essa variavel e passar para a função imprime
                                          // Eu faço direto

      "Como eu tenho uma variável anônima eu posso usar o &"
    - Pode se utilizar o operador & para recuperar seu endereço de memória

    struct ponto *po;// Tenho um ponteiro aqui
    po = &(struct aluno){123,"Ricardo"}; // eu posso pegar o endereço dessa inicialização
                                         // Pois isso não é um cast é uma variável anônima que eu uso para inicializar uma outra variável
                                         // Então eu fazendo assim quero o endereço da minha variável anônima para guardar no meu ponteiro PO

    - A menos que o modificador de conversões de tipo seja definido com const, o conteúdo do
    literal composto é modificavel. Opa eu tenho um ponteiro para esses dados então eui posso modiificar esses dados

    "ENTÃO É UMA FORMA DE INICIALIZAR MAIS SIMPLES VETORES, ESTRUTURAS" Dá para usar com int mas não faz sentido pois int já aceita int i=1; por exemplo


    return 0;
}
