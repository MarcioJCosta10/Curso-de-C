#include <stdio.h>
#include <stdlib.h>
            /*Fa�a um programa que leia um
            arquivo com os nomes, quantidades
            e pre�os de diversos produtos,
            um por linha e calcule o total
            da compra.

            Esse exemplo o aquivo est� bem estruturado e
            N�o vamos considerar produtos com nomes compostos
            Ent�o eu sei que a cada linha eu vou ter nome
            quantidade e pre�o
            */





int main()
{
    char prod[30];                                  // 3� Se eu vou ler um arquivo preciso guarar ele em algum lugar, ent�o declarei um vetor char[30] onde vou guardar o nome que vou ler
    float qtd, valor, total = 0.0;                  // aqui vou guardar a quantidade, o valor e o total que se inicia com 0
     FILE *f = fopen("C:\\Projetos\\compras.txt","r"); //1� Vou abrir meu arquivo, Aqui declarei meu ponteiro para arquivo*f e fopen "nome do arquivo e "r"(leitura arquivo texto)

    if(f ==NULL){                                    //2� Fiz o meu teste de abertura do arquivo se f for igual a NULL � um erro de abertura
        printf("Erro na abertura\n");
        system("pause");
        exit(1);
    }
                                                //COMO EU LEIO ISSO?

   while (!feof(f)) {               //  4� Eu tenho que ler todas as linhas pois eu n�o sei quantas linhas tem ent�o fa�o um while:
                                    // Ent�o enquanto n�o for o final do arquivo (not feof)
        fscanf(f,"%s %f %f ", prod, &qtd,&valor);//5� - Eu vou ler com o fscanf, o meu arquivo f uma string e dois float em cada linha
                                                 // o nome vou guardar em prod, por ser um vetor n�o preciso colocar o e comercial pois � um vetor e n�o preciso referenciar com o &;
                                                 // &qtd e &valor vou guardar a quantidade eo valor e ai uso o & para passar o endere�o da quantidade e do valor,
                                                 // Esse fscanf vai ler uma linha e vai pular para a proxima linha e vai deixar ela pronto para a leitura
        total += qtd * valor;                   //6� Li uma linha ai total vai receber qtd * valor, aqui calculo o total da minha compra
    }
    printf("Total = %.2f \n", total);             //7� Aqui mostro na tela o meu total

    system("pause");
    return 0;
}
