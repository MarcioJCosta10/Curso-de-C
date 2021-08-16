#include <stdio.h>
#include <stdlib.h>

        /*
            "O tipo long long int"
        Em C, o tipo short int possui 16 bits
        enquanto o tipo long int possui 32 bits.

        Existe agora um novo tipo inteiro, o
        long long int, o qual define um inteiro de 64  bits

        Como os demais tipos, este pode ser com ou sem sinal
        ( unsigned long long int)

        Tamb�m foram adicionado os sufixos  "LL" e o "ULL" para as especifica��es das constantes
        literais dos tipos long long int e unsigned long long int

        Foram adicionados os especificadores de tipos "%lld" e "%llu"  para inteiro com e sem sinal,
        respectivamente, para uso com as fun��es printf() e scanf()
        */


int main()
{
    long long int n1=123456789123456789LL;
    printf("n1 = %lld\n",n1);

    return 0;
}
