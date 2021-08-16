#include <stdio.h>
#include <stdlib.h>
        "Vamos fazer algumas considerações de Array de Ponteiros e Ponteiros de Array"
        "SÓ PARA DIFERNCIAR BEM UMA COISA DA OUTRA"
        "Relembrando"
        - Arrays são agrupamentos sequenciais de dados do mesmo tipo na memória
        - O nome do Array é apenas um ponteiro que aponta para o primeiro elemento (DESSA SEQUENCIA)do array
        - Podemos atribuir o endereço de um array a um ponteiro de duas formas distintas
        int vet [5] = {1,2,3,4,5};//ESSE É O ARRAY
        int *p1 = vet; // ASSOCIANDO AO PONTEIRO
        int *p2 = &vet[0];// OU ASSIM

        - A linguagem C também permite o uso de arrays e ponteiros de forma conjunta na declaração de variáveis
            (É AQUI QUE AS COISAS SE TORNAM UM POUCO CONFUSAS)
            "Array de Ponteiro e Ponteiro de Array"
            "Vamos pensar por exemplo"
           - Que vou criar o tipo "Array de 10 inteiros"
           - Então eu faço aqui um typedef int vetor[10];//Então criei um tipo int chamado vetor de tamanho 10;
           - Array de 10 inteiros                        //Ou seja um array de inteiros de tamanho 10;
           Quando eu declarar:
               vetor p1;// Estou declarando um array de 10 inteiros -CONFUSO-

            - Ponteiro para o tipo "Array de 10 inteiros"
            vetor *p2; // Se eu fizer essa declaração eu acabei criando um ponteiro para o tipo array de 10 inteiros - CONFUSO-

            Posso fazer também isso aqui:
                int (*p3)[10]; // Aqui tenho um ponteiro para um array de inteiros tamanho 10 //
            - Note que eu coloquei o (*p3) dentro de parênteses
            (estou fazendo uma ênfase na declaração do ponteiro). Temos então
            um ponteiro para um "array de 10 inteiros"
            - p2 e p3 são equivalentes -

            Agora vou tirar a ênfase do meu ponteiro
            int *p4 [10]; // muito parecido tirando os parentes é quase igual a *p3 // aqui tenho um array de tamanho 10 onde cada posição desse array é um ponteiro
            - Apesar de semelhante à declaração de p3, note que não existe parenteses
            colcando ênfase na declaração do ponteiro.(Não estou colocando ênfase no meu ponteiro)
            Estão estou fazendo um  Array de 10 "ponteiros para Inteiros"


                ???CONCLUSÃO???
                O importante e ver aqui que dá para complicar bastante declaração de variaveis se quisermos
                então evite misturar o comando typedef com a declaração de array e fique atento quando se está
                usando parentese na declaração de uma variável pois podemos esta colocando ênfase onde não queremos
                int *p4 [10]; // Isso aqui é muito utilizado - ou seja fazer vetor de ponteiros principalemnte na alocação dinamica
                              // pois para alocar uma matriz eu preciso de um vetor de ponteiros para poder criar outras dimensões

                int (*p3)[10]; // Isso aqui já tem o uso mais limitado

                E a diferença é so um par de parentese então tomar cuidado para não se confundir
