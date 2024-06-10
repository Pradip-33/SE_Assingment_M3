//WAP to find number is even or odd using ternary operator
#include<stdio.h>
int main()
{
    int X;
    printf("\n\t Enter the any number :");
    scanf("%d",&X);
    X%2==0?printf("\n\t Enter number is Even"):printf("\n\t Enter number is odd");
}