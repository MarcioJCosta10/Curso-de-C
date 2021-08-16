#include <stdio.h>
#include <stdlib.h>

int main()

{
    /*
    String: um array de caracteres
    Permite armazenar uma sequencia de caracteres
    adjacentes na mem�ria (palavras ou frases)
    */
    /*
    // Forma Geral:
    char nome_array[tamanho];

    // Exemplo:
    char palavra [20];
    */
    //Lendo e escrevendo uma String
    char palavra[20];
    printf("Digite uma Palavra: ");
    scanf("%s",palavra);//com scanf a palavra vai ser lida at� digitar enter ou espa�o
    //gets (palavra);    //s� termina a leitura quando digitar o enter; l� espa�os e varias palavras
    printf("Palavra lida: %s\n ",palavra);// Ao ler uma string n�o precisa colocar o indice do array pois estou lendo toda palavra

//Inicializando uma string
//Forma convencional
char nome1[20] = {'a','o','a','o','a','o','a','o','\0'};// \0 tem que colocar o \0 para indicar que terminou a string
printf("Nome:%s\n",nome1);
//Forma especial
char nome2[20]="Joao";//Aqui o \0 est� subentendido
printf("Nome2:%s",nome2);

//Como uma String � um array de caracteres eu posso acessar cada um dos seus elementos;
char palavra3 [20] = "teste";
printf("Palavra3: %s\n",palavra3);
palavra3[0] = 'L';//na primeira letra vou colcar o L - estou acessando uma posi��o ent�o tem que ser aspas simples
printf("Palavra3 Alterada: %s\n",palavra3);

//A fun��o do '\0' � desconsiderar as posi��es restantes da string
char palavra4[20]="Oitenta";
printf("Palravra4: %s\n",palavra4);

palavra4[2] = '\0'; // O \0 ignora osrestante e indica que terminou a string
printf("Palavra4 alterada: %s\n",palavra4);

    system("pause");
    return 0;
}
