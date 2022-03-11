#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void equacao(float a, float b, float c);

int main(void){
	
	float x, y, z;
	
	printf("\nDigite x: ");
		scanf("%f", &x);
	printf("\nDigite y: ");
		scanf("%f", &y);
	printf("\nDigite z: ");
		scanf("%f", &z);
	
	equacao(x, y, z);
	
return 0;
}

void equacao(float a, float b, float c){
	float sol1 = (-b-(sqrt(pow(b,2)-(4*a*c))))/(2*a);
	float sol2 = (-b+(sqrt(pow(b,2)-(4*a*c))))/(2*a);
	
	printf("\nA primeira raiz: %.2f", sol1);
	printf("\nA segunda raiz: %.2f", sol2);
}
