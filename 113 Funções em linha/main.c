#include <stdio.h>
#include <stdlib.h>

                    "Funções em linha"
        - O padrão c99 permite solicitar ao compilador faça uma expansão "em linha " da função.
        O que significa:
        - Neste caso, ao invés de gerar o código para chamar a função, o compilador irá inserir
        o corpo completo da função em cada lugar do cófigo em que a função for chamada .

        Por que fazewr isso?

        - Trata-se de um recurso de otimização
        - Visa melhorar o tempo de uso da memória durante a execução do programa
        - Tem a desvantagem de talvez aumentar o tamanho final do programa gerado
        Vamos usar isso quando?
        - É um recurso normalmente utilizado para funções que executam com muita frequência
        Não serve para todas as funções  e não é garantido que vai funcionar sempre

        Como fazemos paradeclarar função em linha:
            inline tipo_da_função nome_função(parâmetro){
            sequencia de declaraçãoes e comandos
        }
        (Função em linha funciona mais ou menos da mesma forma do #define onde quando definimos o define e sempre que for usar chamos o definido no define, pois vou pegar
        o código da função e botar onde foi chamado a função. Só que ela tem a vantagem de ter a segurança baseado em tipo, pois ela é type-safety
        O que é isso? Quando fazemos uma função macro e defini uma função para um x, esse x não é especificado o tipo por mais que tenha definido o tipo inteiro nada impede de termos colocado um x double e talvez o código não funcione para double
         COmo uma função em linha tem segurança de tipo se tentarmos passar um double ele vai fazer a conversão de tipos, então ele vai verificar e tratar os tipos de parâmentros
         se estão bem formatados ou tudo mais. Então é melhor)

        "Atenção"
        - A ideia de Funções "em linha" se parece muito com a ideia de funçõe macro, porém com a vantagem de possuir
        segurança basedada em tipo (type-safety)
        - Chamadas de macro não fazem verificações de tipo nos parâmetros nem verificam se eles
        são bem formados, enquanto uma função exige isso

        "Só para termos uma ideia"
        "Função convencional"

        int maior (int x, int y){
            return (x>y)?x:y;

        }
        int c = maior(a,b);

        "Função em linha"

        inline int maior(int x, int y){
            return (x>y)?x:y;

        }

        int c = maior(a,b); // Aqui eu chamei a função maior
        int c = a>b?a:b; // Na hora que eu compilar a função ele vai fazer isso aqui, então ele vai pegar o corpo da função e substituir da mesma forma que uma função macro faria mas fazendo os ajustes necessários
                         // Então o compilador vai tentar pegar o corpo da função e fazer os ajustes necessários   , então beleza não tem mais a chamada da função pois é o código direto
                         // Então funções simples que são frequentemente chamadas vale a pena fazermos isso



        "Restrições e limitações "
        - Não existe garantia de que o compilador (vai conseguir fazer )conseguirá expandir uma função inline recursiva. (função recursiva funciona um pouco diferente) pode ser que o compilador não consiga desmembrar ela para colocar o código
        - Não é adequada em funções com número de parâmetros variável - O que é isso ? pense no scanf() e printf(). Podemos passar quantos parametros quisermos, função inline não é adequada para isso
        - Não é adequada com array de comprimento variável
        - Deve-se evitar o uso do goto - Vamos iserir o codigo em um lugar- Pode ser que o goto mande para um lugar onde não queriamos
        - Deve-se o uso de funções aninhadas - somente em funções simples

        "É UM RECURSO MUITO ÚTIL PARA MEHORAR O DESEMPENHO MAS TEM CERTAS RESTRIÇÕES"

int main()
{
    printf("Hello world!\n");
    return 0;
}
