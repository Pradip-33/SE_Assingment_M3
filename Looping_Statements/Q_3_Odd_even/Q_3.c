//Finding odd even numbers,sum of odd even numbers & count of odd even numbers
#include<stdio.h>
int main()
{
    int i,n=10,t=0,c=0,odd=0,even=0;//,int,num,total,count

    
    printf("\n :::::::::::::::::Even number are there:::::::::::::::::");
    for ( i = 0; i < n; i++)
    {
        if(i%2!=0)
        {
            even=even+i;//sum of even numbers
            printf("\n\t Even number :%d ",i);//printting even numbers 
            t++;//counting even numbers
            
        }

    }
    printf("\n :::::::::::::::::ODD number are there:::::::::::::::::");
    for ( i = 0; i < n; i++)
    {
        if(i%2==0)
        {
           odd=odd+i;//sum of odd numbers
            printf("\n\t ODD number :%d ",i);//printting odd numbers
            c++;//counting odd numbers
        }

    }
    printf("\n :::::::::::::::::Total ODD And Even Numbers :::::::::::::::::");
    printf("\n\t total count of EVEN numbers :%d",t);//total count of even numbers
    printf("\n\t total count of ODD numbers :%d",c);// total count of odd numbers

    printf("\n :::::::::::::::::Total sum of  ODD And Even Numbers :::::::::::::::::");
    printf("\n\t total sum of ODD numbers : %d",odd);//total sum of odd numbers
    printf("\n\t total sum of EVEN numbers : %d",even);//total sum of even numbers
    printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
}