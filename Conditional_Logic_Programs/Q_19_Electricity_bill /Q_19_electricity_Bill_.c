#include<stdio.h>
#include<stdlib.h>
int main()
{
    float u,b;//Unit,Bill,Surcharge
    char n[10];
    int ID;
    printf("-------------------------------------------------------");
    printf("\n\t Enter your Name:");
    scanf("%s",&n[10]);
    printf("\n\t Enter the unit:");
    scanf("%f",&u);
    printf("\n\t Enter the Coustomer ID:");
    scanf("%d",&ID);
    printf("\n-------------------------------------------------------");
    
    if(u >= 800) // calculating bill accodind to units
    {
        b = u * 2.00;
    }
    else if (u >= 600 && u < 800) 
    {
        b = u  * 1.80;
    } 
    else if (u >= 350 && u < 600) 
    {
        b = u * 1.50;
    } 
    else if ( u < 350)
    {
        b = u * 1.20;
    }

    else 
    {
        exit(0);
    }
    printf("\n\t Total electricity bill: Rs. %.2f\n",b);
    printf("\n------------------------------------------------------");

}