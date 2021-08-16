#include <stdio.h>
#include <stdlib.h>
                    "Classe de Armazenamento"
                    - É um conjunto de modificadores que permitem alterar
                    a maneira como o compilador vai armazenar uma variavel

                    - São utilizadas para definir o "Escopo" e o "tempo de vida"
                    das variaveis dentro do programa


                    "Existem 4 classes de armazenamento"
                    - auto
                    - extern
                    - static
                    - register

                    " classe de  armazenamento " auto
                    - permite definir variaveis locais
                    - As variaveis são automaticamente alocadas
                    no inicio de uma função/ bloco de comandos,
                    e automanticamente liberadas quando essa
                    função/bloco de comandos termina

                    - Modo - padrão de definição de variaveis
                    e por esse motivo, raramente é usado

                    As varaiveis a seguir possuem a mesma classe
                    de armazenamento

                    int x;
                    auto int y;


                    "Classe de armazenamento extern"
                    - Permite definir variaveis globais
                    que serão visiveis em mais de um arquivo do programa

                    - Ao colocar a palavra extern antes da declaração
                    de uma variavel, não estamos declarando uma nova
                    variavel, mas apenas informando ao compilador que
                    ela existe em outro local de armazenamento
                    previamente definido. Por esse motivo, ela NÃO
                    pode ser inicializada

                    "Exemplo da classe de aramazenamento extern"
                    - Imagine o seguinte trecho de código em um arquivo
                    //================================================
                    int soma = 0;
                    int main(){{
                    escreve();
                    return 0;
                    }
                    //===============================================
                    - A variavel "soma" será usada em outro arquivo
                    //===============================================
                    //Informo que já existe e (nunca inicializar)
                    extern int soma;
                    void escreve(){
                        printf("Soma = %d",soma);
                    }
                    //=============================================

                    "Classe de armazenamento "static
                    - Seu funcioamento depende de como ela é utilizada
                    - É o modo-padrão de definição de variáveis "GLOBAIS"
                    e, por esse motivo raramente é utilizada na declaração
                    de variaveis globais

                    As variaveis a seguir possuem a mesma classe de Armazenamento
                    //============================================
                    #include <stdio.h>
                    #include <stdlib.h>
                    int x = 20;
                    static int y = 10;
                    int main(){
                    return 0;
                    }
                    "Classe de armazenamento static"
                    - Tmabém podem ser utilizadas com variaveis
                    "Locais" como as variaveis declaradas dentro de
                    uma função

                    - Nesse caso, a variavel é inicializada em tempo de
                    "compilação"(valor constante) e manterá o seu
                    valor entre as diferentes chamadas da função


                    "Exemplo da classe de armazenamento Static"
                    //=========================================
                    // n será diferente para cada chamada da função
                    void imprime(){
                        static int n = 0;
                        printf("%d \n ", n++);
                        }
                        int main(){
                        int i;
                        for(i=1; i<=10; i++)
                            imprime()
                            system("pause");
                            return 0;
                        }
                    //=========================================

                    "Classe de armazenamento static "
                    - Também pode ser utilizada para definir
                    "Funções"
                    - Assim, garantimos que a função seja "visivel"
                    apenas dentro daquele arquivo do programa, ou seja
                    apenas funções dentro daquele arquivo poderão ver uma
                    função static

                    "Exemplo"
                    //=====================================================
                    static void imprime(){
                        printf("Executando a função Imprime ()\n");
                    }
                    int main(){
                    imprime();
                    system("pause");
                    return 0;
                    }


                    "Classe de armazenamento Register"
                    - Serve para especificar que uma "variavel" será
                    muito utilizada e que seria interessante
                    armazená-la  no "Registrador" da CPU do computador

                    -Acesso "mais rápido" que a "RAM"

                    -É como uma dica de armazenamento que damos
                    ao compilar. O compilador é livre para descidir
                    se vai ou não armazenar essa variavel no regitrador

                    "Exemplo "

                    register int y;

                    "Classe de armazenamento register"
                    - Tem algumas limitações:
                    - Não se pode utilizar o operador de endereço "&"
                    porque a variavel está no "registrador", e não na
                    memoria;

                    - Apenas variaveis que ocupem poucos bytes podem
                    ser definidas como regiter( tamanho do registrador é limitado)

                    -Raramente é utilizada. OS compiladores modernos
                    fazem trabalhos de otimização na alocação de
                    variaveis melhore que os programadores

int main()
{
    printf("Hello world!\n");
    return 0;
}
