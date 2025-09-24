#include<stdio.h>

int main(){

    int n,i;
    printf("\n\n\t+ entrer le nombre d'elements du tableau : ");
    scanf("%d",&n);
    float med,tab[n];
    printf("\t+\n");
    for(i = 0; i < n; i++){

        printf("\t+ element numerro %d: ",i+1);
        scanf("%f",&tab[i]);
    
    }
    
    printf("\t+\n\t+ |");

    for(i = 0; i < n;i++ ){

        printf(" %.2f |",tab[i]);

    }
    printf("\n\t+\n");

    if(n % 2==0){
        med = (tab[n/2]+tab[n/2-1])/2;
    }else{
        med = tab[n/2];
    }

    printf("\t+ La mediane est : %.2f\n",med);

    return 0;
}
