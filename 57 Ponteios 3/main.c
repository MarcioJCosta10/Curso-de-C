#include <stdio.h>
#include <stdlib.h>
        //PONTEIROS GEN�RICO: Vimos anteriormente o ponteiro que s� aponta para o mesmo tipo: Exmplo INT aponta para INT;
        //mas temos agora o Generico;

    /*PONTEIROS GENERICOS: Podem apontar
      para todos os tipos de dados existentes
      ou que ainda ser�o criados */

      //Forma Geral:
      void *nome_ponteiro;
      //Exemplo:
      void *v;// v � um ponteiro do tipo gen�rico

      /*Ponteiro Gen�rico: pode receber o endere�o de qualquer coisa n�o importa se � inteiro float ou qq coisa, ele sempre aponta para um endere�o n�o importa o tipo dele*/
      void *pp;
      int *p1, p2 = 10;
      p1 = &p2; // aqui o ponteiro p1 est� apontando para o pontiro p2
      pp = &p2;// aqui pp que � meu ponterio gen�rico est� recebendo o endere�o de um Inteiro
      printf("Endere�o em pp %p \n",pp);
      pp = &p1;// O meu ponterio gen�rico est� recebendo o endere�o de um ponteiro, ent�o aqui um ponteiro aponta para outro ponteiro;
      printf("Endere�o em pp %p \n",pp);
      pp = p1;//aqui p1 � um ponteiro e eu tinha armzenado em p1 o endere�o de p2
      printf("Endere�o em pp %p \n",pp);


      //CUIDADO PARA ACESSAR O CONTEUDO DO PONTEIRO GEN�RICO: Porque? Se ele � um ponteiro gen�rico ele n�o tem tipo e o acesso depende do tipo
      /* Antes de acessar o conteudo � preciso
         converter o ponteiro gen�rico para o
         tipo de ponteiro com o qual se deseja trabalhar */

        void *pp;
        int p2 = 10;
        pp = &p2;//Endere�o de int
        printf("Conteudo: %d\n",*pp);//ERRO, pois pp � um ponteiro gen�rico e eu n�o sei qual � o tamnanho do tipo guardado, sendo gen�rico eu n�o sei quantas posi��es pegar na mem�ria
                                     // Exemplo o tipo char ocupa uma posi��o de mem�ria mas o tipo int ocupa 4 posi��es de mem�ria
                                     // O que eu preciso fazer eu preciso converter esse ponteiro para algo conhecido:


        printf("Conteudo: %d\n",*(int*)pp;//  Ent�o antes de acessar eu converto o endere�o, aqui meu ponteiro gen�rico pp vai ser convertido via cast para int* para �s� depois acessar o conteudo dele


       // OUTRO PROBLEMA QUE TEMOS: Como eu n�o tenho tipo as opera��es aritmeticas funcioanam oomo no char, um bite por vez;
       /* As opera��es artm�ticas s�o sempre realizadas
          com base em uma unidade de mem�ria (1byte)*/
                                  // Ent�o aqui ele n�o respeitou o tipo pois ele considerou como se fosse o char
          void *p = 0x5DC; // 1500 // Se eu tivesse um aqui um int isso ia me dar problema
          printf("p = %d \n",p);
          p++;
          printf("p = %d \n",p);//1501
          p = p + 15;
          printf("p = %d \n",p);//1516
          p = p - 2;
          printf("p = %d \n",p);//1514
                                /*Ent�o se eu for fazer uma oper��o artmetica no endere�o guardado dentro de um ponteiro gen�rico
                                  eu programador tenho que levar em conta o tipo armazenado
                                  Ent�o n�o posso fazer como fazia antes, se p = p + 15; fosse
                                  um inteiro e eu quisesse pular 15 posi��es teria que fazer p = p + 15 *4
                                  para ele saber que � a quantidade de um inteiro, com ponteiro para inteiro isso � autom�tico*/




int main()
{
    system("Pause");
    return 0;
}
