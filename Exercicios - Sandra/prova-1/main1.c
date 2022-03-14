#include<stdio.h>
#include<stdlib.h>
#define LEN 100

int main(void){
	int vet[LEN];
	int key, control_vector, counter_one, i;
	key=control_vector=counter_one=i=0;
	
	do{
		printf("\nInsira o valor: ");
			scanf("%i", &key);
		if((key != -1) && (key > 0)){
			vet[control_vector] = key;
			control_vector++;
		}
		else if((key <= 0) && (key != -1))
			printf("\nValor negativo, insira outro valor!!\n");			
	}while((key != -1) && (control_vector < LEN));
	
	for(i=0;i<control_vector;i++){
		if(vet[i] == 1)
			counter_one+=1;
	}
	
	printf("\nForam inseridos %i numeros 1.\n", counter_one);
return 0;
}
