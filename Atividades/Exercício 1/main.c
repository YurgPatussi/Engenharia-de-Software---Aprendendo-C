#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{

	int idade [8];
	int i;
	int soma =0;
	int maiorIdade=0;
	int posicao = 0;
	double media;
	
	for (i=0;i<8;i++)
		{
			printf("INFORME A IDADE DA PESSOA NUMERO %d? \n", i+1);
			scanf("%d",&idade[i]);
			soma = soma+idade[i];
			if (maiorIdade<idade [i])
				{
				maiorIdade = idade[i];
				posicao = i;
				}
		}
		
	media = soma/8;
	printf("MEDIA DE IDADE DAS PESSOAS CADASTRADAS %.2lf !\n", media);


	for (i=0;i<8;i++)
		{
			if (idade[i]>25)
				{
					printf("NA POSICAO %d A IDADE E MAIOR QUE 25 ANOS!\n", i+1);
				}
	
		}
		
	printf("MAIOR IDADE INFORMADA %d NA POSICAO %d! \n", maiorIdade, posicao);
	system("pause");
}	
	


