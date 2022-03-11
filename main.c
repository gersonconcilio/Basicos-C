#include<stdio.h>
#include<stdlib.h>
#define TAM 11

void popula(int mat[TAM][TAM]);
void lista(int mat[TAM][TAM]);
int soma(int mat[TAM][TAM]);

int main(void){
	
	int menu=143;
	int flag = 0;
	int mat[TAM][TAM];
	
	do{
		printf("\n-------------------------------");
		printf("\n[1] Popular Matriz.");
		printf("\n[2] Listar Matriz.");
		printf("\n[3] Somar Diagonal Principal.");
		printf("\n[4] Sair.");
		printf("\n-------------------------------");
		printf("\nDigite: ");
			scanf("%i", &menu);
		switch(menu){
			case 1:
				popula(mat);
				flag=1;
			break;
			case 2:
				if(flag)
					lista(mat);
				else
					printf("\nMatriz nao populada!!!\n");
			break;
			case 3:
				if(flag){
					printf("\nA soma dos elementos da diagonal principal eh: %i", soma(mat));
				}					
				else
					printf("\nMatriz nao populada!!!\n");
			break;
			case 4:
				printf("\nSaiu do Programa!!!\n");
			break;
			default:
				printf("\nValor Invalido!!\nDigite Novamente!!\n");
		}
	}while(menu != 4);	
return 0;
}

void popula(int mat[TAM][TAM]){
	int i, j;	
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			printf("\nDigite para mat[%i][%i]: ", i, j);
				scanf("%i", &mat[i][j]);
		}
	}
}

void lista(int mat[TAM][TAM]){
	int i, j;	
	printf("\n--------LISTANDO MATRIZ--------\n\n");
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			printf("%i\t", mat[i][j]);
		}
		printf("\n");
	}
}

int soma(int mat[TAM][TAM]){
	int i, j;
	int soma=0;
	for(i=0;i<TAM;i++)
		for(j=0;j<TAM;j++)
			if(i==j)
				soma += mat[i][j];
return soma;
}
