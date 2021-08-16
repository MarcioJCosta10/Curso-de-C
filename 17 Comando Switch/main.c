#include <stdio.h>
#include <stdlib.h>

int main()
{
    #include <stdio.h>
#include <stdlib.h>

int main()
{
 /*
 O Comando Switch case permite fazer seleções multiplas(VARIOS CAMINHOS)
 com base no valor de uma variável do tipo int ou char
  */

  //FORMA GERAL
  /*switch (variavel){
        case valor1 : conjunto de comandos: break;
        case valor2 : conjunto de comandos: break;
        case valorn : conjunto de comandos: break;
        default : conjunto de comandos;

  }*/

    char ch;
    printf("Digite um simbolo de pontuacao:\n");
    scanf("%c", &ch);
    switch(ch){
        case '.' : printf("Ponto.\n");break;
        case ',' : printf("Virgula.\n");break;
        case ':' : printf("Doispontos.\n");break;
        case ';' : printf("Ponto e virgula.\n");break;
        default: printf("Nao eh pontuacao.\n");
    }


    system("pause");
    return 0;
}

    return 0;
}
