#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{   /*
    // Trabalhando melhor com Strings:
    char str1[20] = "Hello Word";
    char str2 [20];

    //str1 = str2; // ERRADO POIS STRING É UM ARRAY E NÃO ACEITA ATRIBUIÇÃO SIMPLES DEVEMOS ATRIBUIR POSIÇÃO POR POSIÇÃO DO ARRAY;

    int i;
       for(i=0; str1[i]!='\0';i++){
            str2[i] = str1[i];
            str2[i] = '\0';
       }

        //RELAIZAR TODO ESSE COMANDO FOR É TRABALHOSO;
        //Felizmente a Linguagem C tem uma Biblioteca para nos auxiliar
        //String.h e as suas funções

        strlen(); Tamanho da string;
        strcpy(); Copiar uma string;
        strcat(); Concatenar duas string;
        strcmp(); Comparar duas string;

*/

        //O Tamanho da String

    char palavras [20] = "Linguagem C"; // Aqui eu tenho o numero de caracteres antes do \0;
    int tamanho = strlen(palavras);

    printf("O tamanho da Strig e:  %d \n", tamanho);


    // Copiar uma String

    char novapalavra[30]; // Tenho que tomar cuidado  com o tamnho pois uma string tem que caber dentro da outra
    strcpy(novapalavra ,palavras);// A palavra vai para a nova palavra
    printf("A copia da Strig e:  %s \n", novapalavra);

    // Concatenar uma String
    char palavra1[20] = "Bom ";
    char palavra2[20] = "dia!";
    strcat(palavra1,palavra2);
    printf("As palavras concatenadas sao: %s\n",palavra1);



    // Comparando duas palavras

    char palavra3[30]= "linguagem c";
    char palavra4[30]= "LINGUAGEM C";
        if(strcmp(palavra3,palavra4)==0) // Se forem diferentes retornará 1;
            printf("As palvras sao iguais \n");
        else
            printf("As palavras sao diferentes\n");





system("pause");
    return 0;
}
