#include<stdio.h>
#include<stdlib.h>
#define LEN 6

int main(void){
	int m[LEN][LEN];
	int i, j;
	
	for(i=0;i<LEN;i++){
		for(j=0;j<LEN;j++){
			printf("\nInsira para a posicao [%i][%i]: ", i, j);
				scanf("%i", &m[i][j]);
		}
	}
	
	printf("\n*****************Matriz Inicial*****************\n\n");
	for(i=0;i<LEN;i++){
		for(j=0;j<LEN;j++){
			printf("%i\t", m[i][j]);
		}
		printf("\n");
	}
	printf("\n************************************************\n");
	
	for(i=0;i<LEN;i++){
		for(j=0;j<LEN;j++){
			if(!(i+j==LEN-1) && (m[i][j] < 0))
				m[i][j] = 0;
		}		
	}
	
	printf("\n***************Matriz Modificada****************\n\n");
	for(i=0;i<LEN;i++){
		for(j=0;j<LEN;j++){
			printf("%i\t", m[i][j]);
		}
		printf("\n");
	}
	printf("\n************************************************\n");
return 0;
}
