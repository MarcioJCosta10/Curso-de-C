#include <stdio.h>
#include <stdlib.h>
        /*
        // EXEMPLO DE RECURS�O
        /* Crie uma fun��o recursiva que calcule o somat�rio de 1 a N

        // Precisamos sempre lembrar que para achar uma solu��o recursiva para um problema precisamos tentar generalizar ele
        soma(4) = 1+2+3+4 // Aqui observamos que uma parte do calculo � igual ao anterior
        soma(3) = 1+2+3   // Aqui observamos que uma parte do calculo � igual ao anterior
        soma(2) = 1+2     // Aqui observamos que uma parte do calculo � igual ao anterior
        soma(1) = 1       // Aqui observamos que uma parte do calculo � igual ao anterior

              //Ent�o da para generalizar de uma maneira recursiva
        //Eu posso dizer que:
        Soma (4) = 4 + soma(3);
        Soma (3) = 3 + soma(2);
        Soma (2) = 2 + soma(1);
        Soma (1) = 1 + soma(0);

        // NA REGRA GERAL 1�DESCOBRIR ISSO DAQUI:

        // Generalizando  // Aqui descobri minha regra geral, ent�o vou traduzir para a linguagem C;
        Soma (n) = n + Soma(n-1);
        //  Caso Base, eu j� sei o valor dele, j� est� determinado;
        Soma(0) = 0
        */

        // PARA DEPOIS TRADUZIR ISSO DAQUI, ASSIM QUE RESOVEMOS PROBLEMA COM RECURS�O:
        int Soma(int n){
            if(n == 0)
                return 0;
            else
                return n + soma(n-1); // Aqui � a tradu��o

        }


int main()
{

    return 0;
}
