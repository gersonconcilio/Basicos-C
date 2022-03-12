#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM 20

int cadastra(char n[TAM][100], char e[TAM][100], int cont);
void lista(char n[TAM][100], char e[TAM][100], int cont);
void consulta(char n[TAM][100], char e[TAM][100], int cont);

int main(void){
	
	int menu=143;
	int flag=0;
	int num_contatos=0;
	char nome[TAM][100];
	char email[TAM][100];
	
	do{
		printf("\n--------------------------");
		printf("\n[1] Cadastro de Contato.");
		printf("\n[2] Lista de Contatos.");
		printf("\n[3] Consulta por Nome.");
		printf("\n[4] Sair.");
		printf("\n--------------------------");
		printf("\nDigite: ");
			scanf("%i", &menu);
			
		switch(menu){
			case 1:
				num_contatos = cadastra(nome, email, num_contatos);
				flag=1;
			break;
			case 2:
				if(flag)
					lista(nome, email, num_contatos);
				else
					printf("\nAgenda nao Inicializada!!!");
			break;
			case 3:
				if(flag)
					consulta(nome, email, num_contatos);
				else
					printf("\nAgenda nao Inicializada!!!");
			break;
			case 4:
				printf("\nSaiu do Programa!!!\n");
			break;
			default:
				printf("\nValor Invalido!!!\nDigite outro Valor!!!\n");
		}
	}while(menu!=4);	
return 0;
}

int cadastra(char n[TAM][100], char e[TAM][100], int cont){
	printf("\nDigite o nome: ")	;
		scanf("%s", n[cont]);
	printf("Digite o email: ");
		scanf("%s", e[cont]);
return ++cont;
}

void lista(char n[TAM][100], char e[TAM][100], int cont){
	int i, j, k;
	k=1;
	printf("\n-----------APRESENTANDO CONTATOS-----------\n");
	for(i=0;i<cont;i++){		
		printf("\nContato numero %i: ----", k);
		printf("\nNome: %s", n[i]);
		printf("\nEmail: %s\n", e[i]);
		k++;
	}
}
void consulta(char n[TAM][100], char e[TAM][100], int cont){
	char nome[100];
	int i, aux;
	aux=-1;
	printf("\nDigite o nome: ");
		scanf("%s", nome);
	for(i=0;i<cont;i++){		
		if(strcmp(n[i], nome)==0)
			aux=i;
	}
	if(aux > -1){
		printf("\nNome: %s", n[aux]);
		printf("\nEmail: %s\n", e[aux]);
	}
	else
		printf("\nContato nao cadastrado!!\n");
}
