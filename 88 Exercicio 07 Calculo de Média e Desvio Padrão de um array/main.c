#include <stdio.h>
#include <stdlib.h>
            //VAMOS TRABLHAR COM FUNÇÃO PASSADA POR REFERENCIA
            /*Faça uma função que calcule a
            média e o desvio padrão de um
            vetor contendo N numeros;

            Bom: Uma função que retorna 2 numeros não vai fazer um return então eu vou ter
            que retornar esses valores média e desvio padrão pelos paramentros como referencia:
             Então vou retornar os dois por referência
            */
void calcular (int *vetor, int n, float *m, float *dp){// 5- Como foi definido a função?
                                                       // Do tipo void não retorna nada
                                                       // Nome Calcular e recebe o meu vertor por referencia(vetor são sempre passados por referencia *vetor)  int*vetor
                                                       // O tamanho do meu vetor int n
                                                       // O ponteiro para a média e o pornteiro para desvio padão *m *dp
                                                       // Então o endereço da média vem para *m e o endereço do desvio padrão vem para o *dp


int i;
*m = 0.0;       //6- Eu vou guardar a média no *m então *m recebe somente 0
for(i=0;i<n;i++){ // 7- A média é fazer um laço que percorra todos os elementos do meu vetor
                  // i =0 i < n
    *m = *m + vetor[i];// percorrendo o vetor na posição i, e pega esse valor e soma ao que já tenho no *M
                        // Então estou somando todos os valores do meu vetor e colocando no meu *m; E porque *m?
                        // E porque estou acessando *m? é que estou acessando o conteudo do meu *m
                        //Quando faço isso eu estou modificando o valor da minha variavel media
}                       // 8 - Chegando no final terminei laço, já percorri todos mundo e somei todo mundo
    *m = *m /n;     //9- Eu vou dividir essa soma por n, onde n é o tamanho do meu vetor é blz já tenho a média

                // Agora vou calcular o desvio padrão, o desvio padrão depende da média
*dp = 0.0;      //10 - *dp recebe 0, pois estou modificando o valor do meu desvio la no main
for (i=0; i<n;i++){//11- Novamente vou percorrer todo mundo no meu vetor
        *dp = *dp + pow(vetor[i]-*m,2);//12- Para calcular o desvio padrao
                                       // vou calcuar o valor do vetor (vetor[i])
                                       //menos o valor da média (*m) ao quadrado
                                       //Ai pega esse valor e vai somando ele dentro da variavel dp(la no conteudo de dp)
}
*dp = sqrt (*dp/(n-1));     //13- Chegou no final eu vou calcular a raiz dessa somatória dividido
                            // por n-1 e guarda no *dp, assim estou modificando odesvio


}                       // Conclusão: É um laço de uma equação matemática e passando por referencia os valores




int main()
{
    int v[10] = {1,2,3,4,5,6,7,8,9,10}; //1- Aqui fiz meu vetor
    float media, desvio;     //2- duas vairaveis float para média e desvio padrão
    calcular(v,10,&media,&desvio);//3 - Chamei a função calcualar onde eu passei meu vetor,o tamanho dele, o endereço da media e o endereço do desvio padrão
    printf("%f\n%f\n",media,desvio);//4- No final imprimo esses valores // 15 - Chguei no final e imprimo os valores

    system("pause");
    return 0;
}
