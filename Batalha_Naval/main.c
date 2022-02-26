#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAM 10
#define X1 6
#define X2 2

void mostra_tabuleiro(int tabuleiro[TAM][TAM]);
int compara(int barco1[X1][X2], int barco2[X1][X2], int barco3[X1][X2], int tiro1, int tiro2);
int boat_down(int barco1[X1][X2], int barco2[X1][X2], int barco3[X1][X2]);

int main(void){
	
	int tabuleiro[TAM][TAM];
	int barco1[X1][X2] = {{2, 1}, {2, 2}, {2, 3}, {2, 4}, {2, 5}};
	int barco2[X1][X2] = {{5, 9}, {6, 9}, {7, 9}, {8, 9}, {9, 9}};
	int barco3[X1][X2] = {{5, 0}, {5, 1}, {5, 2}, {5, 3}, {5, 4}};
	int i, j, tiro1, tiro2;
	int chances = 5;
	int restantes = 3;
	
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			tabuleiro[i][j] = 0;
		}	
	}	
	
	do{
		mostra_tabuleiro(tabuleiro);
		printf("\nDigite a coordenada do tiro 1[Linha]: ");
			scanf("%i", &tiro1);
		printf("\nDigite a coordenada do tiro 2[Linha]: ");
			scanf("%i", &tiro2);
		if(compara(barco1,barco2,barco3,tiro1, tiro2)){
			printf("\nAcertou !!");
			tabuleiro[tiro1][tiro2] = 1;
			if(boat_down(barco1,barco2,barco3)){
				printf("\nBARCO NO FUNDO DO MAR!!\n");
				restantes--;
			}				
		}
		else{
			chances --;
			printf("\nErrou!!\nTens %i tiros restantes!!\n",chances);			
		}		
		
		if(chances == 0){
			printf("\nVoce gastou todos seus tiros!!!\nEND GAME\n");
		}	
		if(restantes == 0){
			printf("\nVoce derrubou todos os barcos!!!\nEND GAME\n");
		}
	}while((chances > 0) && (restantes > 0));
return 0;
}

void mostra_tabuleiro(int tabuleiro[TAM][TAM]){
	int i,j;
	printf("\n----------------- APRESENTA TABULEIRO -----------------\n\n");		
	for(i=0;i<TAM;i++){
		if(i == 0){
			printf("\t\t    ");
			for(j=0;j<TAM;j++)
				printf("%i ", j);
			printf("\n");
			printf("\t\t  ");
			for(j=0;j<=(TAM*2);j++){
				if(j==0)
					printf("/");
				else
					printf("-");
			}				
			printf("\n");	
		}		
		printf("\t\t%i | ", i);
		for(j=0;j<TAM;j++){			
			printf("%i ", tabuleiro[i][j]);
		}	
		printf("\n");
	}	
	printf("\n----------------- APRESENTA TABULEIRO -----------------\n\n");
}

int compara(int barco1[X1][X2], int barco2[X1][X2], int barco3[X1][X2], int tiro1, int tiro2){
	int i, j;
	j=0;
	
	for(i=0;i<X1;i++){		
		if((barco1[i][j] == tiro1) && (barco1[i][j+1] == tiro2)){
			barco1[i][j] = -1;
			barco1[i][j+1] = -1;
			return 1;
		}				
		if((barco2[i][j] == tiro1) && (barco2[i][j+1] == tiro2)){
			barco2[i][j] = -1;
			barco2[i][j+1] = -1;
			return 1;
		}
		if((barco3[i][j] == tiro1) && (barco3[i][j+1] == tiro2)){
			barco3[i][j] = -1;
			barco3[i][j+1] = -1;
			return 1;
		}		
	}
	return 0;
}

int boat_down(int barco1[X1][X2], int barco2[X1][X2], int barco3[X1][X2]){
	int flag1=0;
	int flag2=0;
	int flag3=0;
	int i;
	int j=0;
	for(i=0;i<X1;i++){		
		if((barco1[i][j] == -1) && (barco1[i][j+1] == -1)){
			flag1 ++;
			if(flag1 == 5){
				barco1[i][j] = -2;
				barco1[i][j+1] = -2;
				return 1;
			}
		}				
		if((barco2[i][j] == -1) && (barco2[i][j+1] == -1)){
			flag2 ++;
			if(flag2 == 5){
				barco2[i][j] = -2;
				barco2[i][j+1] = -2;
				return 1;
			}
		}
		if((barco3[i][j] == -1) && (barco3[i][j+1] == -1)){
			flag3 ++;
			if(flag3 == 5){
				barco3[i][j] = -2;
				barco3[i][j+1] = -2;
				return 1;
			}
		}		
	}
	return 0;
}
