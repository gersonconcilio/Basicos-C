#include<stdio.h>
#include<stdlib.h>
#define TAM 80

int main(void){
	
	int i;
	int N[TAM];
	int menor=0;
	int aux=0;
	
	for(i=0;i<TAM;i++){
		printf("\nDigite: ");
			scanf("%i", &N[i]);
	}
	
	for(i=0;i<TAM;i++){
		if(i==0)
			menor=N[i];
		else
			if(menor>N[i]){
				menor=N[i];
				aux=i;
			}		
	}
	
	printf("\nO menor elemento de N eh: %i e sua posicao eh: %i\n", menor, aux);
	
return 0;
}
