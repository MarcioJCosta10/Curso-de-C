#include <stdio.h>
#include <stdlib.h>
        "Modificador de Tipo Volatile"
    - Pode ser aplicada a qualquer declara��o de variavel,
    incluindo estruturas, uni�es e enumera�oes
    - Informa ao compilador que aquela variavel poder�
    ser alterada por outros meios e por esse motivo, ela
    "N�o deve ser OTIMIZADA"

    "Forma Geral"
    volatile tipo_variavel nome_variavel;

    "Exemplo"
    volatile int x;


    "PARA QUE SERVE ISSO"
    "Modificador de Tipo" volatile
    - O principal motivo para seu uso tem a ver com problemas
    que trabalham com
    - Sitemas din�micos
    - Em tempo real
    - Comunica��o com dispositivos de hardware mapeado na mem�ria


    VAMOS VER UM EXEMPLO

    -Considere o seguinte trecho de c�digo:
    //======================================
    int resposta;
    void espera(){   // Aqui tenho uma fun��o de espera
        resposta = 0;
        while (resposta != 255 ); //la�o infinito
    }
    //====================================

    - Um compilador otimizado notar� que nenhum outro
    c�digo pode modificar o valor da variavel "resposta"
    e substiruira a condi��o por 1, indicando assim
    tamb�m um la�o infinito, mas economizando a comparacao de
    variavel "resposta"
    //================================== Aqui � o c�digo otimizado
    int resposta;
    void espera(){
        resposta = 0;
        while (1); //continuo tendo o la�o infinito porem o compilador n�o
                   // ficar� consultando toda ves o valor se � diferente de 255
                   // e colocando o 1 dentro do wilhe contuo tendo o la�o infinito


    "VAMOS SUPOR QUE ISSO N�O � O QUE EU QUERO E VARIAVEL RESPOSTA ELA PODE SER MODIFICADA"

    - Vamos supor que a variavel resposta ela pode ser modificada, a qualquer momento, por um dispositivo
    de hardware mapeado na mem�ria RAM
    - Neste caso, seu valor pode ser modificado enquanto ela estiver sendo testada no comando
    while, finalizando o la�o
    - Para impedir que o compilador fa�a esse tipo de otimiza��o, utilizamos o modificador
    volatile
    //==================================================
    Como fa�o para impedir?: Uso o volatile ai o compilador n�o vai otimizar esse parametro do while pois el pode n�o ser infinito
                              vai depender do hardware que est� acessando essa posi��o de mem�ria dessa variavel

    volatile int resposta; // variavel n�o otimizada
    void espera(){
        resposta = 0;
        // la�o pode n�o ser infinito
        while(reposta!= 255);


    }
    //==================================================

    Por�m marcar uma variavel como volatile pode ser um exagero pois a ideia � que nos reutilizemos nossas variaves

    - Marcar uma variavel como volatile � um exagero
    - Esse modificador "desativa qualquer otimiza��o" dessa variavel
    - Uma alternativa muito mais eficiente � utilizar  "type cast" sempre que n�o quisermos,
    e apenas onde for necess�rio, otimizar a vari�vel
    //==================================================

    int resposta;
    void espera(){
        resposta = 0;
    //la�o pode n�o ser infinito
    while (*(volatile int * )&resposta) //   Eu mando interpretar ela dessa forma com um type-cast para volatile
                                        //   aqui o endere�o dessa variavel vai ser interpretada
                                        //   como um ponteiro para uma variavel do tipo INT com o modificador volatilte
                                        //   e eu estou acessando o conteudo dela
    }
    "Assim eu garanto que a variavel resposta em outros lugares ela ser� otimizada mas nesse caso aqui ela n�o ser� pois ela depende de alguma acesso de hardware que possa modificar ela"




























int main()
{
    printf("Hello world!\n");
    return 0;
}
