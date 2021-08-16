#include <stdio.h>
#include <stdlib.h>

 /*
    // Retorno de uma função: É como ela vai devolver a informação para quem chamou a função no caso o main ou outra função

     É como uma função devolve o seu resultado(se ele existir ) para quem a chamou

    //Forma Geral:
    tipo nome_função (parâmetros){
        conjunto de declarações e comandos
        return expressão;// O return é que vai devolver a informação da função  para quem a chamou, pode ser uma exprssão ou uma variável
                         // Essa expressão tem que ser do mesmo tipo da função, se declarei minha função do tipo int a expressão tem que resultar no tipo int também
    }
    //Tipos do return:
         int, char, double, float
         void; // Não retorna informação nenhuma
         struct;
         ponteiros

         Um "array" só pode ser retornado se estiver dentro de uma
         struct // Vetores e matrizes não pode ser retornado, só se for membro de uma struct;
    */

void imprime (int n){ // função sem retorno
    int i;
    for(i = 1; i<=n; i++)
        printf("Linha %d\n",i); // função que vai fazer a impressão dos n numeros

}
int soma(int x,int y){// soma é do tipo inteiro os parametros são do tipo inteiro
    return x+y;// o Retorno é do tipo inteiro

}

int maior (int x1, int y ){ // Uma função pode ter mais de um comando return
    if (x1 > y)
        return x1;//primeiro caso de retorno
    else
        return y;// segundo caso de retorno

     printf("Fim da função ");// Cuidado pois na hora que o return for executado a função termina não importa o que vier depois dela
}                             /* Nesse caso a função printf nunca será executada Porque? se eu entrar no primeiro return a função termina
                               se eu entrar no segundo else a função termina, então nunca chega até a função printf, quase igual ao Break */


void imprime_log(float x){// Aqui temos uma infunção, é do tipo void e não retorna nada, nome imprime_log, que recebe um parmetro x do tipo float
    if (x <=0 )
        return;// Aqui se meu x for igual a zero não tem como imprimir o logartmo, e simplimente termina a função
    printf("Log = %f\n", log(x));// Essa função vai imprimir o logaritmo


}


int main()
{
    //Função do tipo void não tem return
    imprime(5);// Como é do tipo void simplismente chamo a função e passo os paramentros; para ela na hora que for usar ela;


    /* Função que não seja do tipo void devem sempre retornar um valor.
    Para chamá-la, basta atribuir a chamada da função (nome e parâmentro)
    a uma variável. */
    int x = soma (5,4);// Se a função retorna um valor alguem tel que receber esse valor nesse caso int x
    printf("x = %d\n",x);
    printf("soma = %d\n", soma(2,3));// Posso usar ela direto no printf a função soma retorna um tipo inteiro e o printf está esperando um inteiro
                                     // Então não ha problemas



   //Uma função pode ter mais de um comando return
   int x1 = maior(5,4); // O valor de um dos dois return será atribuido a variavel x;
   printf("Maior = %d \n",x1);


   /*  O Comando return pode ser usado sem uma expressão para terminar uma função do tipo void*/
   float f;
   printf("Digite f: ");
   scanf("%f", &f);
   imprime_log(f);


    system("pause");
    return 0;
}
