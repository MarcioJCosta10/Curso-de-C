#include <stdio.h>
#include <stdlib.h>


 /*
    //CONTIUANDO COM TIPOS QUE O PROGRAMADOR PODE CRIAR DENTRO DE C.

     ENUM
     A linguagem C nos permite também criar nossos próprios tipos de variáveis.
     Além de struct e union, podemos criar uma enum também chamada de ENUMERAÇÃO

     //FORMA GERAL
     enum nome_enum {lista de identificadores};

     */

     /*DEFININDO UMA ENUMERAÇÃO*/

enum semana {Domingo, Segunda , Terca , Quarta , Quinta , Sexta , Sabado}; // Os capos das variáveis são identificadores
//enum semana {Domingo=1, Segunda , Terca , Quarta=7 , Quinta , Sexta , Sabado}; //definindo valores
enum escapes {retrocesso = '\b', tabulacao = '\t', novalinha = '\n'};

// ç não pode ser usando

int main()
{   /*Uma enumeração pode ser vista como uma lista de constantes, onde cada costante possui um numero significativo */
    /*Declaração de uma variável enum*/
    enum semana s,s1,s2,s3;
    s = Terca; // 2
    s1=Segunda;// 1
    s2= Terca;// 2
    s3= s1+s2; // 1+2
    printf("O valor de s eh %d\n",s);
    printf("Domingo = %d \n",Domingo);//0
    printf("s1=%d\n",s1);
    printf("s2=%d\n",s2);
    printf("s3=%d\n",s3);
        if(s3==Quarta)
            printf("S3 Igual a Quarta\n");

    // VIMOS QUE A ENUM SEMPRE COMEÇA COM ZERO MAS PODEMOS DEFINIR VALORES ESPECÍFICOS PARA CADA IDENTIFICADOR


    printf("Domingo = %d \n",Domingo);
    printf("Segunda = %d \n",Segunda);
    printf("Terça = %d \n",Terca);
    printf("Quarta = %d \n",Quarta);
    printf("Quinta = %d \n",Quinta);
    printf("Sexta = %d \n",Sexta);
    printf("Sabado = %d \n",Sabado);


    /* Pode-se atribuir valores da tabela ASCII para a numeração*/
    enum escapes e = novalinha;
    printf("Tesde %c de %c escrita %c novamente testando \n",e,e,e);
    e=tabulacao;
    printf("Tesde %c de %c escrita %c novamente %c testando \n",e,e,e,e);

     system("pause");
    return 0;
}
