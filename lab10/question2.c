#include <stdio.h>
int main(){
	int n;
	int j;
	int i=0;
	int A[10];
	for (i=0 ; i<10 ; i++){
		printf("%d. elamani girin:",i+1);
		scanf("%d",&A[i]);
		if (A[i]==-1){
			j=i;
			break;
		}
		
	}
	for (i=0 ; i<j ; i++){
		printf("%d. eleman = %d\n",i+1,A[i]);
	}
		
	
	
}