#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int menor(int col,int lin, int mat[lin][col]);
int soma( int col, int lin, int mat[lin][col]);
void inv(int col, int lin, int mat[lin][col], int a, int b);
void show(int lin, int col, int mat[lin][col]);

int main(void){

    srand(time(NULL));

    int mat[5][5];
    int col1, col2;

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            mat[i][j]=(rand() % 10);
        }
    }

    show(5,5,mat);
    
    do{
        printf("\nDigite qual coluna1: ");
        scanf("%i",&col1);
        if((col1<0)||(col1>4))
            printf("\nDIGITE COLUNA VALIDA!\n");
    }while((col1<0)&&(col1>4));
    do{
        printf("\nDigite qual coluna2: ");
        scanf("%i",&col2);
        if((col2<0)||(col2>4))
            printf("\nDIGITE COLUNA VALIDA!\n");
    }while((col2<0)&&(col2>4));
    
    printf("\nO menor elemento da matriz eh: %i\n",menor(5,5,mat));
    printf("\nA soma dos elementos da diagonal secundaria eh: %i\n", soma(5,5,mat));
    inv(5,5,mat,col1,col2);
    show(5,5,mat);

return 0;
}

int menor(int col,int lin, int mat[lin][col]){
    int menor=mat[0][0];  
    for(int i=0;i<lin;i++){
        for(int j=0;j<col;j++){
            if(menor>mat[i][j])
                menor = mat[i][j];
        }
    }
return menor;
}

int soma(int col, int lin, int mat[lin][col]){
    int soma;
    for(int i=0;i<lin;i++){
        for(int j=0;j<col;j++){
            if(i+j==lin-1)
                soma+=mat[i][j];
        }
    }
return soma; 
}

void inv(int col, int lin, int mat[lin][col], int a, int b){
    int vet[lin];
    for(int i=0;i<lin;i++){
        vet[i]=mat[i][a];
    }
    for(int i=0;i<lin;i++){
        mat[i][a]=mat[i][b];
        mat[i][b]=vet[i];
    }    
}

void show(int lin, int col, int mat[lin][col]){
    printf("\n-----------APRESENTANDO MATRIZ!!-----------\n");
     for(int i=0;i<lin;i++){
        for(int j=0;j<col;j++){
            printf("%i\t",mat[i][j]);
        }
        printf("\n");
    }
}