#include <stdio.h>
#include <stdlib.h>
    /*
    PASSAGEM DE PARÂMETROS PARA FUNÇÕES: PASSAGEM POR REFERÊNCIA

    A diferença da passagem por valor é que agora não estamos passando uma cópia do dado
    e sim o endereço de onde este parametro está na memória;
    Assim, a função pode modificar o valor do parâmetro, e essa mudança nele pode se manisfestar fora da função, ou
    seja em quem chamou a função;
    */

    //Exemplo usando a função passando o valor do parâmentro por valor:
    void somaValor(int n){
        n = n + 1; // Aqui o valor vai virar 6
    }
    //Exemplo usando a função passando o valor do parâmentro por referência:
    void somaReferencia(int *n){// Quando eu chamar a função aqui vai ocorrer uma atribuição onde N = &X (n vai receber o endereço de x onde ele está la na memória(ex:E10, então o n está valendo E10)
        *n = *n + 1;//6         // Sempre que eu for usar uma variável passada por referencia dentro da função tenho que colocar o * na frente dela;
                                // Aqui mandei somar mais um ou seja aonde eu estou apontando( você pega o valor dentro da posição E10 e soma mais um ai meu x será sobrescrito e passa a valer 6;
}
    void soma_mais_um(int *n){
        *n= *n + 1;
         printf("Dentro da funcao: x = %d\n",*n);// Mando imprimir então imprimo 6

    }




int main()
{
    /* Exemplo da passagem "Por Refêrencia": função scanf()

    int x = 5;
    printf("Antes do scanf: x = %d\n",x);
    printf("Digite um numero: ");
    scanf("%d",&x);// O x foi modificado dentro da função scanf
    printf("Depois do scanf: x = %d\n", x);// Essa mudança se manifestou depois que a função scanf terminou, o que aconteceu
                                           // com o x dentro da funçao scanf não se perdeu ainda está no main
    O Parâmetro por referência: usa-se o operador
    " * " na frente do nome do parâmetro durante a declaração da função. */

        //Por Valor
        //void soma_mais_um (int n);// Quero declarar um parâmetro por valor declaro como uma variável normal TIPO+PARÂMETRO
        //Por referência
        //void soma_mais_um (int *n);// Quero declarar um parâmetro por referência tenho que colocar o "*" antes do nome do parâmetro TIPO+*+PARÂMETRO



       /* Parâmetro por referência: na chamada da função é necessário utilizar o operador
          "&" na frente do nome da variável que será passada por referência*/
        int xa = 5;
        printf("Antes da funcao: xa= %d\n",xa);
        soma_mais_um(&xa);// Se eu tenho uma função que tem um paramentro que é
                         //  passado por referência quando passar um valor para ela eu tenho que um "&" na frente, igual scanf
        printf("Depois da funcao: xa = %d\n",xa);// Terminei a função vou imprimir o valor de x fora da função, Opa eu modifiquei o valor de x lá ná memória não ná cópia e sim no valor original
                                              // então será impresso 6;

        // Aqui é uma comparação das duas funções:
        int xb = 5;
        somaValor(xb);
        printf("Depois da funcao soma valor: xb %d\n",xb);// Aqui vai imprimir 5

        int y = 5;
        somaReferencia(&y);
        printf("Depois da funcao soma Referencia: y %d\n",y);// Aqui vai imprimir 6



        /*Conclusão: Passagem por referência me permite modificar o parâmentro e devolver ele para a função que chamou,
         essa é a utilidade da passagem por referência você pegar e mudar um parametro que foi passado */

    system("pause");
    return 0;
}
