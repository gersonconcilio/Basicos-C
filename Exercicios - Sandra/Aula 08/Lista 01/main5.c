#include<stdio.h>
#include<stdlib.h>
#define TAM 15

int main(void){
	
	int i, j;
	int A[TAM];
	int aux=0;
	
	for(i=0;i<TAM;i++){
		printf("\nDigite: ");
			scanf("%i", &A[i]);
	}
	
	for(i=0;i<TAM-1;i++){
		for(j=0;j<TAM-i-1;j++){
			if(A[j] > A[j+1]){
				aux = A[j];
				A[j] = A[j+1];
				A[j+1] = aux;
			}				
		}
	}
	
	printf("\nVETOR:\n");
	for(i=0;i<TAM;i++){
		printf("\nVet[%i]: %i",i, A[i]);
	}
	
return 0;
}
