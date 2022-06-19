
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include <stdio.h>

void identificarDivisivelPor3 (int matriz [5][5])
{

int i, j;
double resto;

for ( i = 0; i<5 ; i++)
{
	for (j=0;j<5;j++)
	{
	
		resto = matriz[i][j]%3;
		if (resto == 0)
		{
		printf("NUMERO DIVISIVEL POR 3 ENCONTRADO NA LINHA %d, COLUNA %d, NUMERO %d \n", i+1, j+1, matriz [i][j]);
		}
	}
}

}




int main(int argc, char const *argv[])
{
    //Matriz com valores fixo para nao fazer a leitura
    
    int matriz[5][5] = {{15,9,23,43,49},
                        {3,36,55,53,18},
                        {12,42,51,57,34},
                        {6,32,28,25,62},
                        {72,91,81,16,41}};
    
    identificarDivisivelPor3(matriz);

    return 0;
}



