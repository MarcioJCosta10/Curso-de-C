#include <stdio.h>
#include <stdlib.h>
        //PONTEIROS GENÉRICO: Vimos anteriormente o ponteiro que só aponta para o mesmo tipo: Exmplo INT aponta para INT;
        //mas temos agora o Generico;

    /*PONTEIROS GENERICOS: Podem apontar
      para todos os tipos de dados existentes
      ou que ainda serão criados */

      //Forma Geral:
      void *nome_ponteiro;
      //Exemplo:
      void *v;// v é um ponteiro do tipo genérico

      /*Ponteiro Genérico: pode receber o endereço de qualquer coisa não importa se é inteiro float ou qq coisa, ele sempre aponta para um endereço não importa o tipo dele*/
      void *pp;
      int *p1, p2 = 10;
      p1 = &p2; // aqui o ponteiro p1 está apontando para o pontiro p2
      pp = &p2;// aqui pp que é meu ponterio genérico está recebendo o endereço de um Inteiro
      printf("Endereço em pp %p \n",pp);
      pp = &p1;// O meu ponterio genérico está recebendo o endereço de um ponteiro, então aqui um ponteiro aponta para outro ponteiro;
      printf("Endereço em pp %p \n",pp);
      pp = p1;//aqui p1 é um ponteiro e eu tinha armzenado em p1 o endereço de p2
      printf("Endereço em pp %p \n",pp);


      //CUIDADO PARA ACESSAR O CONTEUDO DO PONTEIRO GENÉRICO: Porque? Se ele é um ponteiro genérico ele não tem tipo e o acesso depende do tipo
      /* Antes de acessar o conteudo é preciso
         converter o ponteiro genérico para o
         tipo de ponteiro com o qual se deseja trabalhar */

        void *pp;
        int p2 = 10;
        pp = &p2;//Endereço de int
        printf("Conteudo: %d\n",*pp);//ERRO, pois pp é um ponteiro genérico e eu não sei qual é o tamnanho do tipo guardado, sendo genérico eu não sei quantas posições pegar na memória
                                     // Exemplo o tipo char ocupa uma posição de memória mas o tipo int ocupa 4 posições de memória
                                     // O que eu preciso fazer eu preciso converter esse ponteiro para algo conhecido:


        printf("Conteudo: %d\n",*(int*)pp;//  Então antes de acessar eu converto o endereço, aqui meu ponteiro genérico pp vai ser convertido via cast para int* para ´só depois acessar o conteudo dele


       // OUTRO PROBLEMA QUE TEMOS: Como eu não tenho tipo as operações aritmeticas funcioanam oomo no char, um bite por vez;
       /* As operações artméticas são sempre realizadas
          com base em uma unidade de memória (1byte)*/
                                  // Então aqui ele não respeitou o tipo pois ele considerou como se fosse o char
          void *p = 0x5DC; // 1500 // Se eu tivesse um aqui um int isso ia me dar problema
          printf("p = %d \n",p);
          p++;
          printf("p = %d \n",p);//1501
          p = p + 15;
          printf("p = %d \n",p);//1516
          p = p - 2;
          printf("p = %d \n",p);//1514
                                /*Então se eu for fazer uma operção artmetica no endereço guardado dentro de um ponteiro genérico
                                  eu programador tenho que levar em conta o tipo armazenado
                                  Então não posso fazer como fazia antes, se p = p + 15; fosse
                                  um inteiro e eu quisesse pular 15 posições teria que fazer p = p + 15 *4
                                  para ele saber que é a quantidade de um inteiro, com ponteiro para inteiro isso é automático*/




int main()
{
    system("Pause");
    return 0;
}
