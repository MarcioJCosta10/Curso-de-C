#include <stdio.h>
#include <stdlib.h>

            /*  Fa�a um programa que calcule o
                menor n�mero divisivel por cada
                um dos n�meros de 1 a 10:

                Ent�o vamos descobrir qual � o
                menor numero divisivel por todos
                numeros de 1 a 10,
                ent�o eu tenho um numero e quero
                saber se � divisivel
                por todos numeros de 1 a 10.

                Alem disso quero descobrir qual
                � o menor numero divisivel
            */
            /*
                1� Tratar dos numeros que s�o deivisiveis por 1 a10


            */

int main()
{
        int N, nro;
        N = nro = 10;       // Aqui inicializei a variavel como 10 pois se um numero � divisivel por 10 ele ser� menor ou igual a 10
        int i, achou = 0;
        while(achou == 0){ // Enquanto achou for igual a zero eu vou continuar fazendo todo esses teste
                            // quando o achou for diferente eu vou entrar no la�o e vou imprimir o meu numero e vou terminar o meu la�o, pois ele n�o � mais zero
        achou = 1;
                                 // se eu quero saber se meu nro � divis�vel por numeros de 1 a 10 vou ter que percoerrer os numero de 1 a 10
        for(i = 2; i<=N ; i++){  // Aqui vou percorre de 2 a 10 ( N � o 10)
            if (nro % i != 0){   // Sempre verivicando se o meu numero quando dividido por i o resto dele � diferente de 0 se n�o siginifca wue nro n�o � o numero que estou procurando ent�o n�o preciso continuar fazendo as divis�es
                achou = 0;       // Digamos que o meu numero � 12 ele vai sendo dividido at� 5 quando chegar no 5 n�o se� mais divis�vel vai dizer que o achou � diferente de 0 vai dar um break
                                 // Ai o programa sai do la�o e vai para o segundo if
                break;
            }
        }
        if (achou == 1)             // Aqui pergunta achou � igual a zero? n�o ai vou para o else
                                    // Se meu achou � igual a 1 quer dizer que ele nunca entrou no primeiro if ent�o me achou � divisivel por todos os meus valores de i
        printf("Nro = %d\n",nro);   // ent�o esse � o numero que eu estava procurando
        else
            nro = nro + 2;           // Somo mais dois no numero, meu numero j� come�ou cm 10 ent�o vou sempre andando de 2 em dois porque tem quer ser um numero par para ser divisivel por 2 n�o preciso percorrer os impares

        }
                                    /* At� aqui esse trecho de c�digo est� percorrendo e fazendo todos os testes apenas para o meu numero 10
                                       Ent�o eu tenho que fazer isso at� achar um numero que satisfa�a essa condi��o;
                                       Ent�o basta fazer  s� mais um comando de repeti��o o while()
                                    */
    system("pause");
    return 0;
}
