#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	
	int menu = 143;
	int qtd_cadastro = 0;
	int i=0;
	char nomes[50][20];	
	char produtos[50][20];
	int telefones[50];
	int quantidades[50];
	float valor_unit[50];
	char aux_produto[50];
	int aux_cadastro=51;
	int key=0;
	
	
	do{
		printf("\nDigite [0] para sair.");
		printf("\nDigite [1] para cadastro do vendedor.");
		printf("\nDigite [2] para Lista Vendedores/Fone.");
		printf("\nDigite [3] para Lista Vendedores/Produtos.");
		printf("\nDigite [4] para Lista de Produtos/Valores.");
		printf("\nDigite [5] para Consulta Produto.");
		printf("\nDigite [6] para Lista Geral.");
		printf("\nDigite: ");
			scanf("%i", &menu);
			switch(menu){
				case 0:
					printf("\nSaiu!");
				break;
				case 1:
					printf("\nDigite o nome: ");
						scanf("%s", nomes[qtd_cadastro]);
					printf("Digite o telefone: ");
						scanf("%i", &telefones[qtd_cadastro]);
					printf("Digite o produto: ");
						scanf("%s", produtos[qtd_cadastro]);
					printf("Digite a quantidade: ");
						scanf("%i", &quantidades[qtd_cadastro]);
					printf("Digite o valor unitario do produto: ");
						scanf("%f", &valor_unit[qtd_cadastro]);
					qtd_cadastro++;
					if(key == 0)
						key=1;
				break;
				case 2:
					if(key==1){
						printf("\n-------------VENDEDORES E SEUS TELEFONES-------------\n");
						for(i=0;i<qtd_cadastro;i++){
							printf("\nNome: %s \tTelefone: %i\n", nomes[i], telefones[i]);
						}
					}
					else
						printf("\nBanco Vazio!\n");
				break;
				case 3:
					if(key==1){
						printf("\n-------------VENDEDORES E SEUS PRODUTOS-------------\n");
						for(i=0;i<qtd_cadastro;i++){
							printf("\nNome: %s \tProduto: %s\n", nomes[i], produtos[i]);
						}
					}
					else
						printf("\nBanco Vazio!\n");
				break;
				case 4:
					if(key==1){
						printf("\n-------------PRODUTOS E SEUS VALORES-------------\n");
						for(i=0;i<qtd_cadastro;i++){
							printf("\nProduto: %s \tValor: %.2f\n", produtos[i], valor_unit[i]);
						}
					}
					else
						printf("\nBanco Vazio!\n");
				break;
				case 5:
					if(key==1){
						printf("\nDigite o nome do produto: ");
							scanf("%s", aux_produto);
						for(i=0;i<qtd_cadastro;i++){
							if(strcmp(aux_produto,produtos[i])==0){
								aux_cadastro = i;
							}
						}
						if(aux_cadastro == 51){
							printf("\nProduto Nao Cadastrado!\n");
						}					
						else{
							printf("\nNome Vendedor: %s", nomes[aux_cadastro]);
							printf("\nTelefone: %i", telefones[aux_cadastro]);
							printf("\nProduto: %s", produtos[aux_cadastro]);
							printf("\nQuantidade: %i", quantidades[aux_cadastro]);
							printf("\nValor Unitario: %.2f\n", valor_unit[aux_cadastro]);
						}
						aux_cadastro=51;
					}
					else
						printf("\nBanco Vazio!\n");
				break;
				case 6:
					if(key==1){
						for(i=0;i<qtd_cadastro;i++){
							printf("\nNome Vendedor: %s", nomes[i]);
							printf("\nTelefone: %i", telefones[i]);
							printf("\nProduto: %s", produtos[i]);
							printf("\nQuantidade: %i", quantidades[i]);
							printf("\nValor Unitario: %.2f\n", valor_unit[i]);
						}
					}
					else
						printf("\nBanco Vazio!\n");						
				break;
				default:
					printf("\nDigite valor valido!\n");
			}
	}while(menu != 0);	
return 0;
}
