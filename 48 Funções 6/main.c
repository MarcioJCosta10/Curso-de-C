#include <stdio.h>
#include <stdlib.h>
    /*
    PASSAGEM DE PAR�METROS PARA FUN��ES: PASSAGEM POR REFER�NCIA

    A diferen�a da passagem por valor � que agora n�o estamos passando uma c�pia do dado
    e sim o endere�o de onde este parametro est� na mem�ria;
    Assim, a fun��o pode modificar o valor do par�metro, e essa mudan�a nele pode se manisfestar fora da fun��o, ou
    seja em quem chamou a fun��o;
    */

    //Exemplo usando a fun��o passando o valor do par�mentro por valor:
    void somaValor(int n){
        n = n + 1; // Aqui o valor vai virar 6
    }
    //Exemplo usando a fun��o passando o valor do par�mentro por refer�ncia:
    void somaReferencia(int *n){// Quando eu chamar a fun��o aqui vai ocorrer uma atribui��o onde N = &X (n vai receber o endere�o de x onde ele est� la na mem�ria(ex:E10, ent�o o n est� valendo E10)
        *n = *n + 1;//6         // Sempre que eu for usar uma vari�vel passada por referencia dentro da fun��o tenho que colocar o * na frente dela;
                                // Aqui mandei somar mais um ou seja aonde eu estou apontando( voc� pega o valor dentro da posi��o E10 e soma mais um ai meu x ser� sobrescrito e passa a valer 6;
}
    void soma_mais_um(int *n){
        *n= *n + 1;
         printf("Dentro da funcao: x = %d\n",*n);// Mando imprimir ent�o imprimo 6

    }




int main()
{
    /* Exemplo da passagem "Por Ref�rencia": fun��o scanf()

    int x = 5;
    printf("Antes do scanf: x = %d\n",x);
    printf("Digite um numero: ");
    scanf("%d",&x);// O x foi modificado dentro da fun��o scanf
    printf("Depois do scanf: x = %d\n", x);// Essa mudan�a se manifestou depois que a fun��o scanf terminou, o que aconteceu
                                           // com o x dentro da fun�ao scanf n�o se perdeu ainda est� no main
    O Par�metro por refer�ncia: usa-se o operador
    " * " na frente do nome do par�metro durante a declara��o da fun��o. */

        //Por Valor
        //void soma_mais_um (int n);// Quero declarar um par�metro por valor declaro como uma vari�vel normal TIPO+PAR�METRO
        //Por refer�ncia
        //void soma_mais_um (int *n);// Quero declarar um par�metro por refer�ncia tenho que colocar o "*" antes do nome do par�metro TIPO+*+PAR�METRO



       /* Par�metro por refer�ncia: na chamada da fun��o � necess�rio utilizar o operador
          "&" na frente do nome da vari�vel que ser� passada por refer�ncia*/
        int xa = 5;
        printf("Antes da funcao: xa= %d\n",xa);
        soma_mais_um(&xa);// Se eu tenho uma fun��o que tem um paramentro que �
                         //  passado por refer�ncia quando passar um valor para ela eu tenho que um "&" na frente, igual scanf
        printf("Depois da funcao: xa = %d\n",xa);// Terminei a fun��o vou imprimir o valor de x fora da fun��o, Opa eu modifiquei o valor de x l� n� mem�ria n�o n� c�pia e sim no valor original
                                              // ent�o ser� impresso 6;

        // Aqui � uma compara��o das duas fun��es:
        int xb = 5;
        somaValor(xb);
        printf("Depois da funcao soma valor: xb %d\n",xb);// Aqui vai imprimir 5

        int y = 5;
        somaReferencia(&y);
        printf("Depois da funcao soma Referencia: y %d\n",y);// Aqui vai imprimir 6



        /*Conclus�o: Passagem por refer�ncia me permite modificar o par�mentro e devolver ele para a fun��o que chamou,
         essa � a utilidade da passagem por refer�ncia voc� pegar e mudar um parametro que foi passado */

    system("pause");
    return 0;
}
