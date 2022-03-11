#include<stdio.h>
#include<stdlib.h>
#define TAM 3

int main(void){
	
	int G[TAM];
	int R[TAM];
	int i, j;
	int cont_acertos=0;
	
	for(i=0;i<TAM;i++){
		printf("\nDigite: ");
			scanf("%i", &G[i]);
	}
	
	for(i=0;i<TAM;i++){
		printf("\nDigite sua aposta: ");
			scanf("%i", &R[i]);
	}
	
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			if(G[i] == R[j])
				cont_acertos++;
		}
	}
	
	printf("\nVoce teve %i acerto(s)!\n", cont_acertos);
	if(cont_acertos==TAM)
		printf("\nVoce eh o Ganhador!!\n");
	
return 0;
}
