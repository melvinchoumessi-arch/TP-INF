#include<stdio.h>
#include<stdlib.h>

int main(){

    int i,n;

    system("clear");
    printf("\n\n\t\t      ------------------------------------------");
   // sleep(1);
    printf("\n\t..............| RECHERCHER D'UN ELEMENT DAN UN TABLEAU |................");
    printf("\n\t\t      ------------------------------------------\n");

    printf("\n\n\t-> entrer le nombre d'element du tableau: ");
    scanf("%d",&n);
    float el ,tab[n];
    printf("\t.\n");

    for(i = 0;i < n;i++){
      
        printf("\t. Entrer l'element numerro %d : ",i+1);
        scanf("%f",&tab[i]);

    }

    printf("\t.\n\t. Entrer l'element a rechercher : ");
    scanf("%f",&el);
    i=0;
    while(i<n && tab[i]!=el)
        i++;
    if(i<n){
        printf("\t.\n\t-> L'element %.2f est a la possition %d \n\t. ",el,i+1);
    }else
        printf("\t.\n\t-> L'element %.2f n'est pas dans le tableau \n\t. ",el);
    
    
    printf("\n\t. |");
    for(i=0 ;i<n;i++)
        printf(" %.2f |",tab[i]);

    printf("\n\n");
    return 0;
}