#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 10

typedef struct{
	char nome[15];
	int matricula;
	int codigo_curso;
}Alunos;

void search_course(int code, Alunos *alu);
int search_matri(int mat, Alunos *alu);

int main() {
	Alunos povo[TAM];
	int i, aux;
	int menu = 143;
	
	for(i=0;i<TAM;i++){
		printf("\nDigite o nome: ");
			fflush(stdin);
			gets(povo[i].nome);
		printf("\nDigite a matricula: ");
			scanf("%i", &povo[i].matricula);
		printf("\nDigite o codigo do curso: ");
			scanf("%i", &povo[i].codigo_curso);
	}
	
	do{
		printf("\nDigite [0] para sair.");
		printf("\nDigite [1] para procurar alunos por curso.");
		printf("\nDigite [2] para verificar se matricula consta no sistema.");
		printf("\nDigite: ");
			scanf("%i", &menu);
		switch(menu){
			default:
				printf("\nDigite valor valido!!!\n");
			case 0:
				printf("\nSaiu!!\n");
			break;
			case 1:
				printf("\nDigite o codigo do curso: ");
					scanf("%i", &aux);
					search_course(aux, povo);
			break;
			case 2:
				printf("\nDigite a matricula: ");
					scanf("%i", &aux);
					aux=search_matri(aux, povo);
				if(aux)
					printf("\nA matricula consta no sistema!\n");
				else
					printf("\nA matricula nao consta no sistema!\n");	
			break;
		}
	}while(menu != 0);
return 0;
}

void search_course(int code, Alunos *alu){
	int i;
	printf("\nAlunos do Curso %i.", code);
	for(i=0;i<TAM;i++){
		if(code == alu[i].codigo_curso){
			printf("\nNome: %s\n", alu[i].nome);			
		}
	}
	printf("\n");
}

int search_matri(int mat, Alunos *alu){
	int i;
	for(i=0;i<TAM;i++){
		if(mat == alu[i].matricula){
			return 1;			
		}
	}
return 0;
}
