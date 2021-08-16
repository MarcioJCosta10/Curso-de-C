#include <stdio.h>
#include <stdlib.h>
            /*"   FUN��O strtok()"
        - Permite dividir uma string "STR" em um conjunto de substring com base em um conjuto de delimitadoes "DELIM"
            PARECIDO COM FUN��O SPLIT() EM JAVA
        - Prot�tipo

            char* strtok (char* STR, char* DELIM);

                "Usando a fun��o strtok()"
            . Entrada
            - STR: Texto a ser dividido
            - DELIM: Conjunto de delimitadores

            . Sa�da
            - Ponteiro para o inicio da substring encontrada
            - NULL, no caso contr�rio

          char* strtok (char* STR, char* DELIM);

          "IMPORTANTE"
          - A fun��o strtok() retorna apenas uma substring por vez
                    sub=strtok(STR,".");
          - Para pegar todas as substrings, devemos chamar a fun��o v�rias vezes.
            A partir da segunda vez, usamos NULL no lugar da string
                    sub=strtok(NULL,".");
            Por que isso?
            Porque se n�o ele vai recome�ar o calculo da substring e eu n�o quero que recomece, quero que continue de onde parou

            */

int main()
{
    char str[100] = "Palavra, palavra2.palavra3 palavra4!";
    char* sub; // Criei um ponteiro para char que vai receber essa substring
    char texto[20];

    sub = strtok(str," !.,");
    while(sub!=NULL){
        printf("%s\n",sub);
                                        //A strtok est� me devolvento um ponteiro para string que est� armazenada internamente dentro da fun��o
                                        // Se eu quiser processar essa string preciso fazer uma c�pia dela
        strcmp(texto,sub);              // criei uma string texto, e copiei a minha substring para ela
        sub= strtok(NULL," !.,");
    }
    printf("\nFIM\n");
    return 0;
}
