#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
        Faça uma função que receba como
        parametro o valor de um angulo
        em graus e calcule o valor do
        cosseno desse angulo usando sua
        respectiva série de Taylor:
                5       (-1)n   2n      x2    x4
    cos x = Somatorio  ------- X  =  x --- + ---- ...
               n = 0    (2n)!           2!   4!


    Somatório é uma sequência de somas que se repete e a equação da frente define cada termo
    somatorio fazemos usando um for
    fatorial fazemos usando uma sequencia de produtos

  */




   //1ª Coisa que vou fazer é a função do calculo do fatorial
int fatorial(int N){
        int i, f = 1;
        for (i=1; i<=N; i++){
            f = f*i;
        }
        return f;
}

  // 2º vou fazer a função do calculo do meu cosseno
float cosseno(float x ){
    int n;
    float c = 0.0;
    //3º Vou fazer meu somatório que é a sequencia de somas sucessivas
    for(n=0; n<=5; n++){
        c = c + pow(-1,n)* pow(x,2*n)/fatorial(2*n);
        }      // pow (-1,n)  é igual menos um elevado a N
                // estou multiplicando o de cima pelo debaixo
               // pow (x,2*n) é igual x elevado a 2N
               // tudo isso vai ser dividido pelo fatorial de 2N, o fatorial já esta definido na função acima
               // tem a variavel c que começa em zero(soma neutra)
               // então c recebe c mais os termos do meu somatório
               // no final retorno o valor de c que vai ser o valo do cosseno que eu calculei para um angulo x;
        return c;


}


int main(){
    float ang = 45.0; //graus
    ang = 3.141593 * ang/180.0; //aqui converti meu angulo para radianos, pois essa serie de taylor que definimos só funciona para radianos
    printf("Cosseno = %f\n", cosseno(ang)); // Aqui mandei imprimir o cosseno que eu calculei
    printf("Cos = %f\n",cos(ang));        // Aqui mandei imprimir o valor do cossen oque tem dentro da biblioteca math.h
                                          // vamos ver que osvalores estão bem proximos
                                          // o que define a precisao do nosso resultado e a quantiade de N, quanto maior o N mais preciso será os resultados
    system("pause");
    return 0;

}

