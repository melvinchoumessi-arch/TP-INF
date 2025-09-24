#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int n,i;
	printf( "\n\t. Enter the number of element : ");
	scanf("%d",&n);
	float t[n],a;
	for(i=0;i<n;i++){
		
		printf("\t. Enter element number %d : ",i+1);
		scanf("%d",&t[i]);
		 
	}
	
	for(i = 0; i < n/2; i++){
		
		a=t[i];
		t[i]=t[n-i-1];
		t[n-i-1]=a;
	}
	printf("\t. |")
	for(i = 0; i < n; i++)
		
		printf (" %d |",t[i]); 
	
	return 0 ;
	
}

