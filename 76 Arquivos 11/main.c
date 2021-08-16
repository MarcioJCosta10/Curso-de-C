#include <stdio.h>
#include <stdlib.h>
            //FUN��O fread(): � uma fun��o para ler um bloco de bytes
            /* Para ler um bloco de bytes de
               um arquivo usamos a fun��o fread()
            */
            //FORMA GERAL
 //            int fread(void *buffer, int bytes, int count, FILE *fp);// Retorna um parametro inteiro, que � quantas unidades do count que eu consegui reler com sucesso ent�o se o retorno � igual ao count significa que li todos os dados com sucesso

            /* Par�metros:
               buffer: ponteiro generico para os dados
               bytes : tamanho, em bytes, de cada unidade de dado a ser lida
               count : total de unidades de dados que devem ser lidas
               fp    : o ponteiro para o arquivo

             Retorno: total de unidades de dados lidas com sucesso  //



            */

struct cadastro {
    char nome[30], endereco[30];
    int idade;
    };


int main()
{
    //EXEMPLO:
    /*FILE *arq = fopen("C:\\Projetos\\vetor.txt","rb");// Ler no modo bin�rio
        if(arq == NULL){
                printf("Erro na abertura\n");
                system("pause");
                exit(1);//Aborta o programa
                }
                int total_lido, v[5];//Quero ler do meu aquivo vetor.txt 5 posi�o ={1,2,3,4,5};
                total_lido = fread(v,sizeof(int),5,arq); // Aqui � a chamada da minha fun��o onde total lido vai receber fread()
                                                         // Estou lendo informa��o e guardando no meu vetor v
                                                         // � um vetor de inteiro ent�o em cada unidade ele tem sizeof(int)
                                                         // Vou ler 5 unidades
                                                         //No meu arquivo arq que eu abri l� em cima
                if(total_lido !=5){// Se for diferente de 5 eu tive um erro no meu arquivo
                    printf("Erro na leitura do arquivo!");
                    system("pause");
                    exit(1);
                }
                fclose(arq);
                printf("%d,%d,%d,%d,%d\n",v[0],v[1],v[2],v[3],v[4]);// Se eu n�o entrei no meu if ent�o eu vou ler as 5 posi��es que eu li do meu do meu vetor
*/
    //EXEMPLO 2, O QUE MAIS EU POSSO LER:
/*
    FILE *arq = fopen("C:\\Projetos\\dados.txt","rb");
        if(arq == NULL){
                printf("Erro na abertura\n");
                system("pause");
                exit(1);
        }
    char str[20];//"Hello World!"
    float x; //5
    int v[5];//{1,2,3,4,5};
    fread(str, sizeof(char),20,arq);// Como vou ler um vetor preciso somente do nome do vetor
    fread(&x, sizeof(float),1,arq); // Como x � uma vari�vel comum preciso colocar o & na frente, para poder ler ela passando o endere�o
    fread(v,sizeof(int), 5,arq);
    printf("%s\n%f\n",str,x);// Aqui simplismente imprimindo
    printf("%d,%d,%d,%d,%d\n",v[0],v[1],v[2],v[3],v[4]);// Aqui simplismente imprimindo
    fclose(arq);

*/
//EXEMPLO 3: VAMOS LER UMA ESTRUTURA

    FILE *arq;
    arq = fopen("C:\\Projetos\\struct.txt","rb");
        if(arq==NULL){
            printf("Erro na abertura\n");
            system("pause");
            exit(1); //Aborta o programa
    }
    struct cadastro cad; //= {"Andre","Rua 1","31"}; // Se fosse um vetor de estrutura ent�o cad seria cad[5]; n�o precisaria do &cad seria so cad e seria lido 5 elemnetos ao inves de 1;
        fread(&cad,sizeof(struct cadastro),1,arq);//Vou ler a estrutura ent�o uso o &cad que � o endere�o da variavel tipo estrutura onde vou guardar os meus dados
                                                  // Cada unidade � do tamanho da minha estrutura struct cadastro, ent�o eu vor ler tantos bytes quanto o tamanho da minha estrutura
                                                  // vou ler uma unica estrutura, n�o tenho um vetor tenho apenas uma vari�vel

        printf("%s\n%s\n%d\n",cad.nome, cad.endereco,cad.idade);// Aqui vou imprimir

    fclose(arq);

    system("pause");
    return 0;
}
