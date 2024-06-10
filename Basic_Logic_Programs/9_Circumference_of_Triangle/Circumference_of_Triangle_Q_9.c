//Find circumference of Triangle formula : triangle = a + b + c

#include<stdio.h>

int main()
{
    int  triangle,a,b,c;
    printf("Enter value of a:");
    scanf("%d",&a);

    printf("Enter value of b:");
    scanf("%d",&b);

    printf("Enter value of c:");
    scanf("%d",&c);

    triangle=a*b*c;
    printf("circumference of Triangle:%d",triangle);
}