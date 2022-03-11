#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float area(float r);
float perimetro(float r);

int main(void){
	
	float raio;
	printf("\nDigite o raio do circulo: ");
		scanf("%f", &raio);
	printf("\nA area do circulo: %.2f", area(raio));
	printf("\nO perimetro do circulo: %.2f", perimetro(raio));
	
return 0;
}

float area(float r){	
	return (3.14159265 * pow(r, 2));
}
float perimetro(float r){
	return (3.14159265 * 2 * r);
}
