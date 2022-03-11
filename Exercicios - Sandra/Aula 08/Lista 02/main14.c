#include<stdio.h>
#include<stdlib.h>
#define TAM1 4
#define TAM2 6

int main(void){
	
	int M1[TAM1][TAM2];
	int M2[TAM1][TAM2];
	int N1[TAM1][TAM2];
	int N2[TAM1][TAM2];
	int i, j;
	
	for(i=0;i<TAM1;i++){
		for(j=0;j<TAM2;j++){
			N1[i][j] = i;
		}
	}
	
	for(i=0;i<TAM1;i++){
		for(j=0;j<TAM2;j++){
			N2[i][j] = i;
		}
	}
	
	printf("\nMATRIZ N1\n");
	for(i=0;i<TAM1;i++){
		for(j=0;j<TAM2;j++){
			printf("%i\t", N1[i][j]);
		}
		printf("\n");
	}
	
	printf("\nMATRIZ N2\n");
	for(i=0;i<TAM1;i++){
		for(j=0;j<TAM2;j++){
			printf("%i\t", N2[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<TAM1;i++){
		for(j=0;j<TAM2;j++){
			M1[i][j] = N1[i][j] + N2[i][j];
		}
	}
	
	printf("\nMATRIZ M1\n");
	for(i=0;i<TAM1;i++){
		for(j=0;j<TAM2;j++){
			printf("%i\t", M1[i][j]);
		}
		printf("\n");
	}
	
	//O QUE SER DIFERENÇA????????
	for(i=0;i<TAM1;i++){
		for(j=0;j<TAM2;j++){
			M2[i][j] = N1[i][j] - N2[i][j];
		}
	}
	
	printf("\nMATRIZ M2\n");
	for(i=0;i<TAM1;i++){
		for(j=0;j<TAM2;j++){
			printf("%i\t", M2[i][j]);
		}
		printf("\n");
	}
	
return 0;
}
