/* 2. Calculate the area of circle with given radius*/
#include <stdio.h>
#define PI 3.14
    int main (){
        float radius,area;
            printf("Enter the raius of circle:");
             scanf("%f",&radius);
                area=PI*radius*radius;
                 printf("The area of circle:%f",area);
    }