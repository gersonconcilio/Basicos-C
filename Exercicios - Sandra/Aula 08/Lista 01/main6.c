#include<stdio.h>
#include<stdlib.h>
#define TAM 20

int main(void){
	
	int i, j;
	int N[TAM];
	int aux=0;
	
	for(i=0;i<TAM;i++){
		printf("\nDigite: ");
			scanf("%i", &N[i]);
	}
	
	for(i=0;i<(TAM/2);i++){
		aux = N[i];
		N[i] = N[TAM-(i+1)];
		N[TAM-(i+1)] = aux;
	}
	
	printf("\nVETOR:\n");
	for(i=0;i<TAM;i++){
		printf("\nVet[%i]: %i",i, N[i]);
	}
	
return 0;
}
