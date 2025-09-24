#include<stdio.h>

int main(){

    int pro=0,i,j,a,b;

    printf("\n\n\t+ entre un entier : ");
    scanf("%d",&a);
    printf("\t+ entrer le dexiene : ");
    scanf("%d",&b);

    for(i = 0;i < a;i++){

        for(j = 0;j < b;j++)
            pro+=1;
    }
    
    printf("\t+\n\t+ %d*%d=%d \n",a,b,pro);
    
    return 0;
}
