#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float valorPI(int n);
float PerimetroCirculo(float r);
float areaCirculo(float r);

int main(void){
    float raio;
    printf("\nDigite o valor do raio: ");
        scanf("%f",&raio);
    printf("\nO valor do Perimetro do Circulo: %.2f\n", PerimetroCirculo(raio));
    printf("\nO valor da Area do Circulo: %.2f\n", areaCirculo(raio));
return 0;
}

float valorPI(int n){
    float s=1;
    int x=3;

    for(int i=0;i<n;i++){
        if(i%2==0)      
            s-=1/pow(x,3);          
        if(i%2!=0)            
            s+=1/pow(x,3);          
           
        x+=2;
    }
    s=32*s;       
    s=pow(s,1.0/3.0);       
return s;
}

float PerimetroCirculo(float r){
    return (2*valorPI(100)*r);
}

float areaCirculo(float r){
    return (valorPI(100)*pow(r,2));
}