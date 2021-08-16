#include <stdio.h>
#include <stdlib.h>
            /*"   FUNÇÃO strtok()"
        - Permite dividir uma string "STR" em um conjunto de substring com base em um conjuto de delimitadoes "DELIM"
            PARECIDO COM FUNÇÃO SPLIT() EM JAVA
        - Protótipo

            char* strtok (char* STR, char* DELIM);

                "Usando a função strtok()"
            . Entrada
            - STR: Texto a ser dividido
            - DELIM: Conjunto de delimitadores

            . Saída
            - Ponteiro para o inicio da substring encontrada
            - NULL, no caso contrário

          char* strtok (char* STR, char* DELIM);

          "IMPORTANTE"
          - A função strtok() retorna apenas uma substring por vez
                    sub=strtok(STR,".");
          - Para pegar todas as substrings, devemos chamar a função várias vezes.
            A partir da segunda vez, usamos NULL no lugar da string
                    sub=strtok(NULL,".");
            Por que isso?
            Porque se não ele vai recomeçar o calculo da substring e eu não quero que recomece, quero que continue de onde parou

            */

int main()
{
    char str[100] = "Palavra, palavra2.palavra3 palavra4!";
    char* sub; // Criei um ponteiro para char que vai receber essa substring
    char texto[20];

    sub = strtok(str," !.,");
    while(sub!=NULL){
        printf("%s\n",sub);
                                        //A strtok está me devolvento um ponteiro para string que está armazenada internamente dentro da função
                                        // Se eu quiser processar essa string preciso fazer uma cópia dela
        strcmp(texto,sub);              // criei uma string texto, e copiei a minha substring para ela
        sub= strtok(NULL," !.,");
    }
    printf("\nFIM\n");
    return 0;
}
