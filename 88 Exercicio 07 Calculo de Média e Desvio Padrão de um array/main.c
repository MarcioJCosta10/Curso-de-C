#include <stdio.h>
#include <stdlib.h>
            //VAMOS TRABLHAR COM FUN��O PASSADA POR REFERENCIA
            /*Fa�a uma fun��o que calcule a
            m�dia e o desvio padr�o de um
            vetor contendo N numeros;

            Bom: Uma fun��o que retorna 2 numeros n�o vai fazer um return ent�o eu vou ter
            que retornar esses valores m�dia e desvio padr�o pelos paramentros como referencia:
             Ent�o vou retornar os dois por refer�ncia
            */
void calcular (int *vetor, int n, float *m, float *dp){// 5- Como foi definido a fun��o?
                                                       // Do tipo void n�o retorna nada
                                                       // Nome Calcular e recebe o meu vertor por referencia(vetor s�o sempre passados por referencia *vetor)  int*vetor
                                                       // O tamanho do meu vetor int n
                                                       // O ponteiro para a m�dia e o pornteiro para desvio pad�o *m *dp
                                                       // Ent�o o endere�o da m�dia vem para *m e o endere�o do desvio padr�o vem para o *dp


int i;
*m = 0.0;       //6- Eu vou guardar a m�dia no *m ent�o *m recebe somente 0
for(i=0;i<n;i++){ // 7- A m�dia � fazer um la�o que percorra todos os elementos do meu vetor
                  // i =0 i < n
    *m = *m + vetor[i];// percorrendo o vetor na posi��o i, e pega esse valor e soma ao que j� tenho no *M
                        // Ent�o estou somando todos os valores do meu vetor e colocando no meu *m; E porque *m?
                        // E porque estou acessando *m? � que estou acessando o conteudo do meu *m
                        //Quando fa�o isso eu estou modificando o valor da minha variavel media
}                       // 8 - Chegando no final terminei la�o, j� percorri todos mundo e somei todo mundo
    *m = *m /n;     //9- Eu vou dividir essa soma por n, onde n � o tamanho do meu vetor � blz j� tenho a m�dia

                // Agora vou calcular o desvio padr�o, o desvio padr�o depende da m�dia
*dp = 0.0;      //10 - *dp recebe 0, pois estou modificando o valor do meu desvio la no main
for (i=0; i<n;i++){//11- Novamente vou percorrer todo mundo no meu vetor
        *dp = *dp + pow(vetor[i]-*m,2);//12- Para calcular o desvio padrao
                                       // vou calcuar o valor do vetor (vetor[i])
                                       //menos o valor da m�dia (*m) ao quadrado
                                       //Ai pega esse valor e vai somando ele dentro da variavel dp(la no conteudo de dp)
}
*dp = sqrt (*dp/(n-1));     //13- Chegou no final eu vou calcular a raiz dessa somat�ria dividido
                            // por n-1 e guarda no *dp, assim estou modificando odesvio


}                       // Conclus�o: � um la�o de uma equa��o matem�tica e passando por referencia os valores




int main()
{
    int v[10] = {1,2,3,4,5,6,7,8,9,10}; //1- Aqui fiz meu vetor
    float media, desvio;     //2- duas vairaveis float para m�dia e desvio padr�o
    calcular(v,10,&media,&desvio);//3 - Chamei a fun��o calcualar onde eu passei meu vetor,o tamanho dele, o endere�o da media e o endere�o do desvio padr�o
    printf("%f\n%f\n",media,desvio);//4- No final imprimo esses valores // 15 - Chguei no final e imprimo os valores

    system("pause");
    return 0;
}
