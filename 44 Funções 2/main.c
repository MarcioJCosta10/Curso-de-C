#include <stdio.h>
#include <stdlib.h>
float raiz (float r);// Tenho aqui dois protótipos de função, não vou precisar me preocupar com o corpo da função agora;
int soma (int x,int y);


int main()
{
    /*
    // PARAMENTROS DE UMA FUNÇÃO: É como passamos a informação do programa principal para a função ou de uma função para outra;
    Parâmentros da função: Permite ao programador passar uma iformação de um trecho de código para dentro da função
    float raiz(float r);// Declaração de um parâmento é igual a declaração de uma variável
    int soma(int x, int y);
    int soma(int x, y);//ERRADO: Sempre que definir o paramentro tenho que definir o tipo e um tipo não pode ter dois parmentro;
    float exponencial(float a , float b);// Não precisa ser paramentros do mesmo tipo;
    */

    float k,w = 5.4;
    k = raiz (w);
    k = raiz(5.4);
    k = raiz();//ERRO POIS A FUNÇÃO RAIZ PRECISA RECEBER UM VALOR DO TIPO FLOAT
    k = raiz(w,5.4);// DA MESMO FORMA ESTÁ ERRADO TENTAR PASSAR 02 VALORES SENDO QUE A FUNÇÃO SÓ TEM UM

    int x, y = 1, z=2; // O NOME QUE VOCE USOU PARA DECLARAR NA FUNÇAÕ NÃO TEM NADA A VER COM O NOME USADO AQUI
    x = soma(y,z);;;   // QUANDO DECLARAMOS Y E Z ELE SERÁ ATRIBUIDO A SEUS CAMPOS CORRESPONDENTE DENTRO DA FUNÇÃO  X E Y;
    x = soma (1,2);
    x = soma(y,2);



    // EU NÃO SOU OBRIGADO A PASSAR UM PARAMENTRO PARA A FUNÇÃO EU POSSO TER UMA FUNÇÃO SEM PAÂMENTRO;
    /*  Funções sem parâmentros : basta deixar a lista vazia ou no lugar colocar a palavra void
    */
    float leitura(); // os dos indica que a função não tem parâmento
    int le_arquivo(void);// mas exste uma diferença entr eles;

    //PROTÓTIPOS
    float leitura();// Porque aqui  não está vindo nenhum paramtro
    float le_arquivo(void);//Se declara voir e  quiser passar algum valor dentro do parentese dará erro pois a função e void;

     int main(){

        float y;
        y = leitura();
        y = leitura (5);     // Simplesmente o siste ignora o que está dentro dos parentes
        y = leitura (5,'a'); //

        int x;
        x = le_arquivo;
        x = le_arquivo(5);//ERRO ele vai acusar que tem valos que não foram solicitados;





    }




    system("pause");
    return 0;
}
