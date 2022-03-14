#include<stdio.h>
#include<stdio.h>

int function_age();

int main(void){
	printf("\nA idade em dias eh: %i\n", function_age());
return 0;
}

int function_age(){
	int year, month, day;
	printf("\nDigite em Anos: ");
		scanf("%i", &year);
	printf("\nDigite em meses: ");
		scanf("%i", &month);
	printf("\nDigite em dias: ");
		scanf("%i", &day);
return ((year * 365) + (month * 30) + (day));
}
