#include<stdio.h>
#include<stdlib.h>
#define TAM 50

int main(void){
	
	int i;
	int C[TAM];
	int maior=0;
	
	for(i=0;i<TAM;i++){
		printf("\nDigite: ");
			scanf("%i", &C[i]);
	}
	
	for(i=0;i<TAM;i++){
		if(maior<C[i])
			maior=C[i];
	}
	
	printf("\nO maior valor do vetor eh: %i", maior);
	
return 0;
}
