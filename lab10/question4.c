#include <stdio.h>
int main ( ){
	int A[10];
	int i;
	int n;
	for (i=0; i<10 ; i++){
		printf("%d. sayiyi giriniz:",i+1);
		scanf("%d",&A[i]);
		
	}
	for (i=9; i>=0 ; i--){
		printf("%d\n",A[i]);
	}
}