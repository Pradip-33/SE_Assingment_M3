//Find area of Triangle Formula : A = 1/2 × b × h
#include<stdio.h>

int main()
{
    float a,b,h;
    printf("\n\t\tEnter value of B:");
    scanf("\n\t\t %f",&b);

    printf("\n\t\tEnter value of H:");
    scanf("\n\t\t %f",&h);

    a =0.5*(b*h);
    printf("\n\n\t\t Area of Triangle:%f", a);
}