#include <stdio.h>

int main () {
	int i, j, linhas;
	
	printf("Entre com o numero de linhas: ");
	scanf("%d", &linhas);
	printf("\n");
	
	
	for (i = linhas/2; i <= linhas; i+=2){
		
		for(j = 1; j < linhas-i; j+=2){
			printf(" ");
		}
		
		for(j = 1; j <= i; j++){
			printf("*");
		}
		
		for(j = 1; j <= linhas-i; j++){
			printf(" ");
		}
		
		for(j = 1; j <= i; j++){
			printf("*");
		}
		
		printf("\n");
	}
	
	for (i = linhas; i>= 1; i--){
		for(j = i; j < linhas; j++){
			printf(" ");
		}
		for(j = 1; j <= (i*2)-1; j++){
			printf("*");
		}
		printf("\n");
		
	}
	printf("\nImprimindo coracao\n");
	getch();
	system("cls");
	
	return 0;
	
}
