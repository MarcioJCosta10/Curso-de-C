#include <stdio.h>
#include <stdlib.h>
float raiz (float r);// Tenho aqui dois prot�tipos de fun��o, n�o vou precisar me preocupar com o corpo da fun��o agora;
int soma (int x,int y);


int main()
{
    /*
    // PARAMENTROS DE UMA FUN��O: � como passamos a informa��o do programa principal para a fun��o ou de uma fun��o para outra;
    Par�mentros da fun��o: Permite ao programador passar uma iforma��o de um trecho de c�digo para dentro da fun��o
    float raiz(float r);// Declara��o de um par�mento � igual a declara��o de uma vari�vel
    int soma(int x, int y);
    int soma(int x, y);//ERRADO: Sempre que definir o paramentro tenho que definir o tipo e um tipo n�o pode ter dois parmentro;
    float exponencial(float a , float b);// N�o precisa ser paramentros do mesmo tipo;
    */

    float k,w = 5.4;
    k = raiz (w);
    k = raiz(5.4);
    k = raiz();//ERRO POIS A FUN��O RAIZ PRECISA RECEBER UM VALOR DO TIPO FLOAT
    k = raiz(w,5.4);// DA MESMO FORMA EST� ERRADO TENTAR PASSAR 02 VALORES SENDO QUE A FUN��O S� TEM UM

    int x, y = 1, z=2; // O NOME QUE VOCE USOU PARA DECLARAR NA FUN�A� N�O TEM NADA A VER COM O NOME USADO AQUI
    x = soma(y,z);;;   // QUANDO DECLARAMOS Y E Z ELE SER� ATRIBUIDO A SEUS CAMPOS CORRESPONDENTE DENTRO DA FUN��O  X E Y;
    x = soma (1,2);
    x = soma(y,2);



    // EU N�O SOU OBRIGADO A PASSAR UM PARAMENTRO PARA A FUN��O EU POSSO TER UMA FUN��O SEM PA�MENTRO;
    /*  Fun��es sem par�mentros : basta deixar a lista vazia ou no lugar colocar a palavra void
    */
    float leitura(); // os dos indica que a fun��o n�o tem par�mento
    int le_arquivo(void);// mas exste uma diferen�a entr eles;

    //PROT�TIPOS
    float leitura();// Porque aqui  n�o est� vindo nenhum paramtro
    float le_arquivo(void);//Se declara voir e  quiser passar algum valor dentro do parentese dar� erro pois a fun��o e void;

     int main(){

        float y;
        y = leitura();
        y = leitura (5);     // Simplesmente o siste ignora o que est� dentro dos parentes
        y = leitura (5,'a'); //

        int x;
        x = le_arquivo;
        x = le_arquivo(5);//ERRO ele vai acusar que tem valos que n�o foram solicitados;





    }




    system("pause");
    return 0;
}
