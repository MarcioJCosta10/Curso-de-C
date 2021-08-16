#include <stdio.h>
#include <stdlib.h>
        // PARAMETROS DA FUN��O main()
        /* Ao longo das aulas sempre trabalhamos com a fun��o assim: main()
           Indicava a fun��o principal do programa.
           Ela � respons�vel pelo inicio da execu��o do programa

           Se main � uma fun��o, significa que ela pode receber uma lista de par�metros tamb�m;
           A fun��o main() tamb�m pode receber uma lista de par�mentros no inicio da execu��o do programa.

           Esse par�mentos v�o vir l� do console que estiver chamando o programa;
           Ent�o esses parametros vir�o do prompt da linha de comando do sistema
           operacional, ou seja eu n�o vou executar meu programa mais do codeblocks
           eu vou compilar o meu programa gerar o seu executavel, vou no promt de comando
           vou chamar o nome do meu programa e os parametros que eu quero passar para esse programa.

           Isso � muito util em determindadas aplica��es onde eu n�o estou querendo executar sempre o mesmo programa
           mas ele � dependente de certos parametros externos
           *

        // COMO TRABALHAR COM ESSES PARAMETROS

    int main(int argc, char *argv[]){//Esse v�o ser sempre os dois parametros que eu vou estar passando para a fun��o main()

    Para receber paramentros a fun��o main() adquire a forma acima, onde:

        int argc: � um valor inteiro que indica o numero de parametros
        com os quais a fun��o main() foi chamada (argc <=1)// argc sempre vai ser no minimo igual a 1 nunca ser� negativo nem zero
                                                           // ENT�O AQUI � A QUANTIDADE DE PARAMETROS

        char *argv[]: � um ponteiro para um vetor // Eu tenho aqui um vetor, onde cada posi��o desse vetor � um char x de algum tamanho(uma string)
                                                  // AQUI � O PARAMETRO EM SI NA FORMA DE UMA STRING

            contendo argc strings.                // Por que argc strings e n�o hamei minha fun��o com zero paramentros, � que no minimo tem que ter uma string pois argc[0] � sempre o come�o do programa
            Cada string � um dos parametros para a main();

        argv[0] sempre aponta para o nome do programa // � que agrv[0] � o nome do programa
                                                      // Mesmo que eu chame o programa sem passar nenhum parametro
                                                         adicional pra ele o primeiro parametro, ou seja a primeira
                                                         string do meu vetor argv vai ser o nome do programa

    }
                        */
/* int main(int argc, char* argv[]){
        if(argc ==1){
            printf("Programa %s sem paramentros\n", argv[0]);// Aqui com o %s eu pego o nome d programa
                                                             // e digo que est� sem parametros se for igual a 1
        }else{// sen�o opa ent�o n�o foi passado s� um parametro ent�o tem outro
            int i;
            printf("Parametros do programa %s: \n",argv[0]);
            for (i=1; i<argc; i++)  // Vou fazer um for percorrer de 1 ate menor que argc
                printf("Parametro %d: %s\n", i,argv[i]); // e vou imprimir o paramentro %d %s, ent�o o parametro 1 e o que foi passado para a fun��es
            }                                            // e aqui estou acessando argv na posi��o i  argv[i] � uma string � um vetor de char

*/
//Exemplo 2:

int main(int argc, char* argv[]){
        if(argc ==1){
            printf("Programa %s sem paramentros\n", argv[0]);

        }else{
            int soma = 0, i; // minha variavel soma = 0, eu vou estar somando os meus parametros inteiros
            printf("Somado os parametros de %s: \n",argv[0]);// Esse programa vai somar esses paramentro que foram passaodos para pograa s
                for(i=1; i<argc; i++)                        // Esse for � para percorrer todos os paramentros
                    soma = soma + atoi(argv[i]);        //Soma recebe soma mais atoi que � uma fun��o da biblioteca da stdlib
                                                        // que simplismente converte uma string para um inteiro
                                                        /*Ent�o pega a strin argv[i] que foi passada na posi��o i, e converte para inteiro
                                                          e soma a variavel soma
                                                        */
                //Fun��o atoi(): converte string para inteiro
                printf("Soma = \5%d\n",soma);// Aqui exibe a variavel soma
        }

        // Ai vou no promt de comando passo os parametros 1 2 3 4 e meu programa conseguiu somar todos os meus paramentros

                system("Pause");
                return 0;
}
