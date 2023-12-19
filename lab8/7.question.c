/*7.Write C code to find the largest of three numbers A, B, and C.*/
#include <stdio.h>
 int main (){
    int A,B,C;
     printf("Enter the numbers ");
      scanf("%d %d %d",&A,&B,&C);
        if (A>B && A>C){
            printf("The largest number :%d",A);
        }
            if (B>A && B>C)
            {
                printf("The largest number:%d",B);
            }
                if (C>A && C>B)
                {
                    printf("The largest number:%d",C);
                }
                    else {
                        printf("Equal to numbers : %d %d %d",A,B,C);
                    }
                
                
            
 }