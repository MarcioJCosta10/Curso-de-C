#include <stdio.h>
#include <stdlib.h>
#include <string.h>

        /*A linguagem C possui algumas funções que permitem a manipulação de "memória"
    Essas funções estão na biblioteca "string.h"
    - "memset" : preenchimento de memória
    - "memcpy" : cópia de memória
    - "memmove": cópia de memória (maneira mais segura)
    - "memcmp" : comparação de memória
    - "memchr" : busca de memória

    São funções em baixo nível - byte por byte na memória

    "Função memset()"
    - Preenche (inicializa) uma quantidade de memória(PODE SER UMA: variavel, UMA: estrutura, UM: array, UMA: matriz etc)
      só que eu vou inicializar essa memória com um determinado valor de "byte", ou seja um único byte

    "Forma geral"
    void *memset (void* P, int V, size_t N);

    "Entrada"
    - "P" : ponteiro para a região da memória que será preenchida
    - "V" : valor usado para preencher a memória.(usei um int) O valor será convertido automaticamente para unsigned char
           (não importa que seja um int vou pegar os oito bits menos significativos(ou seja o primeiro byte))
    -"N"  : número de bytes que serão preenchidos não é necessáriamente o tamanho do array, se eu quiser preencher o vetor
            tenho que multiplicar a quantidade de byte pela quantidade de posições do vetor)

    "Retorno"
    - Retorna um cópia do ponteiro "P"
    - Retorna "NULL" em caso de ERRO


"Exemplo"




int main()
{   char str[50] = "Exemplo de String em C"; // Tenho um string de 50 caracteres com uma frase
    puts(str);                               // Mandei imprimir ela
    memset(str,'!',7);                        // Vou colocar uma exclamação na minha sgtring nos 7 primeiros bytes
    puts(str);                               // Na string cada posição é um char ou seja cada  posição tem um unico  byte

    return 0;
}                               "Esse exemplo é simples, o problema é quando temos um numero maior de bytes"

void imprime(int* v, int n){ // Criei um função imprime para não ter que ficar escrvendo toda hora no main
    int i;
    for (i=0; i<n; i++)
        printf("%d, ",v[i]);
        printf("\n");
}
int main(){
    int v[5] = {1,2,3,4,5};
    imprime(v,5);

    memset(v,0,4); // mandou colocar o valor 0 nas 4 primeiras posições
    imprime(v,5);

    memset(v,0,20); // mandou colocar o valor 0 em todos os bytes - sempre preenche da primeira posição até a ultima
    imprime(v,5);
}

"CUIDADO POIS AQUI TEMOS UM PROBLEMA"
void imprime(int* v, int n){            // Criei um função imprime para não ter que ficar escrvendo toda hora no main novamente
    int i;                              // 168430090 = 00001010 00001010 00001010 00001010
    for (i=0; i<n; i++)
        printf("%d, ",v[i]);            // 1802 = 00000111 00001010
    printf("\n");                       // 10  = 00001010
}
int main(){
    int v[5] = {1,2,3,4,5};
    imprime(v,5);

    memset(v,1802,4); // quero preencher com o numero 1802 - mas 1802 não é um único byte 1802 = 00000111 | 00001010 preciso de 2 bytes para representar esse valor
                      // Lembra que a função memset converte para unsigned char ou seja os oito bytes iniciais são jogados fora, vou trabalhar só com essa parte (00001010)
                      // Ai entendo que estou preenchedo os 4 primeiros bytes com 10
                      // Vai imprimir o numero 168430090, pois os quatro bytes foram preenchidos com 00001010 ficando assim :00001010000010100000101000001010 que equivale a 168430090
    imprime(v,5);

    memset(v,1802,5); // aqui percebermos que o segundo byte será 10 pois o quinto byte já pertence ao segundo número
    imprime(v,5);




/
"Função memcpy()"
- Quero fazer copia de uma certa quantidade de "bytes" de uma área de memória para outra
- Ambas as regiões de memória são tratadas como unsigned char então fará cópia byte a byte

"Forma geral"
void* memcpy(void* dest, void* orig, size_t N); // Passo um ponteiro para a origem, um ponteiro para o destino e o tamanho
"Entrada "
- "dest" : ponteiro para a região de memória que receberá os dados copiados
- "orig" : ponteiro para a região de memória de onde os dados serão copiados
- "N"    : número de "bytes"  que serão copiados.
Não é necessáriamente o tamanho do array  é o número de bytes

"Retorno"
- Retorna uma cópia do ponteiro "dest"
- Retorna "NULL" em caso de erro

"Função memcpy"
- É a função mais rápida de cópia entre as posições de memória
"Cuidado"
-Seu comportamento é indefinido se existir sobreposição de memória
"Exemplo"
char str[16];
memcpy(&str[0], &str[3], 10);
        1ªpos , 4ªpos   , copiar 10bytes //  |0|0000000 POSIÇÃO ZERO VAI RECEBER
                                         //  000|0|0000 POSIÇÃO QUATRO SERÁ COPIADA
                                         //  NESSE CASO A POSIÇÃO DA PARTE DE CIMA SERÁ SOBREPOSTA
                                         // Entao quando eu usa a função memcpy tenho que garantir que não existe sobreposição


"Exemplo"
/
void imprime(int* v, int n){ // Criei um função imprime para não ter que ficar escrvendo toda hora no main novamente
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






