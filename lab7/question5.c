#include <stdio.h>
int main()
{
    int money,a,b,c,d,total;
    printf("Enter money :");
    scanf("%d",&money);
    a=money%100;
    money=money-100*a;
    b=money%50;
    money=money-50*b;
    c=money%20;
    money=money-20*c;
    d=money%10;
    total=a+b+c+d;
    printf("Total of banknots : %d",total);





}