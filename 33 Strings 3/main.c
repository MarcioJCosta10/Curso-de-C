#include <stdio.h>
#include <stdlib.h>

int main()
{
   //Invertendo uma String: Aqui eu só inverti na tela na hora de imprimir
                //  012345678910
   char str [40] = "Linguagem C";//aqui tenho 11 caracteres
   int i;
        // i=strlen(str)-1; é a ultima posição; -1 quer dizer que estou começando no 10 caracter
        //i>=0; enquanto isso for maior ou igual a zero
        // i--; Vou estar sempre diminuindo 1 no meu contador i
   for(i=strlen(str)-1; i>=0; i--){
        printf("%c",str[i]);//E eu vou estar imprimindo cada um dos caracter que eu estiver acessando do indice i com %c(caracter)

   }
   printf("\n");


   // Ivertendo uma String dentro do programa

   char str1 [20 ]= "Chuchubiruba";
   char str2 [20];

   int i1, j=0;// tem a mesma função do codigo de cima
               // mas criamos o contador J que fica na posição 0

   for(i1=strlen(str1)-1; i1>=0; i1--){
        str2[j]=str1[i1]; //Aqui cada posição no fim de i será atribuida a posição inicial de j
        j++; // O contador J será sempre atribuido de 1

   }
   str2[j]= '\0';// quando terminar a string coloco o \0 para finalizar
   printf("str1 = %s\n",str2);// aqui minha str2 tem uma copia invertida de str1


    //Se a string tiver 2mil caracters não é interessante criar uma strig auxiliar
    //Inverter sem usar uma String auxiliar (ex: str2:) inverter dentro da string original (str3).
    char str3[20]="Linguagem C";
    char c;
    int i2, tam = strlen(str3);
        for(i2 = 0; i2 < tam / 2; i2++){
            c = str3[i2];
            str3[i2]= str3[tam-1-i2];
            str3[tam-1-i2]= c;

        }
    printf("str3 = %s\n",str3);





   system("pause");
    return 0;
}
