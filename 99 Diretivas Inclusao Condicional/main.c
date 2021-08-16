#include <stdio.h>
#include <stdlib.h>
                "Diretivas de Inclusão Condicional"
    - São estruturas condicionais do
    pré-processador da lingugem C, ou seja vão ser compiladas antes de realmente compilar o meu código.
    - Elas permitem incluir ou descartar uma parte do código de um programa sempre que determinada
    condição é satisfeita ou não.

    "Listas de diretivas"
    #ifdef , #ifndef , #if ,#else , #elif
    Para inidicar o fim de uma diretiva de inclusão condicional usamos
    #endif

    "Diretivas #ifdef e #ifndef
    - Essas diretivas permitem verificar se determinada macro foi previamente definida (#ifdef) ou não (#ifndef)
    "Forma geral"
    #ifdef nome_da_macro
          codigo que eu quero que seja incluido se a macro existir
    #endif // nome_da_macro

    E
    #ifndef nome_da_macro
          codigo que eu quero que seja incluido se a macro não existir
    #endif // nome_da_macro


    "Exemplo"
    #include<stdlib.h>
    #define TAMANHO 100
    int main(){
        #ifdef  TAMANHO    // se a macro tamanho foi definido
            int vetor[TAMANHO]; // declaro um vetor tamanho
        #endif
        system("pause");
        return 0;
    }
//====================================
    #include<stdio.h>
    #include<stdlib.h>
int main(){
    #ifndef                 // se a macro tamanho não foi deifinida
        #define TAMANHO 100 // defino a macro tamanho
        int vetor[TAMANHO]; // declaro o meu vetor
    #endif
    system("pause");
    return 0;
}


    "Diretivas #if, #else, #elif"
    - São utilizadas para (Eu quero )especificar que algumas condições a serem cumpridas para que determinada parte do código
    seja compilada.
    - As diretivas #if e #else são equivalentes aos comandos condicionais if e else convencionais
    - As diretivas #if e #else só podem ser utilizadas para avalias expressões constantes, ou seja a expressão tem que existir

    "Forma Geral"
   #if condição
        sequência de comandos
    #else
        sequência de comandos
    #endif

    // Se eu quiser colocar uma outra condição depois do else ai eu uso o elif que é o else seguido de if
    "Exemplo"
    #if condicao
        sequencia de comandos
    #elif condição 2
        sequencia de comandos
    #else
        sequencia de comandos
    #endif // condicao

    "Exemplo"

#include<stdio.h>
#define TAMANHO 55  // Defini TAMANHO 55

#if TAMANHO > 100  // Tem que exixtir a macro tamanho para fazer essa verificação
    #undef TAMANHO  // Tiro a definição
    #define TAMANHO 100 // Redefino TAMANHO
#elif TAMANHO < 50 // ou não tamanho não é maior que 100 então verifico se tamanho é menor que 50
    #undef TAMANHO  // Tiro a definição
    #define TAMANHO 50 // Redefino TAMANHO
#else                   // Se não
    #undef TAMANHO 50 // Tiro a definição
    #define TAMANHO 75 // Redefino TAMANHO

#endif // TAMANHO
                        // dependendo da deinicção de tamanho no inicio do programa
                        // iremos entrar e redefir o tamnaho no código e criar uma outra definição para essa macro

                        // Esse é um if else para o pré-compilador, ele vai tratar e vai dizer se será compilado ou não

int main()
{
    printf("Valor de TAMANHO = %d\n", TAMANHO);
    system(pause);
    return 0;

    return 0;
}
