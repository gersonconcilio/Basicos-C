#include<stdio.h>
#include<stdlib.h>
#define TAM 100

int main(void){

	int i;
	int X[TAM];
	
	printf("\nDigite -1 para valor nulo!\n");
	for(i=0;i<TAM;i++){
		printf("\nDigite: ");
			scanf("%i", &X[i]);
	}
	
	for(i=0;i<TAM;i++){
		if(X[i] == -1){
			X[i]=1;
		}
	}
	
	printf("\nVETOR:\n");
	for(i=0;i<TAM;i++){
		printf("\nVet[%i]: %i",i, X[i]);
	}

return 0;
}
