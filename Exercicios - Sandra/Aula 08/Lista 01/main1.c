#include<stdio.h>	
#include<stdlib.h>
#define TAM 10

int main(void){
	
	int i;
	int A[TAM];
	
	for(i=0;i<TAM;i++){
		A[i] = 10;
	}
	
	printf("\nVETOR:\n");
	for(i=0;i<TAM;i++){
		printf("\nVet[%i]: %i",i, A[i]);
	}	
	
return 0;
}
