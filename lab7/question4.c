#include <stdio.h>
int main() {
    int radius,perimeter,area,pi,islem ;
    pi=3;
    printf("Radius of the circle :");
    scanf("%d",&radius);
    printf("Enter a islem :");
    scanf("%d",&islem);
     perimeter=2*pi*radius;
    area=pi*radius*radius;
     if (islem==1) 
    printf("Perimeter of circle : %d",perimeter);
    if (islem==2)
    printf("Area of circle : %d", area);
    else 
    printf ("Wrong input ");
   
   
    


    }