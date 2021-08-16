#include <stdio.h>
#include <stdlib.h>
                // COMO LER UM CARACTERE POR VEZ EM UM ARQUIVO
                // Usamos a função: fgetc()
    /* Para ler um caractere de um arquivo usamos a função fgetc() */
    //FORMA GERAL
    //int fgetc(FILE *fp);// Essa função vai ler um caractere do arquivo que eu passar por parametro FILE* e vai retorar a forma inteira dele ou seja o código dele na tabala ASCII
    /* Retorna
    - Em caso de erro: a constante EOF (a contante EOF vale -1 o que determina um erro pois a função tem que retornar um inteiro)
    - Em caso de sucesso: o caractere lido do arquivo
    */







int main()
{
    //Exemplo completo:
    /*
    FILE *f;
    f = fopen("C:\\Projetos\\Arquivo.txt","r");// Aqui é estou abrindo meu arquivo
    if(f==NULL){                               // se der erro retorna NULL e encerra o programa
        printf("Erro na abertura do arquivo!\n");
        system("pause");
        exit(1);
    }                                           //se não entrar no if vou ler um caractere por vez
    char c;
    int i;
    //Lê o arquivo um caractere por vez
    for(i=1;i<=10;i++){                         // meu for vai de 1 até 10, eu posso controlar quantos caractere quero ler
            c = fgetc(f);                       // minha variavel c vai receber um caractere por vez do arquivo f
            printf("%c",c);                     // vou imprimir um caractere por vez da variavel c
            }
        printf("\nFim\n");
        fclose(f);                              // fecha o arquivo


    */
            // COMO LER TODOS OS CARACTERES?

        /*  Antes, usamos a função fgetc para ler
            10 caracteres de um arquivo

            Como fazer para ler todos os caracteres ?

            Solução: usar a constante EOF (End Of File)
            Quando atingimos o final de um arquivo,
            a função fgetc() devolve a constante EOF

         */
         FILE *f;
    f = fopen("C:\\Projetos\\Arquivo.txt","r");// Aqui é estou abrindo meu arquivo
    if(f==NULL){                               // se der erro retorna NULL e encerra o programa
        printf("Erro na abertura do arquivo!\n");
        system("pause");
        exit(1);
    }                                           //se não entrar no if vou ler todos os caracteres
    char c = fgetc(f);  // Comecei lendo um caractere aqui
                        // Como eu não sei quantos caracteres tem meu arquivo usei meu comando while:
    while (c!=EOF){     //Enquanto meu caracter c for diferente da constante EOF, eu faço:
        printf("%c",c); //Imprimo o caractere e
        c = fgetc(f);   // Leio o proximo caractere
                        // Vai chegar um ponto que ele vai termicar de ler então vai receber EOF e ai termina o laço
        }
        printf("\nFim\n");
        fclose(f); // Fecha o arquivo

        /*  Então para saber se eu cheguei no final do arquivo com a função fgetc() e só saber se o que li
            foi a constate EOF e não um caractere

        */

    system("pause");
    return 0;
}
