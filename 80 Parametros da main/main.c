#include <stdio.h>
#include <stdlib.h>
        // PARAMETROS DA FUNÇÃO main()
        /* Ao longo das aulas sempre trabalhamos com a função assim: main()
           Indicava a função principal do programa.
           Ela é responsável pelo inicio da execução do programa

           Se main é uma função, significa que ela pode receber uma lista de parâmetros também;
           A função main() também pode receber uma lista de parâmentros no inicio da execução do programa.

           Esse parâmentos vão vir lá do console que estiver chamando o programa;
           Então esses parametros virão do prompt da linha de comando do sistema
           operacional, ou seja eu não vou executar meu programa mais do codeblocks
           eu vou compilar o meu programa gerar o seu executavel, vou no promt de comando
           vou chamar o nome do meu programa e os parametros que eu quero passar para esse programa.

           Isso é muito util em determindadas aplicações onde eu não estou querendo executar sempre o mesmo programa
           mas ele é dependente de certos parametros externos
           *

        // COMO TRABALHAR COM ESSES PARAMETROS

    int main(int argc, char *argv[]){//Esse vão ser sempre os dois parametros que eu vou estar passando para a função main()

    Para receber paramentros a função main() adquire a forma acima, onde:

        int argc: É um valor inteiro que indica o numero de parametros
        com os quais a função main() foi chamada (argc <=1)// argc sempre vai ser no minimo igual a 1 nunca será negativo nem zero
                                                           // ENTÃO AQUI É A QUANTIDADE DE PARAMETROS

        char *argv[]: É um ponteiro para um vetor // Eu tenho aqui um vetor, onde cada posição desse vetor é um char x de algum tamanho(uma string)
                                                  // AQUI É O PARAMETRO EM SI NA FORMA DE UMA STRING

            contendo argc strings.                // Por que argc strings e não hamei minha função com zero paramentros, é que no minimo tem que ter uma string pois argc[0] é sempre o começo do programa
            Cada string é um dos parametros para a main();

        argv[0] sempre aponta para o nome do programa // É que agrv[0] é o nome do programa
                                                      // Mesmo que eu chame o programa sem passar nenhum parametro
                                                         adicional pra ele o primeiro parametro, ou seja a primeira
                                                         string do meu vetor argv vai ser o nome do programa

    }
                        */
/* int main(int argc, char* argv[]){
        if(argc ==1){
            printf("Programa %s sem paramentros\n", argv[0]);// Aqui com o %s eu pego o nome d programa
                                                             // e digo que está sem parametros se for igual a 1
        }else{// senão opa então não foi passado só um parametro então tem outro
            int i;
            printf("Parametros do programa %s: \n",argv[0]);
            for (i=1; i<argc; i++)  // Vou fazer um for percorrer de 1 ate menor que argc
                printf("Parametro %d: %s\n", i,argv[i]); // e vou imprimir o paramentro %d %s, então o parametro 1 e o que foi passado para a funções
            }                                            // e aqui estou acessando argv na posição i  argv[i] é uma string é um vetor de char

*/
//Exemplo 2:

int main(int argc, char* argv[]){
        if(argc ==1){
            printf("Programa %s sem paramentros\n", argv[0]);

        }else{
            int soma = 0, i; // minha variavel soma = 0, eu vou estar somando os meus parametros inteiros
            printf("Somado os parametros de %s: \n",argv[0]);// Esse programa vai somar esses paramentro que foram passaodos para pograa s
                for(i=1; i<argc; i++)                        // Esse for é para percorrer todos os paramentros
                    soma = soma + atoi(argv[i]);        //Soma recebe soma mais atoi que é uma função da biblioteca da stdlib
                                                        // que simplismente converte uma string para um inteiro
                                                        /*Então pega a strin argv[i] que foi passada na posição i, e converte para inteiro
                                                          e soma a variavel soma
                                                        */
                //Função atoi(): converte string para inteiro
                printf("Soma = \5%d\n",soma);// Aqui exibe a variavel soma
        }

        // Ai vou no promt de comando passo os parametros 1 2 3 4 e meu programa conseguiu somar todos os meus paramentros

                system("Pause");
                return 0;
}
