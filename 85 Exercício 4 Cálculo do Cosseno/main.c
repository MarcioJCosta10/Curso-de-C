#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
        Fa�a uma fun��o que receba como
        parametro o valor de um angulo
        em graus e calcule o valor do
        cosseno desse angulo usando sua
        respectiva s�rie de Taylor:
                5       (-1)n   2n      x2    x4
    cos x = Somatorio  ------- X  =  x --- + ---- ...
               n = 0    (2n)!           2!   4!


    Somat�rio � uma sequ�ncia de somas que se repete e a equa��o da frente define cada termo
    somatorio fazemos usando um for
    fatorial fazemos usando uma sequencia de produtos

  */




   //1� Coisa que vou fazer � a fun��o do calculo do fatorial
int fatorial(int N){
        int i, f = 1;
        for (i=1; i<=N; i++){
            f = f*i;
        }
        return f;
}

  // 2� vou fazer a fun��o do calculo do meu cosseno
float cosseno(float x ){
    int n;
    float c = 0.0;
    //3� Vou fazer meu somat�rio que � a sequencia de somas sucessivas
    for(n=0; n<=5; n++){
        c = c + pow(-1,n)* pow(x,2*n)/fatorial(2*n);
        }      // pow (-1,n)  � igual menos um elevado a N
                // estou multiplicando o de cima pelo debaixo
               // pow (x,2*n) � igual x elevado a 2N
               // tudo isso vai ser dividido pelo fatorial de 2N, o fatorial j� esta definido na fun��o acima
               // tem a variavel c que come�a em zero(soma neutra)
               // ent�o c recebe c mais os termos do meu somat�rio
               // no final retorno o valor de c que vai ser o valo do cosseno que eu calculei para um angulo x;
        return c;


}


int main(){
    float ang = 45.0; //graus
    ang = 3.141593 * ang/180.0; //aqui converti meu angulo para radianos, pois essa serie de taylor que definimos s� funciona para radianos
    printf("Cosseno = %f\n", cosseno(ang)); // Aqui mandei imprimir o cosseno que eu calculei
    printf("Cos = %f\n",cos(ang));        // Aqui mandei imprimir o valor do cossen oque tem dentro da biblioteca math.h
                                          // vamos ver que osvalores est�o bem proximos
                                          // o que define a precisao do nosso resultado e a quantiade de N, quanto maior o N mais preciso ser� os resultados
    system("pause");
    return 0;

}

