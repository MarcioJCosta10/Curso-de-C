#include <stdio.h>
#include <stdlib.h>
        "Vamos fazer algumas considera��es de Array de Ponteiros e Ponteiros de Array"
        "S� PARA DIFERNCIAR BEM UMA COISA DA OUTRA"
        "Relembrando"
        - Arrays s�o agrupamentos sequenciais de dados do mesmo tipo na mem�ria
        - O nome do Array � apenas um ponteiro que aponta para o primeiro elemento (DESSA SEQUENCIA)do array
        - Podemos atribuir o endere�o de um array a um ponteiro de duas formas distintas
        int vet [5] = {1,2,3,4,5};//ESSE � O ARRAY
        int *p1 = vet; // ASSOCIANDO AO PONTEIRO
        int *p2 = &vet[0];// OU ASSIM

        - A linguagem C tamb�m permite o uso de arrays e ponteiros de forma conjunta na declara��o de vari�veis
            (� AQUI QUE AS COISAS SE TORNAM UM POUCO CONFUSAS)
            "Array de Ponteiro e Ponteiro de Array"
            "Vamos pensar por exemplo"
           - Que vou criar o tipo "Array de 10 inteiros"
           - Ent�o eu fa�o aqui um typedef int vetor[10];//Ent�o criei um tipo int chamado vetor de tamanho 10;
           - Array de 10 inteiros                        //Ou seja um array de inteiros de tamanho 10;
           Quando eu declarar:
               vetor p1;// Estou declarando um array de 10 inteiros -CONFUSO-

            - Ponteiro para o tipo "Array de 10 inteiros"
            vetor *p2; // Se eu fizer essa declara��o eu acabei criando um ponteiro para o tipo array de 10 inteiros - CONFUSO-

            Posso fazer tamb�m isso aqui:
                int (*p3)[10]; // Aqui tenho um ponteiro para um array de inteiros tamanho 10 //
            - Note que eu coloquei o (*p3) dentro de par�nteses
            (estou fazendo uma �nfase na declara��o do ponteiro). Temos ent�o
            um ponteiro para um "array de 10 inteiros"
            - p2 e p3 s�o equivalentes -

            Agora vou tirar a �nfase do meu ponteiro
            int *p4 [10]; // muito parecido tirando os parentes � quase igual a *p3 // aqui tenho um array de tamanho 10 onde cada posi��o desse array � um ponteiro
            - Apesar de semelhante � declara��o de p3, note que n�o existe parenteses
            colcando �nfase na declara��o do ponteiro.(N�o estou colocando �nfase no meu ponteiro)
            Est�o estou fazendo um  Array de 10 "ponteiros para Inteiros"


                ???CONCLUS�O???
                O importante e ver aqui que d� para complicar bastante declara��o de variaveis se quisermos
                ent�o evite misturar o comando typedef com a declara��o de array e fique atento quando se est�
                usando parentese na declara��o de uma vari�vel pois podemos esta colocando �nfase onde n�o queremos
                int *p4 [10]; // Isso aqui � muito utilizado - ou seja fazer vetor de ponteiros principalemnte na aloca��o dinamica
                              // pois para alocar uma matriz eu preciso de um vetor de ponteiros para poder criar outras dimens�es

                int (*p3)[10]; // Isso aqui j� tem o uso mais limitado

                E a diferen�a � so um par de parentese ent�o tomar cuidado para n�o se confundir
