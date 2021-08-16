#include <stdio.h>
#include <stdlib.h>
        "Modificador de Tipo Volatile"
    - Pode ser aplicada a qualquer declaração de variavel,
    incluindo estruturas, uniões e enumeraçoes
    - Informa ao compilador que aquela variavel poderá
    ser alterada por outros meios e por esse motivo, ela
    "Não deve ser OTIMIZADA"

    "Forma Geral"
    volatile tipo_variavel nome_variavel;

    "Exemplo"
    volatile int x;


    "PARA QUE SERVE ISSO"
    "Modificador de Tipo" volatile
    - O principal motivo para seu uso tem a ver com problemas
    que trabalham com
    - Sitemas dinâmicos
    - Em tempo real
    - Comunicação com dispositivos de hardware mapeado na memória


    VAMOS VER UM EXEMPLO

    -Considere o seguinte trecho de código:
    //======================================
    int resposta;
    void espera(){   // Aqui tenho uma função de espera
        resposta = 0;
        while (resposta != 255 ); //laço infinito
    }
    //====================================

    - Um compilador otimizado notará que nenhum outro
    código pode modificar o valor da variavel "resposta"
    e substiruira a condição por 1, indicando assim
    também um laço infinito, mas economizando a comparacao de
    variavel "resposta"
    //================================== Aqui é o código otimizado
    int resposta;
    void espera(){
        resposta = 0;
        while (1); //continuo tendo o laço infinito porem o compilador não
                   // ficará consultando toda ves o valor se é diferente de 255
                   // e colocando o 1 dentro do wilhe contuo tendo o laço infinito


    "VAMOS SUPOR QUE ISSO NÃO É O QUE EU QUERO E VARIAVEL RESPOSTA ELA PODE SER MODIFICADA"

    - Vamos supor que a variavel resposta ela pode ser modificada, a qualquer momento, por um dispositivo
    de hardware mapeado na memória RAM
    - Neste caso, seu valor pode ser modificado enquanto ela estiver sendo testada no comando
    while, finalizando o laço
    - Para impedir que o compilador faça esse tipo de otimização, utilizamos o modificador
    volatile
    //==================================================
    Como faço para impedir?: Uso o volatile ai o compilador não vai otimizar esse parametro do while pois el pode não ser infinito
                              vai depender do hardware que está acessando essa posição de memória dessa variavel

    volatile int resposta; // variavel não otimizada
    void espera(){
        resposta = 0;
        // laço pode não ser infinito
        while(reposta!= 255);


    }
    //==================================================

    Porém marcar uma variavel como volatile pode ser um exagero pois a ideia é que nos reutilizemos nossas variaves

    - Marcar uma variavel como volatile é um exagero
    - Esse modificador "desativa qualquer otimização" dessa variavel
    - Uma alternativa muito mais eficiente é utilizar  "type cast" sempre que não quisermos,
    e apenas onde for necessário, otimizar a variável
    //==================================================

    int resposta;
    void espera(){
        resposta = 0;
    //laço pode não ser infinito
    while (*(volatile int * )&resposta) //   Eu mando interpretar ela dessa forma com um type-cast para volatile
                                        //   aqui o endereço dessa variavel vai ser interpretada
                                        //   como um ponteiro para uma variavel do tipo INT com o modificador volatilte
                                        //   e eu estou acessando o conteudo dela
    }
    "Assim eu garanto que a variavel resposta em outros lugares ela será otimizada mas nesse caso aqui ela não será pois ela depende de alguma acesso de hardware que possa modificar ela"




























int main()
{
    printf("Hello world!\n");
    return 0;
}
