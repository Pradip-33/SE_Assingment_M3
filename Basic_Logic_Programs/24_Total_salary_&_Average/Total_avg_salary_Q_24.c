//Accept 5 employees name and salary and count average and total salary
#include<stdio.h>
int main()
{
    char a[10],b[10],c[10],d[10],f[10];
    int e1,e2,e3,e4,e5,total=0,avg;
    //Enter employs name 
    printf("\n\n\n\t\t Enter the Employes name :");
    scanf("\n\n\n\t\t %s",&a[10]);
    printf("\n\n\n\t\t Enter the Employes name :");
    scanf("\n\n\n\t\t %s",&b[10]);
    printf("\n\n\n\t\t Enter the Employes name :");
    scanf("\n\n\n\t\t %s",&c[10]);
    printf("\n\n\n\t\t Enter the Employes name :");
    scanf("\n\n\n\t\t %s",&d[10]);
    printf("\n\n\n\t\t Enter the Employes name :");
    scanf("\n\n\n\t\t %s",&f[10]);
    //enter the salary 
    printf("\n\n\n\t\t Enter the salary:");
    scanf("\n\n\n\t\t %d",&e1);
    printf("\n\n\n\t\t Enter the salary:");
    scanf("\n\n\n\t\t %d",&e2);
    printf("\n\n\n\t\t Enter the salary:");
    scanf("\n\n\n\t\t %d",&e3);
    printf("\n\n\n\t\t Enter the salary:");
    scanf("\n\n\n\t\t %d",&e4);
    printf("\n\n\n\t\t Enter the salary:");
    scanf("\n\n\n\t\t %d",&e5);
     
    total=e1+e2+e3+e4+e5;
    avg=total/5;
    printf("\n ________________________________");
    printf("\n\n\n\t\t average salary:%d",avg); // average 
    printf("\n ________________________________");
    printf("\n\n\n\t\t Total salary:%d",total); // total salary
    printf("\n ________________________________");
}