#include <stdio.h>
#include <stdlib.h>
        /*
        // EXEMPLO DE RECURSÃO
        /* Crie uma função recursiva que calcule o somatório de 1 a N

        // Precisamos sempre lembrar que para achar uma solução recursiva para um problema precisamos tentar generalizar ele
        soma(4) = 1+2+3+4 // Aqui observamos que uma parte do calculo é igual ao anterior
        soma(3) = 1+2+3   // Aqui observamos que uma parte do calculo é igual ao anterior
        soma(2) = 1+2     // Aqui observamos que uma parte do calculo é igual ao anterior
        soma(1) = 1       // Aqui observamos que uma parte do calculo é igual ao anterior

              //Então da para generalizar de uma maneira recursiva
        //Eu posso dizer que:
        Soma (4) = 4 + soma(3);
        Soma (3) = 3 + soma(2);
        Soma (2) = 2 + soma(1);
        Soma (1) = 1 + soma(0);

        // NA REGRA GERAL 1ºDESCOBRIR ISSO DAQUI:

        // Generalizando  // Aqui descobri minha regra geral, então vou traduzir para a linguagem C;
        Soma (n) = n + Soma(n-1);
        //  Caso Base, eu já sei o valor dele, já está determinado;
        Soma(0) = 0
        */

        // PARA DEPOIS TRADUZIR ISSO DAQUI, ASSIM QUE RESOVEMOS PROBLEMA COM RECURSÃO:
        int Soma(int n){
            if(n == 0)
                return 0;
            else
                return n + soma(n-1); // Aqui é a tradução

        }


int main()
{

    return 0;
}
