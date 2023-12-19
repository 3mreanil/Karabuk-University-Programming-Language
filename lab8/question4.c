/*4. Determine whether a temperature is below or above the freezing point*/
#include <stdio.h>
 void main (){
    int temp;
     printf("Enter the temperature ");
        scanf( "%d",&temp);
         if (temp<0){
            printf("Below the freezing point : %d",temp);
         }
          if (temp==0){
                printf("Equal to freezing point: %d",temp);
          } 
           else {
                printf("Above the freezing point: %d",temp);
           }
            
            
        
 }