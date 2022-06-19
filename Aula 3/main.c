#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int cont = 1;
	for(cont =1; cont <= 100; cont++){
		printf("Yurg - Escreva...%d\n", cont);
	}
	
	for(cont =100; cont >= 0; cont--){
		printf("Yurg - Escreva...%d\n", cont);
	}
	
	return 0;
}
