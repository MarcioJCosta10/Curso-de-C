#include <stdio.h>
#include <stdlib.h>

int main()
{
   #include <stdio.h>
#include <stdlib.h>

int main()
{
   /*
   Comando GoTo funciona como um comando de la�o mas n�o � um comando de la�o
   ele � um salto condicional dentro do c�digo

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
    //N�O SE USA GOTO POIS � UM RESQUICIO DO INICIO DA PROGRAMA��O

    //PODERIA REALIZAR O MESMO BLOCO DE GOTO COM O COMANDO FOR
    int b;
    for(b = 0; b < 5; b++ )
    printf("Numero: %d\n",b);


    //UTILIZA��O INTERESSANTE DO GOTO � QUANDO TEMOS QUE SAIR DE VARIOS LA�OS ANINHADOS;

    int y, j, k;
        for(y=0; y<5; y++)
            for(j=0;j<5;j++)
                for(k=0;k<5;k++)
                    if(y==2 && j==3 && k==1)
                        goto fim; // poderia ter usado o Break mas teria quer ter um break dentro de cada for
                                  // ent�o nesse caso o c�digo fica mais enxuto
                        else
                            printf("Pos[%d,%d,%d]\n",y,j,k);
        fim:
            printf("Fim do programa\n");




    system("pause");
      return 0;
}

    return 0;
}
