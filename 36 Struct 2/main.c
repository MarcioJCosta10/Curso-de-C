#include <stdio.h>
#include <stdlib.h>


    struct pessoa{
    char nome[50],rua [50];
    int idade, numero;

    };

int main()
{
//Inicializando uma estrutura
    struct pessoa p;
    strcpy(p.nome,"Ricardo"); //Copiando "Ricardo" para dentro do campo nome da estrutura pessoa p:
    strcpy(p.rua,"Rua 1");
    p.idade = 31;
    p.numero = 101;

//Mas fazer essa atribuição para cada campo é trabalhoso;

/* Felizmente a Linguagem C permite definir uma lista de valores
   para colocar na estrutura (como arrays)*/

   struct pessoa p ={"Ricardo", "Rua 1", 31, 101};// só vale na hora que estiver declarando a estrutura;
                                                  // Os valores devem estar na mesma ordem que foi declarado no inicio;


   /*Campos não definidos são inicializados com zero ou com um string vazia("")*/

   struct pessoa p = {"Ricardo", "Rua 1", 31};//O campo numero será 0 por ser inteiro;


   // Atribuição entre estruturas // Temos a mesma quantidade de campos entre p e p2;
   struct pessoa p = {"Ricardo", "Rua 1", 31,101};
   struct pessoa p2;
   strcpy(p2.nome,p.nome);
   strcpy(p2.rua,p.rua);
   p2.idade = p.idade;
   p2.numero = p.numero;

   /* Estruturas suportam atribuição, desde que as estruras sejam do mesmo tipo*/
   p2 = p; // Tanto p quanto p2 são do tipo pessoa:


   // OUTRO CASO

   struct ponto{ // as duas tem os mesmo conjunto de campos
       x,y;
   } ;
   struct novo_ponto{
        x,y
   };

   int main(){
   struct ponto p1, p2 = {1,2};
   struct novo_ponto p3 = {3,4};
   //CORRETO
   p1 = p2;// São do mesmo tipo então é valido
   printf("p1 = %d e %d", p1.x,p1.y)

   //ERRO! TIPOS DIFERENTES
   p1 = p3; // São tipos diferentes( ponto e novo_ponto) atribuição entre elas é proibido
   printf("p1 = %d e %d", p1.x,p1.y);





   };



















    system("pause");
    return 0;
}
