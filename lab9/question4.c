//Write a C program to check whether a given number from keyboard is Polindrom or not
#include <stdio.h>
 int main(){
    int a,temp,pan=0;
     printf("Enter a number");
     scanf("%d",&a);
        temp=a;
     while (temp>0)
     {
        pan=pan*10+temp%10;
        temp=temp/10;
     }
     if (a==pan){
        printf("Congrats");
     }
     else {
        printf("Unfortunately");
     }

 }