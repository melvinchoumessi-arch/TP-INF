#include <stdio.h>
#include<stdlib.h>
 int main(){
 	int n,m,i,j;
 	printf("entrer le nombre de colonne : ");
 	scanf("%d",&n);
 	printf( "entrer le nombre de ligne : "); 
 	scanf("%d",&m);
 	int mat1[n][m];
 	for (i=0; i<m; i++){
 		for(j=0; j<n; j++){
 		printf( "entrer l'element de mat1 %d %d " ,i+1 ,j+1);
 		scanf("%d", &mat1[i][j]);
 		}	
 	}
 	
 	int mat2[n][m];
 	for (i=0; i<m; i++){
 		for(j=0; j<n; j++){
 		printf( "entrer l'element de mat2 %d %d" , i+1 ,j+1 );
 		scanf("%d", &mat2[i][j]);
 		}	
 	}
 	int som[n][m];
 	for (i=0; i<m; i++){
 		for(j=0; j<n; j++){
 		som[i][j] = mat1[i][j] + mat2[i][j];
 		}
 	}
 	for (i=0; i<m; i++){
 		for(j=0; j<n; j++){
 		printf("%d", som[i][j] );
 		
 		}
  	}
  	
  	return 0;
 }

