#include "func.h"

void begin(int n){	
	tabuada(0,n);	
}

int tabuada(int iterator, int n){
	file = fopen("tabuada.txt", "w");
	if(iterator <= n){				
		fprintf(file, "\n|%i x %i = %i|\n", n, iterator, n*iterator);		
		tabuada(iterator+1,n);		
	}
	fclose(file);
}
