#include<stdio.h>
#include<stdlib.h>

int fatorial(int key);
int comb(int n, int p);

int main(void){
	
	int a, b;
	
	printf("\nDigite a: ");
		scanf("%i", &a);
	
	printf("\nDigite b: ");
		scanf("%i", &b);
		
	printf("\nA combinacao de %i tomado %i a %i eh: %i", a, b, b, comb(a, b));
	
return 0;
}

int comb(int n, int p){	
return (fatorial(n)/(fatorial(p)*fatorial(n-p)));
}

int fatorial(int key){
	int i;
	int y=key;
	for(i=key-1;i>=1;i--)
		y *= i;
return y;
}
