#include<stdio.h>
#include<stdlib.h>

void which_one(int age);

int main(void){
	int key;
	printf("\nInsira a idade do aluno: ");
		scanf("%i", &key);
	printf("\nA categoria que o aluno deve estar eh: ");
	which_one(key);
return 0;
}

void which_one(int age){
	if((age >= 5) && (age <= 7))
		printf("Infantil A\n");
	else if((age >= 8) && (age <= 10))
		printf("Infantil B\n");
	else if((age >= 11) && (age <= 13))
		printf("Juvenil A\n");
	else if((age >= 14) && (age <= 17))
		printf("Juvenil B\n");
	else if(age >= 18)
		printf("Adulto\n");	
}
