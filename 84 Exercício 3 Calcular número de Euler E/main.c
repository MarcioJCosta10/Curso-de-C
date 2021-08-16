#include <stdio.h>
#include <stdlib.h>

            /*Fa�a um programa que dado um valor N
            inteiro e positivo, calcule e mostre
            o valor de E, conforme a f�rmula a seguir

            E = 1 + 1/1! + 1/2! + 1/3! ...1+N!

            1� Temos que entender o problema:
                Perceba que temos varias somas sucessivas, ent�o eu tenho algo que est� se repetindo
                ent�o a primeira coisa a se fazer e uma repeti��o, eu preciso repetir a minha soma
            */
int main()
{
    int N=30;          // Vamos dizer que vou calcular o N igual a 10
    int i, j;          // Defini algumas vari�veis
    float f, E = 1.0;  // E defini meu E igual a 1.0 pois o todos termos tem um divis�o pelo fatorial e 1.0 e igual a 1/0!;
    for (i=1; i<=N; i++){ // Aqui fiz um for e assim vou garantir meu somat�rio // Relebrando que fatoria � N! = N.(N-1)...1 3!=3.2.1
                          // Ent�o percebemos que o fatorial � um conjunto de produtos em sequencia
                          //Ent�o vou usar tambem um for para repeti��o desse conjunto de produtos

        f=1;               // Aqui ent�o � o calculo do meu fatorial onde digo que meu fatorial come�a com 1
        for(j=1;j<=i;j++){  // Aqui � a repetic��o para meu fatorial // Usei j<=i pois i ser� o termo do meu fatorial d
            f = f*j;       // Aqui est� o fatorial


        }


        E = E + 1.0/ f; //Onde E vai recever E + 1.0 sobre o fatorial a depender do termo do meu somat�rio/ ao terminar o claculo do fatorial eu subistituo o f
    }
    printf("E = %f\n",E);

   system("pause");
    return 0;
}
