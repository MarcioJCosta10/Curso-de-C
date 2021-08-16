#include <stdio.h>
#include <stdlib.h>

            /*  Faça um programa que calcule o
                menor número divisivel por cada
                um dos números de 1 a 10:

                Então vamos descobrir qual é o
                menor numero divisivel por todos
                numeros de 1 a 10,
                então eu tenho um numero e quero
                saber se é divisivel
                por todos numeros de 1 a 10.

                Alem disso quero descobrir qual
                é o menor numero divisivel
            */
            /*
                1º Tratar dos numeros que são deivisiveis por 1 a10


            */

int main()
{
        int N, nro;
        N = nro = 10;       // Aqui inicializei a variavel como 10 pois se um numero é divisivel por 10 ele será menor ou igual a 10
        int i, achou = 0;
        while(achou == 0){ // Enquanto achou for igual a zero eu vou continuar fazendo todo esses teste
                            // quando o achou for diferente eu vou entrar no laço e vou imprimir o meu numero e vou terminar o meu laço, pois ele não é mais zero
        achou = 1;
                                 // se eu quero saber se meu nro é divisível por numeros de 1 a 10 vou ter que percoerrer os numero de 1 a 10
        for(i = 2; i<=N ; i++){  // Aqui vou percorre de 2 a 10 ( N é o 10)
            if (nro % i != 0){   // Sempre verivicando se o meu numero quando dividido por i o resto dele é diferente de 0 se não siginifca wue nro não é o numero que estou procurando então não preciso continuar fazendo as divisões
                achou = 0;       // Digamos que o meu numero é 12 ele vai sendo dividido até 5 quando chegar no 5 não seá mais divisível vai dizer que o achou é diferente de 0 vai dar um break
                                 // Ai o programa sai do laço e vai para o segundo if
                break;
            }
        }
        if (achou == 1)             // Aqui pergunta achou é igual a zero? não ai vou para o else
                                    // Se meu achou é igual a 1 quer dizer que ele nunca entrou no primeiro if então me achou é divisivel por todos os meus valores de i
        printf("Nro = %d\n",nro);   // então esse é o numero que eu estava procurando
        else
            nro = nro + 2;           // Somo mais dois no numero, meu numero já começou cm 10 então vou sempre andando de 2 em dois porque tem quer ser um numero par para ser divisivel por 2 não preciso percorrer os impares

        }
                                    /* Até aqui esse trecho de código está percorrendo e fazendo todos os testes apenas para o meu numero 10
                                       Então eu tenho que fazer isso até achar um numero que satisfaça essa condição;
                                       Então basta fazer  só mais um comando de repetição o while()
                                    */
    system("pause");
    return 0;
}
