#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void insere(int n,int V[]);
void show(int n,int V[]);
void ordena(int n,int V[]);
int simplifica(int n,int V1[],int V2[]);

int main(void){

    srand(time(NULL));

    int vet[5];
    int vet2[5];

    insere(5,vet);
    printf("\n------------Vetor Com Valores Aleatorios!!!------------\n");
    show(5,vet);
    ordena(5,vet);
    printf("\n------------Vetor Com Valores Ordenados!!!------------\n");
    show(5,vet);
    int qtd=simplifica(5,vet,vet2);
    printf("\n------------Vetor Sem Valores Repetidos!!!------------\n");
    show(qtd,vet2);

return 0;
}

void insere(int n,int V[]){
    for(int i=0;i<5;i++){
        V[i] = (rand() % 10);
    }
}

void show(int n,int V[]){
    for(int i=0;i<n;i++){
        printf("\nVet[%i]: %i",i,V[i]);
    }
}

void ordena(int n,int V[]){
    for(int j=0;j<n;j++){
        for(int i=0;i<n-j-1;i++){
            if(V[i]>V[i+1]){
                int aux = V[i];
                V[i] = V[i+1];
                V[i+1] = aux;
            }
        }
    }
}

int simplifica(int n,int V1[],int V2[]){

    int flag1,cont;
    flag1=cont=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(V1[i]==V1[i+1])
                flag1++;            
        }
        if(flag1<2){
            V2[cont]=V1[i];
            cont++;
        }
        flag1=0;
    }
return cont;
}