#include <stdlib.h>
#include <stdio.h>
#include "ListaSequencial.h"

//No arquivo.c vou implementar a struct lista, como ela vai ser?

struct lista{ //
    int qtd;// Quantidade para dizer quantas posi��es eu j� ocupei da minha lista
    struct aluno dados[MAX];//E um vetor do tamanho MAX da estrutura aluno
                            // Ou seja tenho um vetor chamado dado que vai ter at� 100 alunos, 100 posi��es dessa estrutura
};

//Implementar a minha fun��o cria lista
Lista * cria_lista(){ // Aqui � a fun��o
    Lista *li; // Declarei um ponteiro
    li = (Lista*)malloc(sizeof(struct lista));      //Fiz um malloc para esse ponteiro, criei uma variavel para guardar do tipo struct lista
    if(li != NULL) // vejo se deu certo           // lembra a struct lista vai ter aquele vetor de tamanho MAX e o campo quantidade
        li->qtd=0; //digo que tenho 0 posi��es da minha lista ocupada
    return li;
}
//Implementar a fun��o libera lista
void libera_lista(Lista*li){//
    free(li);
}
//Implementar a fun��o do tamanho da lista
int tamanho_lista(Lista* li){//Tenho um ponteiro para a lista
    if(li==NULL)   // vejo se minha lista e nula
        return -1;
    else
        return li->qtd; // se der certo e minha lista � v�lida vou retornar o campo quantidade
                        // lembrando operador seta acessa o conteudo do meu ponteiro, e como � uma estrutura o conteudo da minha estrutura
}

//Implementando a fun��o lista cheia

int lista_cheia(Lista * li){
    if(li==NULL)
        return -1;
    else
        return(li->qtd == MAX);

}

//Implementando a fun��o de lista vazia
int lista_vazia(Lista* li){
    if(li == NULL)
        return -1;
    else
    return(li -> qtd == 0);
}
// Implementa��o da fun��o insere no fim da lista
int insere_lista_final(Lista* li, struct aluno al){ // passei a lista
    if(li == NULL) // verifico se a lista � v�lida
        return 0; // se for NULL retorna 0
    if(lista_cheia(li))//Se for lista cheia qtd � igual a MAX
        return 0; // deu erro retorna 0
    li -> dados[li->qtd] = al;// Se n�o inser��o igual em lista vazia, a posi��o do vetor dados apontada pela quantidade recebe os dados al
    li -> qtd ++; // incremento a quantidade de elemetos que eu tenho na lista
    return 1; // retorno 1 dizendo que deu certo


}

// Implementa��o da fun��o insere no inicio da lista
int insere_lista_inicio(Lista*li, struct aluno al){
    if(li==NULL) return 0; // verifica se n�o � nula se for retorna 0;
    if (lista_cheia(li)) return 0; // verifica se a lista est� cheia
    //tenho que deslocar os elementos para inserir no inicio da lista
    int i;
    for(i=li->qtd-1;i>=0;i--) // Para inserir no inicio da lista tenho que deslocar todo os elemento uma casa para frente,
                              // qtd e o total de posi��es v�lida, qtd -1 � igual ao ultimo elemento que inseri na lista
                              // ent�o enquanto i igual ao ultimo e i maior ou igual a 0 i decrementa
    li -> dados[i+1] = li->dados[i];// e eu fa�o a posi��o da frente receber os dados que est�o na posi��o i
    li ->dados[0] = al; // terminando de fazer isso abri um espa�o e insiro no inicio da lista, listadadona posi��o 0 recebe meu novo dado
    li -> qtd++; // incrementa a quantidade de elementos
    return 1; //retorna 1 que deu certo
}


//Implementanto a fun��o insere de forma ordenada
int insere_lista_ordenada(Lista* li, struct aluno al){ // passo a lista passo os dados
    if(li==NULL) return 0;// vejo se a lista e v�lida se for retorna 0
    if(lista_cheia(li))return 0;// veja se a lista � cheia se for retorna 0

    //Ai eu come�o a fazer uma busca, onde vou inserir esse dado?
    int k,i= 0;// come�a em zero
    while(i<li-> qtd && li -> dados[i].matricula< al.matricula)//enquanto eu n�o estiver no fim da lista, estou percorrendo a lista, eu vou comparar o campo matricula, vou inserir de forma ordenada pela matricula do aluno
        i++;                                                   // ent�o se a matricula que tenho na lista for menor que a do novo aluno, significa que ele � maior ent�o tenho que continuar andando na frente da lista   at� achar a posi��o que ele vai estar
   //Achei a posi��o agora vou fazer uma inse��o no inicio da lista
    for(k=li->qtd-1; k>=i; k--) //Vou fazer um deslocamento de todos  que est�o na qtd -1  at� a posi��o i que eu achei anteriormente
        li ->dados[k+1] = li->dados[k];
    li->dados[i]= al;// insere na posi��o i o meu novo dado
    li -> qtd++;// incrementa a quantidade de alunos que tenho na minha lista
    return 1; // retorno 1 que deu certo a opera��o de inser��o.


}

//Implementando a fun��o remove do final da lista

