#include <stdio.h>
#include <stdlib.h>
                "Diretivas de Inclus�o Condicional"
    - S�o estruturas condicionais do
    pr�-processador da lingugem C, ou seja v�o ser compiladas antes de realmente compilar o meu c�digo.
    - Elas permitem incluir ou descartar uma parte do c�digo de um programa sempre que determinada
    condi��o � satisfeita ou n�o.

    "Listas de diretivas"
    #ifdef , #ifndef , #if ,#else , #elif
    Para inidicar o fim de uma diretiva de inclus�o condicional usamos
    #endif

    "Diretivas #ifdef e #ifndef
    - Essas diretivas permitem verificar se determinada macro foi previamente definida (#ifdef) ou n�o (#ifndef)
    "Forma geral"
    #ifdef nome_da_macro
          codigo que eu quero que seja incluido se a macro existir
    #endif // nome_da_macro

    E
    #ifndef nome_da_macro
          codigo que eu quero que seja incluido se a macro n�o existir
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
    #ifndef                 // se a macro tamanho n�o foi deifinida
        #define TAMANHO 100 // defino a macro tamanho
        int vetor[TAMANHO]; // declaro o meu vetor
    #endif
    system("pause");
    return 0;
}


    "Diretivas #if, #else, #elif"
    - S�o utilizadas para (Eu quero )especificar que algumas condi��es a serem cumpridas para que determinada parte do c�digo
    seja compilada.
    - As diretivas #if e #else s�o equivalentes aos comandos condicionais if e else convencionais
    - As diretivas #if e #else s� podem ser utilizadas para avalias express�es constantes, ou seja a express�o tem que existir

    "Forma Geral"
   #if condi��o
        sequ�ncia de comandos
    #else
        sequ�ncia de comandos
    #endif

    // Se eu quiser colocar uma outra condi��o depois do else ai eu uso o elif que � o else seguido de if
    "Exemplo"
    #if condicao
        sequencia de comandos
    #elif condi��o 2
        sequencia de comandos
    #else
        sequencia de comandos
    #endif // condicao

    "Exemplo"

#include<stdio.h>
#define TAMANHO 55  // Defini TAMANHO 55

#if TAMANHO > 100  // Tem que exixtir a macro tamanho para fazer essa verifica��o
    #undef TAMANHO  // Tiro a defini��o
    #define TAMANHO 100 // Redefino TAMANHO
#elif TAMANHO < 50 // ou n�o tamanho n�o � maior que 100 ent�o verifico se tamanho � menor que 50
    #undef TAMANHO  // Tiro a defini��o
    #define TAMANHO 50 // Redefino TAMANHO
#else                   // Se n�o
    #undef TAMANHO 50 // Tiro a defini��o
    #define TAMANHO 75 // Redefino TAMANHO

#endif // TAMANHO
                        // dependendo da deinic��o de tamanho no inicio do programa
                        // iremos entrar e redefir o tamnaho no c�digo e criar uma outra defini��o para essa macro

                        // Esse � um if else para o pr�-compilador, ele vai tratar e vai dizer se ser� compilado ou n�o

int main()
{
    printf("Valor de TAMANHO = %d\n", TAMANHO);
    system(pause);
    return 0;

    return 0;
}
