#include <stdio.h>
#include <stdlib.h>

union tipo{
    short int x; // 16 bits
    unsigned char c[2]; // 16 bits

            // Por ser uma union eu gasto só 16 bits
            // sem union seria 32 bits
 };

 int main()
{
 /*
    Por que usar UNION?
    1) Economia de memória:se seus campos nunca são usados ao mesmo tempo, não faz sentido
    reservar espaço para os dois. */

    union tipo v;
        v.x = 1545;
        printf("x = %d\n", v.x);

        v.c[0] = 'a';
        v.c[1]= 'b';
        printf("c[0] = %c\n",v.c[0]);
        printf("c[1] = %c\n",v.c[0]);

    /* Por que usar uma UNIOS?
    2) manipulação de bits: uma union permite fazer acessos controlados a nivel de bits. permite ter acesso a nivel bits simplificado*/
    //EXEMPLO SEM UNION
    short int x  = 1545;//00000110 00001001 // Aqui eu quero dividir os bits no meio em duas parte c0{00000110} c1{00001001}
    unsigned char c0, c1;                   // Eu posso fazer isso usado as operações bit a bit como nesse codigo:
    c0= 0x00FF & x; //00001001 -> 9  // Aqui estou fazendo uma operação & bit a bit em cima do x para pegar o valor c0
    c1= x>> 8; //00000110 -> 6 // Aqui estou fazendo um deslocamento a direita para pegar o valor c1
    printf("x = %d\n", x);
    printf("c0 = %d\n",c0);
    printf("c0 = %d\n",c1);

    // EXEMPLO COM UNION
    Um dos usos mais comum de uma união é unir um tipo básico a um array de tipos menores

    /*
    short int x; // Aqui eu tenho 16 bits
    unsigned char c[2]; // Aqui tbm 16 bits mas o vetor de char cada posição tem 8 bits
                        Então eu tenho:
                            x
                      c0        c1
                      ao acessar cada posição do vetor eu já tenho os resultados sem precisar
                      efetuar nenhuma operação, basta acessar os capos, a própria união separou o valor para mim;

    */

    union tipo v;
    v.x = 1545;// 00000110 00001001
    printf("x = %d \n", v.x);
    // 00000110 -> 9
    printf("c[0] = %d \n", v.c[0]);
    //00001001 -> 6
    printf("c[1] = %d \n", v.c[1]);



    system("pause");
    return 0;
}
