//find the area of a rectangular prism formula : A=2(wl+hl+hw)
#include<stdio.h>

int main()
{
    int a,w,l,h;
    printf("\n\n\t\tEnter value of w:");
    scanf("\n\n\t\t %d",&w);

    printf("\n\n\t\tEnter value of h:");
    scanf("\n\n\t\t %d",&h);

    printf("\n\n\t\tEnter value of l:");
    scanf("\n\n\t\t %d",&l);

    a=2*((w*l)+(h*l)+(h*w));
    printf("\n\n\t\tarea of a rectangular prism:%d",a);
}