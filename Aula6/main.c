#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
 
 int l,c,i;
 double notas [3][3];
 char nome [3][99];

 for (i=0;i<3;i++)
 {
 	printf("FAVOR INFORMAR O NOME: \n");
 	gets(nome[i]);
 }
 
for (i=0;i<3;i++)
  	{
  	printf(nome[i]);
   	printf("\n");	
 	}
 
for (l=0;l<3;l++)
 	{
 	printf("Aluno %d ! \n", l+1);
 	
	for (c=0;c<3;c++)
	 {
 		printf("INFORMA A NOTA %d:\n", c+1);
 		scanf("%d", &notas[l][c]);
 	}
	}
}
