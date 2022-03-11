#include<stdio.h>
#include<stdlib.h>
#define TAM 5

int main(void){
	
	int M[TAM][TAM];
	int i, j;
	int soma_linha4=0;
	int soma_diaprinc=0;
	int soma_diagsec=0;
	int soma_tot=0;
	
	for(i=0;i<TAM;i++)
		for(j=0;j<TAM;j++)
			M[i][j] = i;
			
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			printf("%i\t", M[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			if(i == 4)//LINHA 4
				soma_linha4 += M[i][j];
			if(i==j)//DIAGONAL PRINCIPAL
				soma_diaprinc += M[i][j];
			if(i+j == TAM-1)//DIAGONAL SECUNDARIA
				soma_diagsec += M[i][j];
			soma_tot += M[i][j];
		}
	}	
	
	printf("\nO resultado da soma da linha 4: %i", soma_linha4);		
	printf("\nO resultado da soma da diagonal principal: %i", soma_diaprinc);
	printf("\nO resultado da soma da diagonal secundaria: %i", soma_diagsec);
	printf("\nO resultado da soma de todos elementos: %i", soma_tot);
	
return 0;
}
