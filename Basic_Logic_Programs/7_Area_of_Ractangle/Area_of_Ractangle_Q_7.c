//Find area of Rectangle Formula : A=wl
#include<stdio.h>

int main()
{
    int a,w,l;
    printf("\n\n\t\t Enter value of W:");
    scanf("\n\n\t\t %d", &w);

    printf("\n\n\t\t Enter value of L:");
    scanf("\n\n\t\t %d", &l);
    
    a=w*l;
    printf("Area of Rectangle:%d",a);
}