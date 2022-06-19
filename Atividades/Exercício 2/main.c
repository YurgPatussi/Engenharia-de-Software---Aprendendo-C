#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int valor1;
	int valor2;
	int i;
	int soma = 0;
	
	printf("FAVOR INFORMAR O PRIMEIRO VALOR?\n");
	scanf("%d",&valor1);
	printf("FAVOR INFORMAR O SEGUNDO VALOR?\n");
	scanf("%d",&valor2);
	
	if (valor1<valor2)
	{
		for (i=valor1; i<=valor2 ;i++)
		{
			soma=soma+i;
		}
	}
	
	if (soma>0)
	{
		print("SOMA DE TODOS VALORES DENTRO DO INTERVALO %d e %d e %d!\n", valor1,valor2, soma);
		
	}else
	{
		printf("VALOR INVALIDO! SOMA=0");
	}	
	
}
