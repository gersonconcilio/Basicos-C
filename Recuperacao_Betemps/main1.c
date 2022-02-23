#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int temCaracteristica(int v[]);

int main(void){

    int vet[4];
    int num=0;

    printf("\n---------Digite 4 Digitos, 1 por vez!!!---------\n");
    for(int i=0;i<4;i++){
        do{
            printf("\nDigite o digito %i: ",i+1);
                scanf("%i", &num);
            if(num>=10)
                printf("\nDigite apenas um digito!!!\n");
        }while(num>=10);
        vet[i]=num;
    }    

    if(temCaracteristica(vet))
        printf("\nValor Possui a Caracteristica!!\n");
    else
        printf("\nValor Não Possui a Caracteristica!!\n");

return 0;
}

int temCaracteristica(int v[]){

    int result,a,b,c,d;
    int flag1=0;
    int flag2=0;
    a=b=result=c=d=0;    

    for(int i=0;i<4;i++){
        if(i<=1){
            a+=v[i];   
            if(flag1==0){
                a*=10;
                flag1++;
            }                
        }      
        else{
            b+=v[i];
            if(flag2==0){
                b*=10;
                flag2++;
            }                
        }
        d+=v[i];
        if(i<=2)
            d*=10;          
    }
    
    c = a+b;    
    a = pow(c,2);    

    if(a==d)
        result=1;
    else
        result=0;    

return result;
}