#include <stdio.h>
#include <string.h>
int main (){
	char s1[100]="Ahmet", s2[]="Ali";
	int length,j;
	length=0;
	while (s1[length]!='\0'){
		++length;
	}
	for (j=0;s2[j]!='\0';j++,++length){
		s1[length]=s2[j];
	}
	s1[length]='\0';
	puts(s1);
}