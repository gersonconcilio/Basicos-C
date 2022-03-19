#include<stdio.h>
#include<stdio.h>
#include<string.h>
#include<time.h>
#define TAM 20

int cadastra (char n[TAM][100], int r[TAM], int q);
void lista (char n[TAM][100], int r[TAM], int s[3]);
int randomico (int q);
void sorteio (int s[3], int q);
int consulta (char n[TAM][100], int r[TAM], int q, char nome[100]);



int main(void){
		
	int menu = 143;
	int qtd_cadastros = 0;
	char nome_[100];
	
	char nomes[TAM][100];
	int sorteados[3];
	int rgs[TAM];
	
	do{
		printf("\n-----------------------------------");
		printf("\nDigite [0] para sair.");
		printf("\nDigite [1] para Cadastrar.");
		printf("\nDigite [2] para Realizar Sorteio.");
		printf("\nDigite [3] para Listar Sorteados.");
		printf("\nDigite [4] para Consultar Nome.");
		printf("\n-----------------------------------");
		printf("\nDigite: ");
			scanf("%i", &menu);
		switch(menu){			
			case 0:
				printf("\nSAIU DO PROGRAMA!!!\n");
			break;
			case 1:
				if(qtd_cadastros < TAM)
					qtd_cadastros = cadastra(nomes, rgs, qtd_cadastros);
				else
					printf("\nLimite de Cadastros Atingido!!!\n");
			break;			
			case 2:
				if(qtd_cadastros >= 3)
					sorteio(sorteados, qtd_cadastros);
				else
					printf("\nNao foram cadastrados 3 ou mais clientes!!!\n");
			break;
			case 3:
				if(qtd_cadastros >= 3)
					lista(nomes, rgs, sorteados);
				else
					printf("\nNao foram cadastrados 3 ou mais clientes!!!\n");
			break;
			case 4:
				if(qtd_cadastros > 0){
					printf("\nDigite um nome para pesquisa: ");
						fflush(stdin);
						gets(nome_);
						if(consulta(nomes, rgs, qtd_cadastros, nome_)){
							printf("\nNome nao consta no cadastro!!!\n");
						}	
				}
				else
					printf("\nCadastro nao inicializado!\n");
			break;
			default:
				printf("\nDIGITE VALOR VALIDO!!!\n!");
		}
	}while(menu != 0);
	
return 0;
}

int cadastra (char n[TAM][100], int r[TAM], int q){
	
	printf("\nDigite o nome: ");
		fflush(stdin);
		gets(n[q]);
	printf("Digite o RG: ");
		scanf("%i", &r[q]);
	
return ++q;
}

void lista (char n[TAM][100], int r[TAM], int s[3]){
	int i;
	int sup = 1;
	printf("\n---------------LISTANDO NOMES---------------\n");
	for(i=0;i<3;i++){
		printf("\n%i Sorteado: ",sup);
		printf("\nNome: %s", n[s[i]]);
		printf("\nRG: %i\n", r[s[i]]);
		sup++;
			
	}
}

int randomico (int q){
	srand(time(NULL));
return (rand() %q);
}

void sorteio(int s[3], int q){
	int flag = 0;
	int flag2 = 1;
	int cont_s = 0;
	int valor=0;
	int i;
	printf("\n----------Realizando Sorteio----------\n");
	do{
		valor = randomico(q);
		if(cont_s > 0){
			for(i=0;i<cont_s;i++){
				if(valor == s[i])
					flag2 = 0;
			}
		}
		
		if(flag2){
			s[cont_s] = valor;
			cont_s++;
			flag ++;
		}
		flag2 = 1;	
	}while(flag != 3);
}

int consulta (char n[TAM][100], int r[TAM], int q, char nome[100]){
	int i;
	for(i=0;i<q;i++){
		if(strcmp(nome, n[i]) == 0){
			printf("\nCliente %i: ", i);
			printf("\nNome: %s", n[i]);
			printf("\nRG: %i\n", r[i]);
			return 0;
		}
	}
return 1;
}
