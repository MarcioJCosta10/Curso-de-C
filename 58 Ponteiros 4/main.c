#include <stdio.h>
#include <stdlib.h>
            //PONTEIROS TRABALHANDO JUNTO COM ARRAY
            /*  Array: � um conjunto de dados armazenados de forma sequencial*/
            /*  O nome do vetor � como se fosse um ponteiro para onde ele come�a*/
            int vet[5] = {1,2,3,4,5};
            int *p = vet;// Ent�o eu posso fazer isso, se eu pegar um outro ponteiro do mesmo tipo do vetor(nesse caso tipo int) e receber o nome do vetor(o nome do vetor � o endere�o dele), ent�o o que eu fiz? eu criei um ponteiro p que aponta para ele(o vetor)
            int i;
            for(i = 0; i < 5; i++)
            printf("%d \n",p[i]);// E ai eu posso trabalhar com o vetor usando p(isso � o que faziamos l� na pasagem por refer�cia quando tinhamos um paramento declarado da formma de um ponteiro e dentro da fun~��o continuavamos trabalhando com o vetor ou matriz da mesma maneira que trabalhava fora da fun��o)
                                 //Ent�o um array � a mesma coisa que um ponteiro, ent�o um ponteiro pode receber o endere�o de um array e trabalhar de forma indexada em cima dele


    /* Ent�o o nome do array � apenas um
       ponteiro que aponta para o
       primeiro elemento do array.*/
       int vet[5] = {1,2,3,4,5};
       int *p = vet;
       int i;
       for(i=0;i<5;i++)
            printf("%d\n",*(p+i));// Eu posso acessar usando ponteiro de duas maneiras o centeudo, usamos antes a nota��o p[i](que� a simplifica��o de *(p+i))
                                  // *(p+i) quer dizer eu quero o conteudo de p+0(= a 1), depois p+1(= a 2) depois p+2( = a 3) ...
                                  // ent�o p[i]  � uma simplifica��o de soma no endere�o e acessa o conteudo

  /*  A nota��o de colchetes � apenas
      uma simplifica��o da artimetica de
      ponteiros com acesso ao conteudo. */
      int vet [5] = {1,2,3,4,5};
      printf("vet[2] = %d\n",vet[2]);// aqui eu quero acessar a posi�ao 2 do meu Array ent�o eu posso acessa assim // considerando como um array mesmo vet [2]
      printf("vet[2] = %d\n",*(vet+2));// ou assim // como vimos o nome do array � um ponteiro, ent�o vet + 2 (*) acessa o conteudo
                            /* S� Refor�ando: Vetores e Matrizes s�o ponteiros para regi�es de mem�ria onde est�o guardados os nossos dados*/
                            // Por isso que a passagem deles � por refer�necia;

   // ALEM DE ACESSAR O CONTEUDO EU POSSO ACESSAR O ENDERE�O DE CADA POSI��O
   /* Acessando o endere�o de um elemento do array*/
   int vet[5] = {1,2,3,4,5};
        printf("Ender�o do elemento: &vet[2] = %d\n",&vet[2]);// Aqui digamos que meu vet inicia na posi��o #10 vet na posi��o 2 � #12, nesse caso eu estou pegando o valor do endere�lo #12
        printf("Ender�o do elemento: &vet[2] = %d\n",(vet+2));// Aqui � a mesma coisa, n�o precisa do (*) na frente pois eu quero endere�o inicial onde come�a meu vetor + duas posi��es que � #12

  // PENSANDO NESSA QUEST�O DE PONTEIROS E ARRAYS DEVEMOS TOMAR CUIDADO EM:
  /* Tamb�m podemos declarar um array de ponteiros*/
   /*Sabemos que um array j� � um ponteiro s� que a linguagem C nos permite declarar um array de ponteiros
      ou seja eu vou criar um vetor onde cada posi��o, na� ser� do tipo dado, mas ser� um ponteiro para esse tipo*/

  //Forma Geral:
  tipo_dado *nome_array[tamanho];
  int *vet[5];// Arrey de 5 ponteiros // Aqui eu criei um vetor de 5 posi��es, s� que cada uma dessas posi��es n�o � um inteiro e sim um ponteiro para inteiro
              // Ent�o em cada posi��o eu tenho um ponteiro que vai apontar para outra regi�o de mem�ria
              //Simplesmente um vetor onde cada posi��o pode guardar um endere�o de mem�ria do tipo inteiro

      //E PRA QUE SERVE ISSO?
     // Eu posso guardar diferentes tipos de dados em cada posi��o do meu veotr
     /* Cada elemento do array pode apontar
        para um endere�o de mem�ria , seja ele de
        uma vari�vel ou de um array */
        int *pvet[2];// Ent�o eu tenho aqui um vetor que pode guardar 2 endere�os
        int x = 10, y[2]= [20,30];// Aqui criei uma vari�vel e um outro vetor de duas posi��es
        pvet[0] = &x;// E ai eu coloquei o ender�o de x na minha primeira posi��o do meu vetor de ponteiros
        pvet[1] = y;// e o endere�o de y na segunda posi��o do meu vetor

        printf("pvet[0]: %p\n",pvet[0]);//&x //Ao imprimir vou imprimir o endere�o de x (&x);

        printf("pvet[1]: %p\n",pvet[1]);//&y[0] //Aqui vou imprimir o endere�o da primeira posi��o do meu vetor (&y[0])ou seja o endere�o onde est� guardado o valor 20;

        printf("*pvet[0]: %d\n",*pvet[0]);//x//Aqui eu quero o conteudo(*) dentro do primeiro endere�o, ent�o o conteudo dentro do endere�o de x que � o proprio x

        printf("pvet[1][1]: %d\n",pvet[1][1]);//y[1]//pvet[1] � o endere�o onde come�ava meu vetor y[1], s� que � um vetor ent�o eu tenho duas situa��es
                                              //  Ent�o eu quero o conteudo da posi�o 1// pvet[1] endere�o [1] conteudo
                                              // Ent�o com um vetor de ponteiros eu consigo criar uma matriz, esse � o principio de matrizes,








int main()
{


    return 0;
}
