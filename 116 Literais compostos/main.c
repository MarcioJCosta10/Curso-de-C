            "LITERAIS COMPOSTOS"
            "Funcionamento"

        - Parecido com o modelador de tipos dos dados (cast), seguidos pelos dados da inicializa��o entre chaves{}
        "Como funciona?"
        - Uma vari�vel declarada e inicializada como: //Exemplo array de estrutura
            tipo_variavel nome_vari�vel = {dados};

            Uma vari�vrel desse tipo:
        Ter� como composi��o literal :
            (tipo_da_variavel){dados}; // tipo da vari�vel entre parenteses e os dados entre chaves

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
    struct aluno p; // Criei aqui um p mas n�o inicializado, e se eu quiser colocar um dado em p posso fazer como se fosse um cast
    //p recebe os dados especificados
    p = (struct aluno){123,"Ricardo"}; // p vai receber uma struct aluno e o que est� entre chaves vai ser a lista de dados meio que formatado para esse formato struct aluno

    "POSSO FAZER COM PONTEIROS?"
    int* v; // Meu ponteiro v vair receber o que? Vai receber meu vetor de inteiros e uma lista de valores
    //v recebe o endere�o do array
    v = (int[3]){11,22,33};// ent�o meu ponteiro estar� ap�ntando para essa lista de dados aqui.
    //v =(int[]){11,22,33};

    Ent�o eu posso fazer esse tipo de inicializa��o, n�o preciso mais ir la declarar p recebe.matricula que recebe tal ou
    strcpy p.nome recebe fulano posso fazer direto

    "ATEN��O" PARECE COM O CAST N� MAS N�O �.
    - Um literal se parece como uma forma explicita de convers�o de tipo (cast).
    MAS O QUE ESTOU FAZENDO QUANDO USO UM LITERAL COMPOSTO?

    - No entanto, trata-se da declara��o de uma "vari�vel tempor�ria an�nima" do tipo especificado e inicializada usando as
    mesmas regras que se a uma vari�vel desse tipo

    - Assim, o literal composto
        p = (struct aluno){123,"Ricardo"}; // Estou criando uma variavel tempor�ria e an�nima do tipo struct aluno  preenchedo ela com esses dados e copiando o conteudo dela para p
        � equivalente a
        struct aluno sem_nome = {123,"Ricardo"};
        p = sem_nome;

    "N�O � QUE EU FIZ UM CAST, EU CRIEI A VARI�VEL E COPIEI O CONTE�DO DELA"


    EU POSSO USAR ISSO COM FUN��ES:
        "Sendfo uma vari�vel an�nima"
    o Literal composto est� sujeito as regras de escopo da vari�vel, eu criei uma vari�vel an�nima  ent�o tenh oque tomar cuidado com isso.
    - Pode ser passado diretamente como par�metro de uma fun��o:

    void imprime (struct aluno p);// Normalmente Teria que declarar um p preencher esse p e imprime p


    imprime((struct aluno){123,"Ricardo"}) //Eu posso fazer o seguinte agora:
                                          // Ao inves de criar uma variavel preencher essa variavel e passar para a fun��o imprime
                                          // Eu fa�o direto

      "Como eu tenho uma vari�vel an�nima eu posso usar o &"
    - Pode se utilizar o operador & para recuperar seu endere�o de mem�ria

    struct ponto *po;// Tenho um ponteiro aqui
    po = &(struct aluno){123,"Ricardo"}; // eu posso pegar o endere�o dessa inicializa��o
                                         // Pois isso n�o � um cast � uma vari�vel an�nima que eu uso para inicializar uma outra vari�vel
                                         // Ent�o eu fazendo assim quero o endere�o da minha vari�vel an�nima para guardar no meu ponteiro PO

    - A menos que o modificador de convers�es de tipo seja definido com const, o conte�do do
    literal composto � modificavel. Opa eu tenho um ponteiro para esses dados ent�o eui posso modiificar esses dados

    "ENT�O � UMA FORMA DE INICIALIZAR MAIS SIMPLES VETORES, ESTRUTURAS" D� para usar com int mas n�o faz sentido pois int j� aceita int i=1; por exemplo


    return 0;
}
