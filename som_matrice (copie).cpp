#include <iostream>
#include <stdio.h>
 
 using namespace std;
 
 int main(){
 	int n,m,i,j;
 	cout << "entrer le nombre de colonne : ";
 	cin >> n;
 	cout << "entrer le nombre de ligne : "; 
 	cin >> m;
 	int mat1[n][m];
 	for (i=0; i<m; i++){
 		for(j=0; j<n; j++){
 		cout << "entrer l'element de mat1 " << i+1 <<j+1 << ": ";
 		cin >> mat1[i][j];
 		}	
 	}
 	
 	int mat2[n][m];
 	for (i=0; i<m; i++){
 		for(j=0; j<n; j++){
 		cout << "entrer l'element de mat2 " << i+1 <<j+1 << ": ";
 		cin >> mat2[i][j];
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
 		cout << som[i][j] << " ";
 		
 		}
 		cout << endl;
  	}
  	
  	return 0;
 }

