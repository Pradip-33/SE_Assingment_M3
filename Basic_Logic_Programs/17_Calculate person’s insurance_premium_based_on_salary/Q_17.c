//Calculate person’s insurance premium based on salary
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\n\n\n\t\t Enter the salary of person:"); // add person salary 
    scanf("\n\n\n\t\t %d",&a);
    printf("\n\n\n\t\t Enter the percentage of premium:");// add percentage 
    scanf("\n\n\n\t\t %d",&b);
    c=a*b/100;
    printf("\n\n\n\t\t persons insurance premium:%d",c);
}