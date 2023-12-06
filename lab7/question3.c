#include <stdio.h>
void main() {
    int nu,visa,final,total;
    printf("Enter number of student :");
    scanf("%d",&nu);
    printf("Enter visa :");
    scanf("%d",&visa);
    printf("Enter final:");
    scanf("%d",&final);
    total=0.4*visa+0.6*final;
    printf("Number of student: %d",nu);
    printf("Gecme notu : %d",total);

}