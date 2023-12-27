//2. Write a C program for computing factorial N
#include <stdio.h>
 int main (){
    int a,x=1;
    printf("Enter a number");
    scanf("%d",&a);
    for (int i = 1; i <=a ; i++)
    {
        x=i*x;
    }
     printf("Equal to : %d",x);
scanf("%d",a);
 }