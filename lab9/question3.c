//3.Write C program which generates even numbers beetween 1000 and 2000 and then prints them
#include <stdio.h>
    int main(){
        int i;
         for (int i = 1001; i <2000 ; i++)
         {
            if (i%2==0){
                printf("%d\n",i);
            }
         }
         
    }