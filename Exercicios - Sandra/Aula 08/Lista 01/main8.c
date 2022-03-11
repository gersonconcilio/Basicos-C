#include<stdio.h>
#include<stdlib.h>
#define TAM 20

int main(void){
	
	int i, j;
	int M[TAM];
	int aux=0;
	j=10;
	
	for(i=0;i<TAM;i++){
		printf("\nDigite: ");
			scanf("%i", &M[i]);
	}
	
	for(i=0;i<(TAM/2);i++){
		aux = M[i];
		M[i] = M[j];
		M[j] = aux;
		j++;
	}
	
	printf("\nVETOR:\n");
	for(i=0;i<TAM;i++){
		printf("\nVet[%i]: %i",i, M[i]);
	}
	
return 0;
}
