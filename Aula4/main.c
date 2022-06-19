#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char pergunta [200];

	int X;
	double QtdSim = 0;
	double QtdNao = 0;
	double total = 0;
	double percSim = 0;
	double percNao = 0;	
	
	printf("Escreva a pergunta!\n");
	gets(pergunta);
	
	do
	{
		printf(pergunta);
		printf("\n 1 - SIM;\n 2 - NAO;\n 3 - ENCERRAR \n");
		scanf("%d",&X);
		
		switch (X)
			{
				case 1 :
					QtdSim++;
					total++;
					system("cls");
					break;
				case 2 :
					QtdNao++;
					total++;
					system("cls");
					break;
			
				case 3 :
					system("cls");
					percSim = (QtdSim*100)/total;
					percNao = (QtdNao*100)/total;
					printf(pergunta);
					printf("\nPercentual SIM: %.2f\n",percSim);
					printf("Percentual NAO: %.2f\n",percNao);
					printf("Total de votos: %.2f\n",total);
					break;
			
					default:
					printf("Opcao invalida!");
					break;
			}
		} while (X!=3);

return 0;
}


	