int remove_lista_final(Lista* li){
    if(li == NULL) //Verifico se a lista � v�lida
        return 0;  // se for null retorno zero pois n�o tenho o que fazer nessa lista
    if(li->qtd == 0)
        return 0; // Se a quantidade for 0 deu erro pois n�o tem como remover ninguem
    li->qtd --;   // Se passei por todos esses testes simplemente vou diminuir a quantidade de elementos da lista
        return 1;
    }

    //Implementando a fun��o remove no inicio da lista
    int remove_lista_inicio(Lista * li){
        if(li ==NULL) //verifico se a lista � valida
            return 0; // se n�o for retorna 0
        if(li->qtd==0) // verifico se a lista est� vazia
            return 0; // se tiver retorna zero
        int k;
        for(k=0; k < li->qtd-1; k++ ) // deslocamento no sentido para onde cresce os indices do vetor
                                      // Enquanto k= 0, k menor que qtd-1(ultima posi��o preenchida)
                                      // vou andando no meu vetor
            li->dados[k]= li->dados[k+1];//e copiando todo mundo, posi��o k recebe posi��o k+1 pega a posi��o que est� na frente e anda com ela para tr�s
                                        //Assim  a primeira posi��o ser� sobrescrita
        li -> qtd --;  // O campo quantidade ser� decrementado no final e ele apontar� para a primeira posi��o vaga

        return 1;
        }


//Implementa��o da fun��o remove em qualquer posi��o
int remove_lista(Lista* li, int mat){
    if (li == NULL) return 0;// vejo se a lista � valida
    if (li -> qtd == 0) return 0; // vejo se a lista est� vazia

    int k, i =0;
    while(i<li->qtd && li->dados[i].matricula != mat) // come�o procurando a matricula do aluno na lista: enquanto i for menor que a quantidade de elementos e a matricula do aluno que estiver na posi��o i da lista for diferente da matricula que eu passar
        i++; //eu vou andando na lista, at� chegar no final da lista ou encontrar esse aluno
                //terminando de andar na lista eu verifico
        if(i == li->qtd)//A posi��o i � igual a quantidade? Se sim quer dizer que eu nunca encontrei a matriucula elemento n�o encontrado
        return 0; // Retorno zero e n�o tem como remover
        //Se eu achei, ent�o tenho que deslocar toos que est�o a frente dele uma posi��o para tras, � a mesma ideia da remo��o do inicio s� que
    for(k=i; k < li->qtd-1; k++) //agora eu achei o a MATRICULA na posi��o i, ent�o tods que est�o na posi��o i+1 �� copiado para a posi��o i
        li->dados[k] = li->dados[k+1]; // ent�o k vai receber o valor da posi��o k+1 (volta um todos elementos cada um uma casa
                                        // Nesse processo vou sobrescrever o primeiro item da lista e o ultimo vai ficar vago
        li->qtd--;                    // Por fim vou dimiuir a quantidade de elementos da minha lista

        return 1;                       // E por fim retorno 1 que diz que deu tud certo



}


//Implementa��o da fun��o de consulta
int consulta_lista_pos(Lista* li, int pos, struct aluno *al){ //Passo ponteiro para lista - A posi��o que eu quero acessar - E um ponteiro para a struct Aluno onde vou guardar as informa��es
                                                              //Lembre-se que estou trabalhando com passagem de paramentro por referencia, ent�o eu passo um ponteiro para estrutura de modo que essa estrutura possa ser preenchida dentro da fun��o com os dados que eu quero
        if(li == NULL || pos <=0 || pos> li->qtd) //verifico se a lista e nula, se minha posi��o � positiva, se for menor ou igual a zero n�o tem quem consultar, e preciso ver se a minha posi��o � maior que a qtd
            return 0;                             // Se alguma das posi��es acima forem veradeiras eu retorno 0, deu erro, n�o tem como acessar a posi��o.
        *al = li->dados[pos-1];                     // Se passou pelo teste vou pegar a informa��o que est� na posi��o -1 dos dados ou seja a primeira posi��o ou seja posi��o 0
                                                    // Pego o conteudo e copio para o meu ponteiro  para a estrutura, modifca o conteudo do meu poteiro para estrutura com os dado da estrutura que est� na pos -1

        return 1;                                   //retorna 1 que deu cert

}





//Implementar a fun��o de consulta por conteudo
int consulta_lista_mat(Lista* li, int mat, struct aluno * al) {//Aqui passei a matricula como parametro // Aqui passei a estrutura aluno por referencia
    if(li==NULL) //Testar para ver se a lista � v�lida ou n�o
        return 0; // se n�o for retorna 0 e n�o tem o que fazer
        //Etapa de busca eu tenho que procurar esse elemento, � igual ao que fizemos em remo��o de elemento
    int k,i = 0;
    while(i<li->qtd && li -> dados[i].matricula != mat)//Percorro toda a lista ent�o i come�ando em 0 at� o ultimo elemento da lista
                                                       // E enquanto o valor da matricula na posi��o i for diferente da matricula que passei
        i++;                                        // eu continuo andando na lista procurando esse elemento, terminei
    if(i==li->qtd)//Eu verifico aquei se o i � menor que a quantidade que dizer que o Elemento n�o foi encontrado, pois cheguei no final da lista, estou na primeira posi��o vaga dela
        return 0; // retorno 0 que deu erro
    *al = li-> dados[i];// Se n�o , se deu certo e eu achei o elemento, eu pego os dados na posi��o i e guardo dentro do conteudo da estrutura aluno que passei por referencia
    return 1;// ao final retorno 1 que deu certo

}
