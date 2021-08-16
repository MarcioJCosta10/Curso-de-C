#include <stdio.h>
#include <stdlib.h>

            /*Faça um programa que dado um valor N
            inteiro e positivo, calcule e mostre
            o valor de E, conforme a fórmula a seguir

            E = 1 + 1/1! + 1/2! + 1/3! ...1+N!

            1º Temos que entender o problema:
                Perceba que temos varias somas sucessivas, então eu tenho algo que está se repetindo
                então a primeira coisa a se fazer e uma repetição, eu preciso repetir a minha soma
            */
int main()
{
    int N=30;          // Vamos dizer que vou calcular o N igual a 10
    int i, j;          // Defini algumas variáveis
    float f, E = 1.0;  // E defini meu E igual a 1.0 pois o todos termos tem um divisão pelo fatorial e 1.0 e igual a 1/0!;
    for (i=1; i<=N; i++){ // Aqui fiz um for e assim vou garantir meu somatório // Relebrando que fatoria é N! = N.(N-1)...1 3!=3.2.1
                          // Então percebemos que o fatorial é um conjunto de produtos em sequencia
                          //Então vou usar tambem um for para repetição desse conjunto de produtos

        f=1;               // Aqui então é o calculo do meu fatorial onde digo que meu fatorial começa com 1
        for(j=1;j<=i;j++){  // Aqui é a repeticção para meu fatorial // Usei j<=i pois i será o termo do meu fatorial d
            f = f*j;       // Aqui está o fatorial


        }


        E = E + 1.0/ f; //Onde E vai recever E + 1.0 sobre o fatorial a depender do termo do meu somatório/ ao terminar o claculo do fatorial eu subistituo o f
    }
    printf("E = %f\n",E);

   system("pause");
    return 0;
}
