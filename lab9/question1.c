//1. Write a C program to find largest of three numbers A,B,C given from keyboard
#include <stdio.h>
int main (){
    int a,b,c;
     printf("Enter a number:");
        scanf("%d",&a);
     printf("Enter a number");
        scanf("%d",&b);
    printf("Enter a number");
        scanf("%d",&c);
            if ("a>b && a>c") {
                printf("The largest number : %d\n",a);
            }   
            else if (b>c && b>a)
            {
                printf("The largest number: %d\n",b);
            }
            else if (c>a && c>b){
                printf("The largest number : %d\n",c);
            }
           
}