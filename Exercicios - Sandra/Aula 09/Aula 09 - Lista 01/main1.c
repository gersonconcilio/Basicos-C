#include<stdio.h>
#include<stdlib.h>

int fatorial(int key);

int main(void){
	
	int x=0;
	
	printf("\nDigite: ");
		scanf("%i", &x);
	printf("\nO fatorial de %i eh: %i", x, fatorial(x));
return 0;
}

int fatorial(int key){
	int i;
	int y=key;
	for(i=key-1;i>=1;i--)
		y *= i;
return y;
}
