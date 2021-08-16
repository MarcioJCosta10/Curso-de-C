#include <stdlib.h>
#include <stdio.h>
#include "ListaSequencial.h"

//No arquivo.c vou implementar a struct lista, como ela vai ser?

struct lista{ //
    int qtd;// Quantidade para dizer quantas posições eu já ocupei da minha lista
    struct aluno dados[MAX];//E um vetor do tamanho MAX da estrutura aluno
                            // Ou seja tenho um vetor chamado dado que vai ter até 100 alunos, 100 posições dessa estrutura
};

//Implementar a minha função cria lista
Lista * cria_lista(){ // Aqui é a função
    Lista *li; // Declarei um ponteiro
    li = (Lista*)malloc(sizeof(struct lista));      //Fiz um malloc para esse ponteiro, criei uma variavel para guardar do tipo struct lista
    if(li != NULL) // vejo se deu certo           // lembra a struct lista vai ter aquele vetor de tamanho MAX e o campo quantidade
        li->qtd=0; //digo que tenho 0 posições da minha lista ocupada
    return li;
}
//Implementar a função libera lista
void libera_lista(Lista*li){//
    free(li);
}
//Implementar a função do tamanho da lista
int tamanho_lista(Lista* li){//Tenho um ponteiro para a lista
    if(li==NULL)   // vejo se minha lista e nula
        return -1;
    else
        return li->qtd; // se der certo e minha lista é válida vou retornar o campo quantidade
                        // lembrando operador seta acessa o conteudo do meu ponteiro, e como é uma estrutura o conteudo da minha estrutura
}

//Implementando a função lista cheia

int lista_cheia(Lista * li){
    if(li==NULL)
        return -1;
    else
        return(li->qtd == MAX);

}

//Implementando a função de lista vazia
int lista_vazia(Lista* li){
    if(li == NULL)
        return -1;
    else
    return(li -> qtd == 0);
}
// Implementação da função insere no fim da lista
int insere_lista_final(Lista* li, struct aluno al){ // passei a lista
    if(li == NULL) // verifico se a lista é válida
        return 0; // se for NULL retorna 0
    if(lista_cheia(li))//Se for lista cheia qtd é igual a MAX
        return 0; // deu erro retorna 0
    li -> dados[li->qtd] = al;// Se não inserção igual em lista vazia, a posição do vetor dados apontada pela quantidade recebe os dados al
    li -> qtd ++; // incremento a quantidade de elemetos que eu tenho na lista
    return 1; // retorno 1 dizendo que deu certo


}

// Implementação da função insere no inicio da lista
int insere_lista_inicio(Lista*li, struct aluno al){
    if(li==NULL) return 0; // verifica se não é nula se for retorna 0;
    if (lista_cheia(li)) return 0; // verifica se a lista está cheia
    //tenho que deslocar os elementos para inserir no inicio da lista
    int i;
    for(i=li->qtd-1;i>=0;i--) // Para inserir no inicio da lista tenho que deslocar todo os elemento uma casa para frente,
                              // qtd e o total de posições válida, qtd -1 é igual ao ultimo elemento que inseri na lista
                              // então enquanto i igual ao ultimo e i maior ou igual a 0 i decrementa
    li -> dados[i+1] = li->dados[i];// e eu faço a posição da frente receber os dados que estão na posição i
    li ->dados[0] = al; // terminando de fazer isso abri um espaço e insiro no inicio da lista, listadadona posição 0 recebe meu novo dado
    li -> qtd++; // incrementa a quantidade de elementos
    return 1; //retorna 1 que deu certo
}


//Implementanto a função insere de forma ordenada
int insere_lista_ordenada(Lista* li, struct aluno al){ // passo a lista passo os dados
    if(li==NULL) return 0;// vejo se a lista e válida se for retorna 0
    if(lista_cheia(li))return 0;// veja se a lista é cheia se for retorna 0

    //Ai eu começo a fazer uma busca, onde vou inserir esse dado?
    int k,i= 0;// começa em zero
    while(i<li-> qtd && li -> dados[i].matricula< al.matricula)//enquanto eu não estiver no fim da lista, estou percorrendo a lista, eu vou comparar o campo matricula, vou inserir de forma ordenada pela matricula do aluno
        i++;                                                   // então se a matricula que tenho na lista for menor que a do novo aluno, significa que ele é maior então tenho que continuar andando na frente da lista   até achar a posição que ele vai estar
   //Achei a posição agora vou fazer uma inseção no inicio da lista
    for(k=li->qtd-1; k>=i; k--) //Vou fazer um deslocamento de todos  que estão na qtd -1  até a posição i que eu achei anteriormente
        li ->dados[k+1] = li->dados[k];
    li->dados[i]= al;// insere na posição i o meu novo dado
    li -> qtd++;// incrementa a quantidade de alunos que tenho na minha lista
    return 1; // retorno 1 que deu certo a operação de inserção.


}

//Implementando a função remove do final da lista

