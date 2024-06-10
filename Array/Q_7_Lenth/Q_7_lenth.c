//WAP Find out length of string without using inbuilt function
#include<stdio.h>
int main()
{
     char str[]="Hello muy name is pradip";
     int l=0;
     while(str[l]!=NULL)
     {
          l++;
     }
     printf("\n\t Length of string is : %d ",l);
     
}