#include <stdio.h>
#include <stdlib.h>
                    "Classe de Armazenamento"
                    - � um conjunto de modificadores que permitem alterar
                    a maneira como o compilador vai armazenar uma variavel

                    - S�o utilizadas para definir o "Escopo" e o "tempo de vida"
                    das variaveis dentro do programa


                    "Existem 4 classes de armazenamento"
                    - auto
                    - extern
                    - static
                    - register

                    " classe de  armazenamento " auto
                    - permite definir variaveis locais
                    - As variaveis s�o automaticamente alocadas
                    no inicio de uma fun��o/ bloco de comandos,
                    e automanticamente liberadas quando essa
                    fun��o/bloco de comandos termina

                    - Modo - padr�o de defini��o de variaveis
                    e por esse motivo, raramente � usado

                    As varaiveis a seguir possuem a mesma classe
                    de armazenamento

                    int x;
                    auto int y;


                    "Classe de armazenamento extern"
                    - Permite definir variaveis globais
                    que ser�o visiveis em mais de um arquivo do programa

                    - Ao colocar a palavra extern antes da declara��o
                    de uma variavel, n�o estamos declarando uma nova
                    variavel, mas apenas informando ao compilador que
                    ela existe em outro local de armazenamento
                    previamente definido. Por esse motivo, ela N�O
                    pode ser inicializada

                    "Exemplo da classe de aramazenamento extern"
                    - Imagine o seguinte trecho de c�digo em um arquivo
                    //================================================
                    int soma = 0;
                    int main(){{
                    escreve();
                    return 0;
                    }
                    //===============================================
                    - A variavel "soma" ser� usada em outro arquivo
                    //===============================================
                    //Informo que j� existe e (nunca inicializar)
                    extern int soma;
                    void escreve(){
                        printf("Soma = %d",soma);
                    }
                    //=============================================

                    "Classe de armazenamento "static
                    - Seu funcioamento depende de como ela � utilizada
                    - � o modo-padr�o de defini��o de vari�veis "GLOBAIS"
                    e, por esse motivo raramente � utilizada na declara��o
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
                    - Tmab�m podem ser utilizadas com variaveis
                    "Locais" como as variaveis declaradas dentro de
                    uma fun��o

                    - Nesse caso, a variavel � inicializada em tempo de
                    "compila��o"(valor constante) e manter� o seu
                    valor entre as diferentes chamadas da fun��o


                    "Exemplo da classe de armazenamento Static"
                    //=========================================
                    // n ser� diferente para cada chamada da fun��o
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
                    - Tamb�m pode ser utilizada para definir
                    "Fun��es"
                    - Assim, garantimos que a fun��o seja "visivel"
                    apenas dentro daquele arquivo do programa, ou seja
                    apenas fun��es dentro daquele arquivo poder�o ver uma
                    fun��o static

                    "Exemplo"
                    //=====================================================
                    static void imprime(){
                        printf("Executando a fun��o Imprime ()\n");
                    }
                    int main(){
                    imprime();
                    system("pause");
                    return 0;
                    }


                    "Classe de armazenamento Register"
                    - Serve para especificar que uma "variavel" ser�
                    muito utilizada e que seria interessante
                    armazen�-la  no "Registrador" da CPU do computador

                    -Acesso "mais r�pido" que a "RAM"

                    -� como uma dica de armazenamento que damos
                    ao compilar. O compilador � livre para descidir
                    se vai ou n�o armazenar essa variavel no regitrador

                    "Exemplo "

                    register int y;

                    "Classe de armazenamento register"
                    - Tem algumas limita��es:
                    - N�o se pode utilizar o operador de endere�o "&"
                    porque a variavel est� no "registrador", e n�o na
                    memoria;

                    - Apenas variaveis que ocupem poucos bytes podem
                    ser definidas como regiter( tamanho do registrador � limitado)

                    -Raramente � utilizada. OS compiladores modernos
                    fazem trabalhos de otimiza��o na aloca��o de
                    variaveis melhore que os programadores

int main()
{
    printf("Hello world!\n");
    return 0;
}
