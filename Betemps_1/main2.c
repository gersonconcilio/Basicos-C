#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(void){

    char frase[100];
    int x;

    printf("\nDigite a frase: ");
        gets(frase);
        x=strlen(frase); 
    
    printf("\nEntrada: %s\n", frase);
    for(int i=x;i>=0;i--){
        if((frase[i-1] == ' ') || (frase[i-1] == '\0')){
            frase[i] = toupper(frase[i]);
        }
    }
    printf("\nSaida: %s\n", frase);

return 0;
}