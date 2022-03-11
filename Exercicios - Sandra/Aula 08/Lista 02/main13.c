#include<stdio.h>
#include<stdlib.h>
#define TAM 10

int main(void){
	
	int M[TAM][TAM];
	int aux=0;
	int princ[TAM];
	int sec[TAM];
	int i, j;
	
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			M[i][j] = aux++;
		}
	}
	
	printf("\nMATRIZ SEM MODIFICACOES\n");
	
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			printf("%i\t", M[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<TAM;i++){		
		aux = M[2][i];
		M[2][i] = M[8][i];
		M[8][i] = aux;
	}
	
	printf("\nTROCA LINHA 2 E 8\n");
	
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			printf("%i\t", M[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<TAM;i++){		
		aux = M[i][4];
		M[i][4] = M[i][9];
		M[i][9] = aux;
	}
	
	printf("\nTROCA COLUNA 4 E 9\n");
	
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			printf("%i\t", M[i][j]);
		}
		printf("\n");
	}
	
	aux=0;
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			if(i==j){
				princ[aux] = M[i][j];
				aux++;
			}				
		}		
	}
	aux=0;
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			if(i+j == TAM-1){
				sec[aux] = M[i][j];
				aux++;
			}				
		}		
	}
	
	aux=0;
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			if(i==j){
				M[i][j] = sec[aux];
				aux++;
			}				
		}		
	}
	
	aux=0;
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			if(i+j == TAM-1){
				M[i][j] = princ[aux];
				aux++;
			}				
		}		
	}
	
	printf("\nDIAGONAIS TROCADAS\n");
	
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			printf("%i\t", M[i][j]);
		}
		printf("\n");
	}
	
	
return 0;
}
