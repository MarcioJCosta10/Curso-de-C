#include <stdio.h>
#include <stdlib.h>
//#define N 100
#define N 5 // Aqui torna o c�digo gen�rico em rela��o ao numero de alunos
int main()
{
   /*
   Vetores - Array:
   Primeiro relembrando sobre vari�veis:
   --Toda vari�vel pode guardar somente um valor por vez:

   float x =10;
   printf("X = %f\n", x);
   x = 20 ; // Ao mudar de valor essa variavel perde o valor anterior;
   printf("X = %f", x);


   AGORA: Vamos pensar em um probelma:
   Quero que o meu programa leia a nota de 5 estudantes e imprima o
   as notas maiores do que a m�dia da turma:
   Uma soul��o seria esse c�digo grande e repetitivo:

   float n1, n2, n3, n4, n5;
   printf("Digite a nota de 05 estudantes: \n");
        scanf("%f", &n1);
        scanf("%f", &n2);
        scanf("%f", &n3);
        scanf("%f", &n4);
        scanf("%f", &n5);
        float media = (n1+n2+n3+n4+n5)/5.0;
        if(n1>media)printf("A nota: %f \n",n1);
        if(n2>media)printf("A nota: %f \n",n2);
        if(n3>media)printf("A nota: %f \n",n3);
        if(n4>media)printf("A nota: %f \n",n4);
        if(n5>media)printf("A nota: %f \n",n5);


     Array
    Conjunto de variaveis do mesmo tipo usando o mesmo nome

    // FORMA GERAL:
        tipo nome_array[100 posi��es na mem�ria];
        // para guradar a nota de 100 alunos
        float notas [100];

        COISAS QUE TENHO QUE TER EM MENTE AO DECLARAR UM ARRAY:
        O tamanho de um array deve ser sempre um valor ou express�o inteira e constante
        int n = 5;
        float F[N+1];//CORRETO
        char texto[30];//CORRETO
        int Vetor [n];//ERRADO
        int V[4.5];//ERRADO


        FORA ISSO TUDO BEM:

            Acesso aos elementos: por meio de um �ndice:
            float notas[100];
            notas[0]=81;// PRIMEIRO �NDICE
            notas[1]=55;// SEGUNDO �NDICE
            notas [99]=72;// �LTIMO �NDICE

        COMO CADA POSI��O DE UM ARREY � UMA VARI�VEL ENT�O POSSO FAZER TUDO
        QUE FAZIA COM VARI�VEL COM ELE:

        Cada posi��o do um array � uma vari�vel:
            float nota[100], vetor [100];
            scanf("%d", &nota[]);//COMANDOS DE LEITURA
            notas [0] = 10; // COMANDOS DE ATRIBUI��O
            notas [1] = notas [5] + notas [0]; //EXPRESS�O
            notas = vetor; //ERRADO ATRIBUIR ARRAY INTEIRO O PROGRAMA N�O SABE
        */

        float notas [N], media = 0.0;
        int i;
        for (i=0; i < N; i++){
            printf("Digite a nota do aluno: \n",i);
            scanf("%f", &notas[i]);
            media = media + notas[i];
        }
        media = media /N;
        for(i = 0 ; i < N; i++){
            if(notas[i] > media)
                printf("Aluno %d: %.2f\n",i,notas[i]);


        }



   system("pause");
    return 0;
}
