#include <stdio.h>
#include <stdlib.h>

int fatorial (int n){//tipo int nome fatorial (par�metros)
 int i,f = 1;
 for(i=1;i<=n;i++)
        f = f* i;
    return f;//devolvendo para fun��o que chamou fatorial o valor calculado
}

int menu(){ // Exemplo onde a escrita e leitura e dentro do main
            //Essa fun��o n�o recebe nenhum par�metro e repete um numero de op��es se a escolha n�o estiver entre 1 e 3
int i;      // ESSA FUN��O TEM OPERA��ES DE LEITURA E ESCRITA POIS VAI ESCREVER TEXTOS SE FOR UMA FUN��O DE CALCULO EVITE COLOCAR OPERA��ES DE LEITURA E ESCRITA
do{
    printf("Escolha uma opcao: \n");
    printf("(1) Opcao 1\n");
    printf("(2) Opcao 2\n");
    printf("(3) Opcao 3\n");
    scanf("%d", &i);
}while((i<1) || (i>3));
return i; // No final retorna a op��o digitada
}


int main()
{   /*CORPO DA FUN��O: processa as entradas (par�metros), e
    gera saidas (return) da fun��o
    � formada por declara��es e comandos;
    � parecido com o que j� viemos executando no programa main();*/
    /*
    int x,y; // declara��es
    printf("Digite o valor de x:  %d\n");// chamadas das fun��es
    scanf("%d", &x); // chamadas das fun��es
    y = x*x; // Express�es aritim�ticas
    printf(" y = %d\n", y);// Gerar a sa�da
    */
    /*
    //EXEMPLO: CALCULO DO FATORIAL NO MAIN();
    int n, i,f = 1;
    printf("Digite n: ");
    scanf("%d", &n);
        for (i = 1; i<=n; i++)
            f = f*i;
    printf("fatorial de n = %d\n",f);*/

    //Exemplo: Fun��o fatorial
    int x,y; // No programa mantive as variaveis que est�o lendo meu numero
    printf("Digite n: ");
    scanf("%d", &x);
    y = fatorial(x);// aqui chamei a fun��o ent�o (y) recebe o valor da fun��o (fatorial) que receber� o par�mntro (x)
    printf("fatorial de n = %d\n",y);

    // Reutilizando a fun��o fatorial

    int y1 = fatorial(7);
    printf("10! = %d\n ", y1);
    printf("5! = %d\n", fatorial(5));// A fun��o main est� aguardando u mvalor inteiro e a fun��o retorna um inteiro;

    //Evite colocar as informa�oes de leitura e escrita dentro da fun��o, deixe para fazer isso dentro do main() - MAS ISSO N�O � UMA REGRA:
    int op = menu();
    printf("Vc escolheu a Opcao %d \n", op);






    system("pause");
    return 0;
}
