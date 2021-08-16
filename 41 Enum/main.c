#include <stdio.h>
#include <stdlib.h>


 /*
    //CONTIUANDO COM TIPOS QUE O PROGRAMADOR PODE CRIAR DENTRO DE C.

     ENUM
     A linguagem C nos permite tamb�m criar nossos pr�prios tipos de vari�veis.
     Al�m de struct e union, podemos criar uma enum tamb�m chamada de ENUMERA��O

     //FORMA GERAL
     enum nome_enum {lista de identificadores};

     */

     /*DEFININDO UMA ENUMERA��O*/

enum semana {Domingo, Segunda , Terca , Quarta , Quinta , Sexta , Sabado}; // Os capos das vari�veis s�o identificadores
//enum semana {Domingo=1, Segunda , Terca , Quarta=7 , Quinta , Sexta , Sabado}; //definindo valores
enum escapes {retrocesso = '\b', tabulacao = '\t', novalinha = '\n'};

// � n�o pode ser usando

int main()
{   /*Uma enumera��o pode ser vista como uma lista de constantes, onde cada costante possui um numero significativo */
    /*Declara��o de uma vari�vel enum*/
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

    // VIMOS QUE A ENUM SEMPRE COME�A COM ZERO MAS PODEMOS DEFINIR VALORES ESPEC�FICOS PARA CADA IDENTIFICADOR


    printf("Domingo = %d \n",Domingo);
    printf("Segunda = %d \n",Segunda);
    printf("Ter�a = %d \n",Terca);
    printf("Quarta = %d \n",Quarta);
    printf("Quinta = %d \n",Quinta);
    printf("Sexta = %d \n",Sexta);
    printf("Sabado = %d \n",Sabado);


    /* Pode-se atribuir valores da tabela ASCII para a numera��o*/
    enum escapes e = novalinha;
    printf("Tesde %c de %c escrita %c novamente testando \n",e,e,e);
    e=tabulacao;
    printf("Tesde %c de %c escrita %c novamente %c testando \n",e,e,e,e);

     system("pause");
    return 0;
}
