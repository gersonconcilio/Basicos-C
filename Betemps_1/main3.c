#include<stdio.h>
#include<stdlib.h>

int main(void){

    int n;
    float hn;

    do{
        printf("\nDigite n: ");
            scanf("%i", &n);
        if(n<=0)
            printf("\nDIGITE NUMERO MAIOR QUE ZERO!!!\n");
    }while(n<=0);
    
    for(int i=n;i>=1;i--){
        hn = hn + (1/(float)i);
    }

    printf("\nHn (H%i): %f\n",n,hn);

return 0;
}