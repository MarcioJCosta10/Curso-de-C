#include <stdio.h>
#include <stdlib.h>
#include <string.h>

        /*A linguagem C possui algumas fun��es que permitem a manipula��o de "mem�ria"
    Essas fun��es est�o na biblioteca "string.h"
    - "memset" : preenchimento de mem�ria
    - "memcpy" : c�pia de mem�ria
    - "memmove": c�pia de mem�ria (maneira mais segura)
    - "memcmp" : compara��o de mem�ria
    - "memchr" : busca de mem�ria

    S�o fun��es em baixo n�vel - byte por byte na mem�ria

    "Fun��o memset()"
    - Preenche (inicializa) uma quantidade de mem�ria(PODE SER UMA: variavel, UMA: estrutura, UM: array, UMA: matriz etc)
      s� que eu vou inicializar essa mem�ria com um determinado valor de "byte", ou seja um �nico byte

    "Forma geral"
    void *memset (void* P, int V, size_t N);

    "Entrada"
    - "P" : ponteiro para a regi�o da mem�ria que ser� preenchida
    - "V" : valor usado para preencher a mem�ria.(usei um int) O valor ser� convertido automaticamente para unsigned char
           (n�o importa que seja um int vou pegar os oito bits menos significativos(ou seja o primeiro byte))
    -"N"  : n�mero de bytes que ser�o preenchidos n�o � necess�riamente o tamanho do array, se eu quiser preencher o vetor
            tenho que multiplicar a quantidade de byte pela quantidade de posi��es do vetor)

    "Retorno"
    - Retorna um c�pia do ponteiro "P"
    - Retorna "NULL" em caso de ERRO


"Exemplo"




int main()
{   char str[50] = "Exemplo de String em C"; // Tenho um string de 50 caracteres com uma frase
    puts(str);                               // Mandei imprimir ela
    memset(str,'!',7);                        // Vou colocar uma exclama��o na minha sgtring nos 7 primeiros bytes
    puts(str);                               // Na string cada posi��o � um char ou seja cada  posi��o tem um unico  byte

    return 0;
}                               "Esse exemplo � simples, o problema � quando temos um numero maior de bytes"

void imprime(int* v, int n){ // Criei um fun��o imprime para n�o ter que ficar escrvendo toda hora no main
    int i;
    for (i=0; i<n; i++)
        printf("%d, ",v[i]);
        printf("\n");
}
int main(){
    int v[5] = {1,2,3,4,5};
    imprime(v,5);

    memset(v,0,4); // mandou colocar o valor 0 nas 4 primeiras posi��es
    imprime(v,5);

    memset(v,0,20); // mandou colocar o valor 0 em todos os bytes - sempre preenche da primeira posi��o at� a ultima
    imprime(v,5);
}

"CUIDADO POIS AQUI TEMOS UM PROBLEMA"
void imprime(int* v, int n){            // Criei um fun��o imprime para n�o ter que ficar escrvendo toda hora no main novamente
    int i;                              // 168430090 = 00001010 00001010 00001010 00001010
    for (i=0; i<n; i++)
        printf("%d, ",v[i]);            // 1802 = 00000111 00001010
    printf("\n");                       // 10  = 00001010
}
int main(){
    int v[5] = {1,2,3,4,5};
    imprime(v,5);

    memset(v,1802,4); // quero preencher com o numero 1802 - mas 1802 n�o � um �nico byte 1802 = 00000111 | 00001010 preciso de 2 bytes para representar esse valor
                      // Lembra que a fun��o memset converte para unsigned char ou seja os oito bytes iniciais s�o jogados fora, vou trabalhar s� com essa parte (00001010)
                      // Ai entendo que estou preenchedo os 4 primeiros bytes com 10
                      // Vai imprimir o numero 168430090, pois os quatro bytes foram preenchidos com 00001010 ficando assim :00001010000010100000101000001010 que equivale a 168430090
    imprime(v,5);

    memset(v,1802,5); // aqui percebermos que o segundo byte ser� 10 pois o quinto byte j� pertence ao segundo n�mero
    imprime(v,5);




/
"Fun��o memcpy()"
- Quero fazer copia de uma certa quantidade de "bytes" de uma �rea de mem�ria para outra
- Ambas as regi�es de mem�ria s�o tratadas como unsigned char ent�o far� c�pia byte a byte

"Forma geral"
void* memcpy(void* dest, void* orig, size_t N); // Passo um ponteiro para a origem, um ponteiro para o destino e o tamanho
"Entrada "
- "dest" : ponteiro para a regi�o de mem�ria que receber� os dados copiados
- "orig" : ponteiro para a regi�o de mem�ria de onde os dados ser�o copiados
- "N"    : n�mero de "bytes"  que ser�o copiados.
N�o � necess�riamente o tamanho do array  � o n�mero de bytes

"Retorno"
- Retorna uma c�pia do ponteiro "dest"
- Retorna "NULL" em caso de erro

"Fun��o memcpy"
- � a fun��o mais r�pida de c�pia entre as posi��es de mem�ria
"Cuidado"
-Seu comportamento � indefinido se existir sobreposi��o de mem�ria
"Exemplo"
char str[16];
memcpy(&str[0], &str[3], 10);
        1�pos , 4�pos   , copiar 10bytes //  |0|0000000 POSI��O ZERO VAI RECEBER
                                         //  000|0|0000 POSI��O QUATRO SER� COPIADA
                                         //  NESSE CASO A POSI��O DA PARTE DE CIMA SER� SOBREPOSTA
                                         // Entao quando eu usa a fun��o memcpy tenho que garantir que n�o existe sobreposi��o


"Exemplo"
/
void imprime(int* v, int n){ // Criei um fun��o imprime para n�o ter que ficar escrvendo toda hora no main novamente
    int i;
    for (i=0; i<n; i++)
        printf("%d, ",v[i]);
    printf("\n");
}
int main(){
      int x[5]={-1,-1,-1,-1,-1};
      int v[5]={1,2,3,4,5};

      imprime(x,5);
      memcpy(x,v,4); // mandei copiar os 4 primeiros bytes do vetor v para o vetor x
      imprime(x,5);
      memcpy(x,v,20); // mandei copiar os 20 primeiros bytes do vetor v para x
      imprime(x,5);
      system("pause");

      return 0;

}
 "Aqui tenho outro caso em uma struct"  */

struct pessoa{ // Tenho uma struct pessoa

        char nome[50];
        int idade;

}
int main(){
    struct pessoa p1 = {"andree", 34};
    struct pessoa p2;

    memcpy(&p2,&p1,sizeof(struct pessoa));
    printf("%s: %d\n",p2.nome,p2.idade);

    system("pause");
    return 0;
}






