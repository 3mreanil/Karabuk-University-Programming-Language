#include <stdio.h>
int main()
{
    int A,B,temp;
    A=temp;
    printf("Enter a number");
    scanf("%d",&A);
    printf("Enter a number");
    scanf("%d",&B); 
    temp=A;
    A=B;
    B=temp;
    printf("A number: %d",B);
    printf("B number: %d",temp);

}