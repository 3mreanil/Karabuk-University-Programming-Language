#include <stdio.h>
int main(){
	int n,tektoplam=0,cifttoplam=0,i,sayi;
	printf("n degerini giriniz: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d. sayi: ",i+1);
		scanf("%d",&sayi);
		if(sayi%2==0)
		{
			cifttoplam+=sayi;
		}
		else 
		{
			tektoplam+=sayi;
		}
	}
	printf("Tek sayilarin toplami: %d\n",tektoplam);
	printf("Cift sayilarin toplami: %d",cifttoplam);
	
	
	
	
	
	return 0;
}