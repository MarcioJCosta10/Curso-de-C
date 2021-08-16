#include <stdio.h>
#include <stdlib.h>
            //PONTEIROS TRABALHANDO JUNTO COM ARRAY
            /*  Array: É um conjunto de dados armazenados de forma sequencial*/
            /*  O nome do vetor é como se fosse um ponteiro para onde ele começa*/
            int vet[5] = {1,2,3,4,5};
            int *p = vet;// Então eu posso fazer isso, se eu pegar um outro ponteiro do mesmo tipo do vetor(nesse caso tipo int) e receber o nome do vetor(o nome do vetor é o endereço dele), então o que eu fiz? eu criei um ponteiro p que aponta para ele(o vetor)
            int i;
            for(i = 0; i < 5; i++)
            printf("%d \n",p[i]);// E ai eu posso trabalhar com o vetor usando p(isso é o que faziamos lá na pasagem por referêcia quando tinhamos um paramento declarado da formma de um ponteiro e dentro da fun~ção continuavamos trabalhando com o vetor ou matriz da mesma maneira que trabalhava fora da função)
                                 //Então um array é a mesma coisa que um ponteiro, então um ponteiro pode receber o endereço de um array e trabalhar de forma indexada em cima dele


    /* Então o nome do array é apenas um
       ponteiro que aponta para o
       primeiro elemento do array.*/
       int vet[5] = {1,2,3,4,5};
       int *p = vet;
       int i;
       for(i=0;i<5;i++)
            printf("%d\n",*(p+i));// Eu posso acessar usando ponteiro de duas maneiras o centeudo, usamos antes a notação p[i](queé a simplificação de *(p+i))
                                  // *(p+i) quer dizer eu quero o conteudo de p+0(= a 1), depois p+1(= a 2) depois p+2( = a 3) ...
                                  // então p[i]  é uma simplificação de soma no endereço e acessa o conteudo

  /*  A notação de colchetes é apenas
      uma simplificação da artimetica de
      ponteiros com acesso ao conteudo. */
      int vet [5] = {1,2,3,4,5};
      printf("vet[2] = %d\n",vet[2]);// aqui eu quero acessar a posiçao 2 do meu Array então eu posso acessa assim // considerando como um array mesmo vet [2]
      printf("vet[2] = %d\n",*(vet+2));// ou assim // como vimos o nome do array é um ponteiro, então vet + 2 (*) acessa o conteudo
                            /* Só Reforçando: Vetores e Matrizes são ponteiros para regiões de memória onde estão guardados os nossos dados*/
                            // Por isso que a passagem deles é por referênecia;

   // ALEM DE ACESSAR O CONTEUDO EU POSSO ACESSAR O ENDEREÇO DE CADA POSIÇÃO
   /* Acessando o endereço de um elemento do array*/
   int vet[5] = {1,2,3,4,5};
        printf("Enderço do elemento: &vet[2] = %d\n",&vet[2]);// Aqui digamos que meu vet inicia na posição #10 vet na posição 2 é #12, nesse caso eu estou pegando o valor do endereçlo #12
        printf("Enderço do elemento: &vet[2] = %d\n",(vet+2));// Aqui é a mesma coisa, não precisa do (*) na frente pois eu quero endereço inicial onde começa meu vetor + duas posições que é #12

  // PENSANDO NESSA QUESTÃO DE PONTEIROS E ARRAYS DEVEMOS TOMAR CUIDADO EM:
  /* Também podemos declarar um array de ponteiros*/
   /*Sabemos que um array já é um ponteiro só que a linguagem C nos permite declarar um array de ponteiros
      ou seja eu vou criar um vetor onde cada posição, naõ será do tipo dado, mas será um ponteiro para esse tipo*/

  //Forma Geral:
  tipo_dado *nome_array[tamanho];
  int *vet[5];// Arrey de 5 ponteiros // Aqui eu criei um vetor de 5 posições, só que cada uma dessas posições não é um inteiro e sim um ponteiro para inteiro
              // Então em cada posição eu tenho um ponteiro que vai apontar para outra região de memória
              //Simplesmente um vetor onde cada posição pode guardar um endereço de memória do tipo inteiro

      //E PRA QUE SERVE ISSO?
     // Eu posso guardar diferentes tipos de dados em cada posição do meu veotr
     /* Cada elemento do array pode apontar
        para um endereço de memória , seja ele de
        uma variável ou de um array */
        int *pvet[2];// Então eu tenho aqui um vetor que pode guardar 2 endereços
        int x = 10, y[2]= [20,30];// Aqui criei uma variável e um outro vetor de duas posições
        pvet[0] = &x;// E ai eu coloquei o enderço de x na minha primeira posição do meu vetor de ponteiros
        pvet[1] = y;// e o endereço de y na segunda posição do meu vetor

        printf("pvet[0]: %p\n",pvet[0]);//&x //Ao imprimir vou imprimir o endereço de x (&x);

        printf("pvet[1]: %p\n",pvet[1]);//&y[0] //Aqui vou imprimir o endereço da primeira posição do meu vetor (&y[0])ou seja o endereço onde está guardado o valor 20;

        printf("*pvet[0]: %d\n",*pvet[0]);//x//Aqui eu quero o conteudo(*) dentro do primeiro endereço, então o conteudo dentro do endereço de x que é o proprio x

        printf("pvet[1][1]: %d\n",pvet[1][1]);//y[1]//pvet[1] é o endereço onde começava meu vetor y[1], só que é um vetor então eu tenho duas situações
                                              //  Então eu quero o conteudo da posião 1// pvet[1] endereço [1] conteudo
                                              // Então com um vetor de ponteiros eu consigo criar uma matriz, esse é o principio de matrizes,








int main()
{


    return 0;
}
