#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Quantas vogais tem dentro de uma String
    char str[20] = "Linguaaaaaaaaaaaaagem C";
    int i, j, total = 0;
    int tam1 = strlen(str);// tam1 � o numero de caractere da minha string at� o \0
    for(i=0; i<tam1; i++){// Aqui com esse comando for estou percorrendo toda minha string
        if(str[i] == 'a' || str[i]=='e'|| str[i] == 'i' || str[i]=='o'|| str[i]=='u')// aqui estou comparando cada caractere na posi��o i se � igual as vogais aeiou
                            total++;//aqui � a contagem das vogais sempre que eu achar uma vogal dentro da posi��o i do comando if

    }// Esse c�digo tem um problema por ter que usar varios ifs ent�o � invi�vel
    printf("O nro de vogais e: %d\n",total);

    //Outro modo: Vantagem que posso ter quantas vogais eu quiser
    char str1 [20] = "Linguageeeeeem C";
    char vogais[11]= "aeiouAEIOU"; //todos caracteres que eu quero procurar na string 11 por ser 5 maiuscula 5 minuscula + o \0.
    int a,b,total1=0;
    int tam2=strlen(str1); //tamanho da string que possuo
    int tam3= strlen(vogais);//Numero de vogais
    for (a=0; a<tam2;a++){//For para percorre de 0 a tam-1(que � o tamanho da minha string)
        for (b=0; b<tam3;b++){//Quantidade de minhas vogais
            if(str1[a]==vogais[b]){//Perguntando se o caractere na posi��o a � igual ao caractere na posi��o b da string vogais
                total1++;
                break; // se eu achar uma vogal posso sair do segudo for pois n�o preciso mais comparar


            }

        }

    }
printf("O numero de vogais e: %d\n",total1);














    system("pause");
    return 0;

}
