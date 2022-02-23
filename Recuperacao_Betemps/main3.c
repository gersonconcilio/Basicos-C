#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void show_mat(int lin,int col,double M[lin][col]);
void show_vet(int qtd,int V[qtd]);
double minmax(int lin, int col, double M[lin][col],int V[]);

int main(void){        

    srand(time(NULL));

    double mat[6][6];
    int vet[2];

    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            mat[i][j]=(rand() % 100);
        }
    }
    printf("\n------------APRESENTANDO MATRIZ!!!------------\n");
    show_mat(6,6,mat);
    double valor = minmax(6,6,mat,vet);
    printf("\nO elemento MINMAX: %.2f",valor);
    show_vet(2,vet);
return 0;
}

void show_mat(int lin,int col,double M[lin][col]){
    for(int i=0;i<lin;i++){
        for(int j=0;j<col;j++){
            printf("%.2f\t",M[i][j]);
        }
        printf("\n");
    }
}

void show_vet(int qtd,int V[qtd]){
    printf("\nA linha do elemento MINMAX: %i\t",V[0]); 
    printf("\nA coluna do elemento MINMAX: %i\t",V[1]);       
}

double minmax(int lin, int col,double M[lin][col],int V[]){

    double min=M[0][0];
    double max=M[0][0];
    int linha,coluna;

    for(int i=0;i<lin;i++){
        for(int j=0;j<col;j++){
            if(min>M[i][j]){ 
                min=M[i][j];            
                linha=i;                
            }
        }        
    }
    printf("\nO menor elemento eh: %.2f",min);
    for(int j=0;j<col;j++){
        if(max<M[linha][j]){
            max=M[linha][j];
            coluna=j;
        }            
    }
    V[0]=linha;
    V[1]=coluna;    
return max;
}