#include <stdio.h>
#include <stdlib.h>

int main (){

    int n,m,k,n2,a,i,j;
  	do{
	system("clear");
    printf("\n\n\t\t      -----------------------------");
   // sleep(1);
    printf("\n\t..............| MULTIPLICATION DE MATRICE |................");
    printf("\n\t\t      -----------------------------\n");

 	printf ( "\n\n\t. entrer le nombre de colonne de la premiere mat1: ");
 	scanf ("%d",&n);
 	printf ( "\t. entrer le nombre de ligne de la premiere mat1 : "); 
 	scanf("%d",&m);
	printf ( "\t. entrer le nombre de colonne de la dexiene mat2: ");
 	scanf ("%d",&a);
 	printf ( "\t. entrer le nombre de ligne de la dexiene mat2 : "); 

 	scanf("%d",&n2);
        	
    }while(n!=n2);
        
 	int mat1[n][m];
 	printf("\t.\n");
 	for (i=0; i<m; i++){
 		for(j=0; j<n; j++){
 			printf("\t. entrer l'element %d%d de mat1  : ",i+1,j+1);
 			scanf("%d",&mat1[j][i]);
 		}	
 	}
 	
 	int mat2[a][n2];

 	for (i=0; i<n2; i++){
 		for(j=0; j<a; j++){
 		printf("\t. entrer l'element %d%d de mat2 : ",i+1,j+1);
 		scanf("%d",&mat2[j][i]);
 		}	
 	}

	
 		

 	int som[a][m];
 	for (i=0; i<m; i++){
 		for(j=0; j<a; j++) 		
		som[i][j] = 0; 		
 	}
 	
	for(k=0;k<a;k++){ 
	 	for (i=0; i<m; i++){
			
			for(j=0; j<n; j++){
				
 				som[k][i] += mat1[j][i] * mat2[k][j];
				
 			}
		}
 	}

	printf("\n\t");
	
	for (i=0; i<m; i++){
 		for(j=0; j<n; j++)
 			printf("%d ", mat1[j][i] );
		printf("\n\t");
 		
	}

	printf("\n\t");

	for (i=0; i<n; i++){
 		for(j=0; j<a; j++){
 		printf("%d ", mat2[j][i] );
	
 		}
 		printf("\n\t");
  	}

	printf("\n\t");
 	
	for (i=0; i<m; i++){
 		for(j=0; j<a; j++){
 		printf("%d ", som[j][i] );
	
 		}
 		printf("\n\t");
  	}
  	
    return 0;
    
}
