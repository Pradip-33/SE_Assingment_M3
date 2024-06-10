//Convert minutes into seconds and hours
#include<stdio.h>
int main()
{
    int m,s,h;
    printf("\n\n\t Enter minutes to convert:");
    scanf("%d",&m);
    s=m*60;
    h=m/60;
    printf("\n\n\t Seconds:%d",s);
    printf("\n\n\t Hours:%d",h);
}