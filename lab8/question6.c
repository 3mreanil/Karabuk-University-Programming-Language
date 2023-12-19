/*6. Write c code to convert the length in feet to cantimeter*/
#include <stdio.h>
#define constant 0.32808
 int main (){
    float cm,feet;
        printf("Enter the length in cm ");
         scanf("%f",&cm);
          feet=cm*constant;
            printf("Equal to feet : %f",feet);


        
 }