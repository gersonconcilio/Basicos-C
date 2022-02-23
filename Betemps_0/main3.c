#include<stdio.h>
#include<stdlib.h>

int compact(int n, int vetA[n], int vetB[n]);

int main(void){

    int V[20];
    int W[20];

    for(int i=0;i<20;i++){
        printf("\nDigite o valor para W[%i]: ",i);
            scanf("%i", &V[i]);
    }

    printf("\n--------------APRESENTANDO VETOR V--------------\n");
    for(int i=0;i<20;i++){
        printf("V[%i]: %i\n",i,V[i]);
    }

    int n=compact(20,V,W);    
    printf("\n--------------APRESENTANDO VETOR W--------------\n");
    for(int i=0;i<n;i++){
        printf("W[%i]: %i\n",i,W[i]);
    }

return 0;
}

int compact(int n, int vetA[n], int vetB[n]){

    int cont=0;

    for(int i=0;i<n;i++){
        if(vetA[i]>0){            
            vetB[cont]=vetA[i];
            cont++;
        }            
    }
return cont;
}