int remove_lista_final(Lista* li){
    if(li == NULL) //Verifico se a lista é válida
        return 0;  // se for null retorno zero pois não tenho o que fazer nessa lista
    if(li->qtd == 0)
        return 0; // Se a quantidade for 0 deu erro pois não tem como remover ninguem
    li->qtd --;   // Se passei por todos esses testes simplemente vou diminuir a quantidade de elementos da lista
        return 1;
    }

    //Implementando a função remove no inicio da lista
    int remove_lista_inicio(Lista * li){
        if(li ==NULL) //verifico se a lista é valida
            return 0; // se não for retorna 0
        if(li->qtd==0) // verifico se a lista está vazia
            return 0; // se tiver retorna zero
        int k;
        for(k=0; k < li->qtd-1; k++ ) // deslocamento no sentido para onde cresce os indices do vetor
                                      // Enquanto k= 0, k menor que qtd-1(ultima posição preenchida)
                                      // vou andando no meu vetor
            li->dados[k]= li->dados[k+1];//e copiando todo mundo, posição k recebe posição k+1 pega a posição que está na frente e anda com ela para trás
                                        //Assim  a primeira posição será sobrescrita
        li -> qtd --;  // O campo quantidade será decrementado no final e ele apontará para a primeira posição vaga

        return 1;
        }


//Implementação da função remove em qualquer posição
int remove_lista(Lista* li, int mat){
    if (li == NULL) return 0;// vejo se a lista é valida
    if (li -> qtd == 0) return 0; // vejo se a lista está vazia

    int k, i =0;
    while(i<li->qtd && li->dados[i].matricula != mat) // começo procurando a matricula do aluno na lista: enquanto i for menor que a quantidade de elementos e a matricula do aluno que estiver na posição i da lista for diferente da matricula que eu passar
        i++; //eu vou andando na lista, até chegar no final da lista ou encontrar esse aluno
                //terminando de andar na lista eu verifico
        if(i == li->qtd)//A posição i é igual a quantidade? Se sim quer dizer que eu nunca encontrei a matriucula elemento não encontrado
        return 0; // Retorno zero e não tem como remover
        //Se eu achei, então tenho que deslocar toos que estão a frente dele uma posição para tras, é a mesma ideia da remoção do inicio só que
    for(k=i; k < li->qtd-1; k++) //agora eu achei o a MATRICULA na posição i, então tods que estão na posição i+1 ´é copiado para a posição i
        li->dados[k] = li->dados[k+1]; // então k vai receber o valor da posição k+1 (volta um todos elementos cada um uma casa
                                        // Nesse processo vou sobrescrever o primeiro item da lista e o ultimo vai ficar vago
        li->qtd--;                    // Por fim vou dimiuir a quantidade de elementos da minha lista

        return 1;                       // E por fim retorno 1 que diz que deu tud certo



}


//Implementação da função de consulta
int consulta_lista_pos(Lista* li, int pos, struct aluno *al){ //Passo ponteiro para lista - A posição que eu quero acessar - E um ponteiro para a struct Aluno onde vou guardar as informações
                                                              //Lembre-se que estou trabalhando com passagem de paramentro por referencia, então eu passo um ponteiro para estrutura de modo que essa estrutura possa ser preenchida dentro da função com os dados que eu quero
        if(li == NULL || pos <=0 || pos> li->qtd) //verifico se a lista e nula, se minha posição é positiva, se for menor ou igual a zero não tem quem consultar, e preciso ver se a minha posição é maior que a qtd
            return 0;                             // Se alguma das posições acima forem veradeiras eu retorno 0, deu erro, não tem como acessar a posição.
        *al = li->dados[pos-1];                     // Se passou pelo teste vou pegar a informação que está na posição -1 dos dados ou seja a primeira posição ou seja posição 0
                                                    // Pego o conteudo e copio para o meu ponteiro  para a estrutura, modifca o conteudo do meu poteiro para estrutura com os dado da estrutura que está na pos -1

        return 1;                                   //retorna 1 que deu cert

}





//Implementar a função de consulta por conteudo
int consulta_lista_mat(Lista* li, int mat, struct aluno * al) {//Aqui passei a matricula como parametro // Aqui passei a estrutura aluno por referencia
    if(li==NULL) //Testar para ver se a lista é válida ou não
        return 0; // se não for retorna 0 e não tem o que fazer
        //Etapa de busca eu tenho que procurar esse elemento, é igual ao que fizemos em remoção de elemento
    int k,i = 0;
    while(i<li->qtd && li -> dados[i].matricula != mat)//Percorro toda a lista então i começando em 0 até o ultimo elemento da lista
                                                       // E enquanto o valor da matricula na posição i for diferente da matricula que passei
        i++;                                        // eu continuo andando na lista procurando esse elemento, terminei
    if(i==li->qtd)//Eu verifico aquei se o i é menor que a quantidade que dizer que o Elemento não foi encontrado, pois cheguei no final da lista, estou na primeira posição vaga dela
        return 0; // retorno 0 que deu erro
    *al = li-> dados[i];// Se não , se deu certo e eu achei o elemento, eu pego os dados na posição i e guardo dentro do conteudo da estrutura aluno que passei por referencia
    return 1;// ao final retorno 1 que deu certo

}
