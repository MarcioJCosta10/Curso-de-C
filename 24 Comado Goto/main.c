#include <stdio.h>
#include <stdlib.h>

int main()
{
   #include <stdio.h>
#include <stdlib.h>

int main()
{
   /*
   Comando GoTo funciona como um comando de laço mas não é um comando de laço
   ele é um salto condicional dentro do código

   //FORMA GERAL
   destino:
   goto destino;
   */

   int i = 0;
   inicio:
       if(i<5){
        printf("Numero: %d \n ", i);
        i++;
        goto inicio;
    }
    //NÃO SE USA GOTO POIS É UM RESQUICIO DO INICIO DA PROGRAMAÇÃO

    //PODERIA REALIZAR O MESMO BLOCO DE GOTO COM O COMANDO FOR
    int b;
    for(b = 0; b < 5; b++ )
    printf("Numero: %d\n",b);


    //UTILIZAÇÃO INTERESSANTE DO GOTO É QUANDO TEMOS QUE SAIR DE VARIOS LAÇOS ANINHADOS;

    int y, j, k;
        for(y=0; y<5; y++)
            for(j=0;j<5;j++)
                for(k=0;k<5;k++)
                    if(y==2 && j==3 && k==1)
                        goto fim; // poderia ter usado o Break mas teria quer ter um break dentro de cada for
                                  // então nesse caso o código fica mais enxuto
                        else
                            printf("Pos[%d,%d,%d]\n",y,j,k);
        fim:
            printf("Fim do programa\n");




    system("pause");
      return 0;
}

    return 0;
}
