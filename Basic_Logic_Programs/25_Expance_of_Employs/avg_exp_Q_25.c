//Accept 5 expense from user and find average of expense
#include<stdio.h>
int main()
{
    int e1,e2,e3,e4,e5,total=0,exp;
    //enter the salary 
    printf("\n\n\n\t\t Enter the Expance:");
    scanf("\n\n\n\t\t %d",&e1);
    printf("\n\n\n\t\t Enter the Expance:");
    scanf("\n\n\n\t\t %d",&e2);
    printf("\n\n\n\t\t Enter the Expance:");
    scanf("\n\n\n\t\t %d",&e3);
    printf("\n\n\n\t\t Enter the Expance:");
    scanf("\n\n\n\t\t %d",&e4);
    printf("\n\n\n\t\t Enter the Expance:");
    scanf("\n\n\n\t\t %d",&e5);
     
    total=e1+e2+e3+e4+e5;
    exp=total/5;
    printf("\n\n\t\t avrge expance of user:%d ",exp);
}    