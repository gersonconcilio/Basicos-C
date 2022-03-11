#include<stdio.h>
#include<stdlib.h>

int verify(int y);

int main(void){
	
	int x;
	printf("\nDigite um numero: ");
		scanf("%i", &x);
	
	if(verify(x))
		printf("\nValor Par!!\n");
	else
		printf("\nValor Impar!!\n");
return 0;
}

int verify(int y){
	return y%2==0 ? 1:0;
}
