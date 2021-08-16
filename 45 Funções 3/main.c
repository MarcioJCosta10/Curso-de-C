#include <stdio.h>
#include <stdlib.h>

int fatorial (int n){//tipo int nome fatorial (parâmetros)
 int i,f = 1;
 for(i=1;i<=n;i++)
        f = f* i;
    return f;//devolvendo para função que chamou fatorial o valor calculado
}

int menu(){ // Exemplo onde a escrita e leitura e dentro do main
            //Essa função não recebe nenhum parâmetro e repete um numero de opções se a escolha não estiver entre 1 e 3
int i;      // ESSA FUNÇÃO TEM OPERAÇÕES DE LEITURA E ESCRITA POIS VAI ESCREVER TEXTOS SE FOR UMA FUNÇÃO DE CALCULO EVITE COLOCAR OPERAÇÕES DE LEITURA E ESCRITA
do{
    printf("Escolha uma opcao: \n");
    printf("(1) Opcao 1\n");
    printf("(2) Opcao 2\n");
    printf("(3) Opcao 3\n");
    scanf("%d", &i);
}while((i<1) || (i>3));
return i; // No final retorna a opção digitada
}


int main()
{   /*CORPO DA FUNÇÃO: processa as entradas (parâmetros), e
    gera saidas (return) da função
    É formada por declarações e comandos;
    É parecido com o que já viemos executando no programa main();*/
    /*
    int x,y; // declarações
    printf("Digite o valor de x:  %d\n");// chamadas das funções
    scanf("%d", &x); // chamadas das funções
    y = x*x; // Expressões aritiméticas
    printf(" y = %d\n", y);// Gerar a saída
    */
    /*
    //EXEMPLO: CALCULO DO FATORIAL NO MAIN();
    int n, i,f = 1;
    printf("Digite n: ");
    scanf("%d", &n);
        for (i = 1; i<=n; i++)
            f = f*i;
    printf("fatorial de n = %d\n",f);*/

    //Exemplo: Função fatorial
    int x,y; // No programa mantive as variaveis que estão lendo meu numero
    printf("Digite n: ");
    scanf("%d", &x);
    y = fatorial(x);// aqui chamei a função então (y) recebe o valor da função (fatorial) que receberá o parâmntro (x)
    printf("fatorial de n = %d\n",y);

    // Reutilizando a função fatorial

    int y1 = fatorial(7);
    printf("10! = %d\n ", y1);
    printf("5! = %d\n", fatorial(5));// A função main está aguardando u mvalor inteiro e a função retorna um inteiro;

    //Evite colocar as informaçoes de leitura e escrita dentro da função, deixe para fazer isso dentro do main() - MAS ISSO NÃO É UMA REGRA:
    int op = menu();
    printf("Vc escolheu a Opcao %d \n", op);






    system("pause");
    return 0;
}
