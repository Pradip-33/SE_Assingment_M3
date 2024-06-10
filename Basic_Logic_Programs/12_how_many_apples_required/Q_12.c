/*Accept number of students from user. I need to give 5 apples to each
student. How many apples are required?*/
#include<stdio.h>
int main()
{
    int n,apple;
    printf("\n\n\t\t\t Enter the num of students:");
    scanf("\n\n\t\t\t %d",&n);
    
    apple=n*5;
    printf("\n\n\t\t\t num of apple required:%d",apple);
}