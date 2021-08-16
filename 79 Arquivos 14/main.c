#include <stdio.h>
#include <stdlib.h>
                //Funções: fseek() e rewind();
                /*
                De modo geral quando estavamos trabalhando com
                arquivos estavamos sempre fazendo de modo sequencial
                */

                /* Em geral, o acesso a um arquivo é
                   quase sempre feito de modo sequencial.
                   Porém, a linguagem C permite realizar
                   operações de leitura e escrita randomica
                   ou seja eu posso pular certos dados para
                   ler outros
                   usando a funão fseek();

                */

                //FORMA GERAL:
        //int fseek(FILE*fp, long numbytes, int origem); // retornar um valor inteiro
                /* Parametros:
                   fp      : ponteiro para o arquivo que eu estou manipulando e que eu quero pular dentro de um determinado arquivo
                   numbytes: é o total de bytes a ser pulado a partir da "origem", então é o total de bytes que eu quero pular
                   origem  : a partir de onde os numbytes serão contados, essa origem pode ser de onde eu estou, ou do inicio do arquivo ou do final do arquivo

                   Retorno: Um valor inteiro que no caso é zero em caso de sucesso, por exeplo se eu for pular uma quantidade maior do que falta para o final do arquivo vai retornar um erro;
                */
                /* Quanto a origem: temos esses tres valores tabelados:
                   Os valores possiveis para o parametro "Origem"
                   são definidos na biblioteca stdio.h e são:
                   Contantes            Valor         Significado
                    SEEK_SET               0            Inicio do arquivo
                    SEEK_CUR               1            Ponto atual do arquivo
                    SEEK_END               2            Fim do arquivo

                        ^
                        |
                 É sempre melhor                    Que especifica que estou pulando tantos bytes:
                 usar o valor                        do inicio
                 da contante                         do ponto onde estou ( de onde eu estou depedendo eu posso usar bytes negativos para voltar)
                                                     do final            ( do final do arquvio eu só posso voltar pois para frente não tem mais nda no arquivo então devo usar bytes negativos para voltar)


                */


    struct cadastro{char nome[20], rua[20];int idade;};



int main()
{
    //PARTE 1 DO EXEMPLO GRAVANDO O ARQUIVO EM BINARIO
    /*

    FILE *f = fopen("c:\\Projetos\\fseekrewind.txt","wb");
    if(f==NULL){
            printf("Erro na abertura\n");
            system("pause");
            exit(1);
            }
    struct cadastro cad[4]={"Ricardo","Rua 1",31,
                           "Carlos","Rua 2",28,
                           "Ana", "Rua 3",45,
                           "Bianca","Rua 4",32};

    fwrite(cad,sizeof(struct cadastro),4,f);
    fclose(f);
    */
    //PARTE 2 DO EXEMPLO LENDO O ARQUIVO DE MODO RANDOMICO
    /*
    FILE *f = fopen("c:\\Projetos\\fseekrewind.txt","rb");// Aqui eu bri o arquivo e estou na primeira posição
    if(f==NULL){
            printf("Erro na abertura\n");
            system("pause");
            exit(1);
            }
    struct cadastro c;// Criei uma unica vaariavel aqui cadastro e eu qquero ler mas eu não quero ler a primeira posição
    fseek(f,2*sizeof(struct cadastro),SEEK_SET); /* Aqui estou dizendo que quero pular duas vezes o tamanho em bytes o tamanho de cada struct cadastro
                                                    Pensando no meu arquivo onde eu tenho 4 estruturas gravadas então eu estou no ponto inicial
                                                    quando pulo duas unidade vou para a terceira estrutura, ou seja o comando fseek me movimentou para
                                                    esse ponto da terceira estrutura, eu estava no inicio fui para a terceira posição do arquivo*

    fread(&c, sizeof(struct cadastro),1,f);     // Aqui ao mandar ele ler uma unica estrutura, eu vou ler os dados da terceira estrutura
    printf("%s\n%s\n%d\n",c.nome,c.rua,c.idade);// Aqui ponho o resultado impresso
                                                /*Então eu consegui pular dois regitros
                                                  que sao as duas primeiras estruturas
                                                  e acessei a terceira sem nunca ter lido
                                                  as duas primeiras


    fclose(f);
            */

              /*Outra coisa que posso fazer no arquivo é voltar no comeo dele
                Outra opção de movimentação dentro do arquivo é simplisment
                retornar para o seu inicio usando a função rewind()*

                //FORMA GERAL:
                void rewind(FILE*fp);/ Essa função é só para voltar no começo
                                        Por exemplo eu tenho que ler um arquivo
                                        duas vezes, u não vou simplismente fechar
                                        o arquivo e abri-lo novamente
                                      */

    // EXEMPLO SOBRE VOLTAR NO ARQUIVO:
        FILE *f = fopen("c:\\Projetos\\fseekrewind.txt","rb");// Novamente estou lendo meu arquivo onde foi salvo o vetor de cadastro
    if(f==NULL){
            printf("Erro na abertura\n");
            system("pause");
            exit(1);
            }
            struct cadastro c;
            fseek(f,2*sizeof(struct cadastro), SEEK_SET);// Fiz a função fseek() ou seja ei pulei duas posições
            rewind(f);// Aqui eu fiz um rewind que significa voltar par o começo
            fread(&c, sizeof(struct cadastro),1,f);// Aqui fiz um fread, onde estou lendo uma unica estrutura
            printf("%s\n%s\n%d\n",c.nome,c.rua,c.idade);// E aqui mandei imprimir, qual foi o resultado? meu primeiro registro
                                                        //Então eu voltei para o inicio mesmo tendo voltado para a terceira posição



    fclose(f);
    system("pause");
    return 0;
}
