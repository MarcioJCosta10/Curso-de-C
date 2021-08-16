#include <stdio.h>
#include <stdlib.h>

 /*
    // Retorno de uma fun��o: � como ela vai devolver a informa��o para quem chamou a fun��o no caso o main ou outra fun��o

     � como uma fun��o devolve o seu resultado(se ele existir ) para quem a chamou

    //Forma Geral:
    tipo nome_fun��o (par�metros){
        conjunto de declara��es e comandos
        return express�o;// O return � que vai devolver a informa��o da fun��o  para quem a chamou, pode ser uma exprss�o ou uma vari�vel
                         // Essa express�o tem que ser do mesmo tipo da fun��o, se declarei minha fun��o do tipo int a express�o tem que resultar no tipo int tamb�m
    }
    //Tipos do return:
         int, char, double, float
         void; // N�o retorna informa��o nenhuma
         struct;
         ponteiros

         Um "array" s� pode ser retornado se estiver dentro de uma
         struct // Vetores e matrizes n�o pode ser retornado, s� se for membro de uma struct;
    */

void imprime (int n){ // fun��o sem retorno
    int i;
    for(i = 1; i<=n; i++)
        printf("Linha %d\n",i); // fun��o que vai fazer a impress�o dos n numeros

}
int soma(int x,int y){// soma � do tipo inteiro os parametros s�o do tipo inteiro
    return x+y;// o Retorno � do tipo inteiro

}

int maior (int x1, int y ){ // Uma fun��o pode ter mais de um comando return
    if (x1 > y)
        return x1;//primeiro caso de retorno
    else
        return y;// segundo caso de retorno

     printf("Fim da fun��o ");// Cuidado pois na hora que o return for executado a fun��o termina n�o importa o que vier depois dela
}                             /* Nesse caso a fun��o printf nunca ser� executada Porque? se eu entrar no primeiro return a fun��o termina
                               se eu entrar no segundo else a fun��o termina, ent�o nunca chega at� a fun��o printf, quase igual ao Break */


void imprime_log(float x){// Aqui temos uma infun��o, � do tipo void e n�o retorna nada, nome imprime_log, que recebe um parmetro x do tipo float
    if (x <=0 )
        return;// Aqui se meu x for igual a zero n�o tem como imprimir o logartmo, e simplimente termina a fun��o
    printf("Log = %f\n", log(x));// Essa fun��o vai imprimir o logaritmo


}


int main()
{
    //Fun��o do tipo void n�o tem return
    imprime(5);// Como � do tipo void simplismente chamo a fun��o e passo os paramentros; para ela na hora que for usar ela;


    /* Fun��o que n�o seja do tipo void devem sempre retornar um valor.
    Para cham�-la, basta atribuir a chamada da fun��o (nome e par�mentro)
    a uma vari�vel. */
    int x = soma (5,4);// Se a fun��o retorna um valor alguem tel que receber esse valor nesse caso int x
    printf("x = %d\n",x);
    printf("soma = %d\n", soma(2,3));// Posso usar ela direto no printf a fun��o soma retorna um tipo inteiro e o printf est� esperando um inteiro
                                     // Ent�o n�o ha problemas



   //Uma fun��o pode ter mais de um comando return
   int x1 = maior(5,4); // O valor de um dos dois return ser� atribuido a variavel x;
   printf("Maior = %d \n",x1);


   /*  O Comando return pode ser usado sem uma express�o para terminar uma fun��o do tipo void*/
   float f;
   printf("Digite f: ");
   scanf("%f", &f);
   imprime_log(f);


    system("pause");
    return 0;
}
