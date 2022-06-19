#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {


float notas[4];
int i ;
double media;
double soma =0;
double MaiorNota=0;

	for (i==0;i<4;i++){
		printf("Favor informar a nota %d?\n", i+1);
		scanf("%f",&notas[i]);
		
		if (notas[i]>MaiorNota)
			{
			MaiorNota=notas[i];
			};
		soma = soma+notas[i];
		};
		
media = soma/i;
printf("Maior note e %.2f ! \n",MaiorNota);
printf ("Media dos alunos %.2f !\n",media);

};


