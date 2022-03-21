#include "func.h"

int main() {
	int v1, v2;
	printf("\nDigite o primeiro valor: ");
		scanf("%i", &v1);
	printf("\nDigite o segundo valor: ");
		scanf("%i", &v2);
	printf("\nA potencia de %i ^ %i = %i", v1, v2, potencia(v1, v2));
return 0;
}
