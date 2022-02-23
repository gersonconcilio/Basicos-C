#include<stdio.h>
#include<stdlib.h>

int main(void){

    float nota, soma, media,pct1,pct2;
    int qtd,q1,q2,q3,q4;
    qtd=q1=q2=q3=q4=0;
    nota=soma=media=0;

    do{
        printf("\nDigite a nota: ");
            scanf("%f", &nota);

        if((nota>=0.0)&&(nota<=6.0)){
            q1++;
        }
        if((nota>=6.1)&&(nota<=7.0)){
            q2++;
        }
        if((nota>=7.1)&&(nota<=8.0)){
            q3++;
        }
        if((nota>=8.1)&&(nota<=10.0)){
            q4++;
        }

        if(nota>0){
            qtd++;
            soma+=nota;
        }            
    }while(nota>0);

    media = soma/qtd;
    pct1 = ((q1*100)/qtd);
    pct2 = ((q2*100)/qtd);

    printf("\nA quantidade total de notas recebidas: %i\n", qtd);
    printf("\nA media das notas foi: %.1f\n", media);
    printf("\nNao Satisfatorio: %i\n", q1);
    printf("\nSatisfatorio: %i\n", q2);
    printf("\nBom: %i\n", q3);
    printf("\nOtimo: %i\n", q4);
    printf("\nPercentual sobre 'Nao Satisfatorio': %.1f\n", pct1);
    printf("\nPercentual sobre 'Satisfatorio': %.1f\n", pct2);  
return 0;
}