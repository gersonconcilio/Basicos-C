#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAM 10

void popula (int m[TAM][TAM]);
void lista (int m[TAM][TAM]);
int somas_diag (int m[TAM][TAM]);
void odd (int m[TAM][TAM]);

int main(void){
	
	int matriz[TAM][TAM];	
	popula(matriz);
	lista(matriz);
	printf("\nA soma da diagonal secundaria com a diagonal principal: %i\n", somas_diag(matriz));
	odd(matriz);
		
return 0;
}

void popula (int m[TAM][TAM]){
	int i, j;
	srand(time(NULL));
	
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			m[i][j] = 1 + (rand() %50);
		}
	}	
}

void lista (int m[TAM][TAM]){
	int i, j;
	printf("\n-------------------------------------- APRESENTANDO MATRIZ --------------------------------------\n\n");
	for(i=0;i<TAM;i++){
		printf("\t");
		for(j=0;j<TAM;j++){
			printf("%i\t", m[i][j]);
		}
		printf("\n");
	}
}

int somas_diag (int m[TAM][TAM]){
	int i, j;
	int soma = 0;
	srand(time(NULL));
	
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			if(i+j == TAM-1)
				soma += m[i][j];
			if(i == j)
				soma += m[i][j];
		}
	}	
return soma;
}

void odd (int m[TAM][TAM]){
	int i, j;
	
	printf("\n-------------------------------------- PAR OU IMPAR? --------------------------------------\n\n");
	for(i=0;i<TAM;i++){
		printf("\t");
		for(j=0;j<TAM;j++){
			if(m[i][j] %2 == 0)
				printf("Par\t");
			else
				printf("Impar\t");
		}
		printf("\n");
	}
}
