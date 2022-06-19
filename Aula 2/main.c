#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Declaracao de variavel
	int idade;
	// Escreve na tela
	printf("Digite a idade: \n");
	// Le o teclado
	scanf("%d", &idade);
	
	printf ("A idade digitada foi %d! \n", idade);
	// Condicao "SE"
	if (idade>=18){
	
	printf("Idade e maior que 18!\n");
	
	}
	if (idade>=18 && idade<=20)
	{
	
	printf("Idade esta entre 18 e 20 anos!\n");
	
	} else 
		{

			if (idade <18)
			{
			printf("Idade e menor que 18 anos!\n");	
			}
			if (idade >20)
			{
			printf("Idade e maior que 20 anos!\n");
			}
		}
int numSemana;
printf("Digite um dia da semana: ");
scanf("%d",&numSemana);

switch(numSemana){
	case 1 : {
		printf("Domingo.");
		break;
	}
	case 2 : {
		printf("Segunda");
		break;
	}
	case 3 : {
		printf("Terca");
		break;
	}
	case 4 : {
		printf("Quanta");
		break;
	}
	case 5 : {
		printf("Quinta");
		break;
	}
	case 6 : {
		printf("Sexta");
		break;
	}
	case 7 : {
		printf("Sabado");
		break;
	}
	default :{
		printf("Valor invalido."); 
		break;
	}
}






return 0;
}
	
	
	
	



	


