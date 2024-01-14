#include <stdio.h>
int main(){
	int i=0;
	float sum=0;
	float average;
	float N[100];
	for (i=0 ; i<8 ; i++){
		printf("%d. elemani girin:",i+1);
		scanf("%f",&N[i]);
		sum=sum+N[i];
	}
	average=sum/8.0;
	printf("Sayilarin ortalamasi:%f",average);
}
	
                       	