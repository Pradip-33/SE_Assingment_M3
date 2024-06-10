/* C Program to Check Uppercase or Lowercase or Digit or Special
Character */
#include<stdio.h>
int main()
{
   char c;
   printf("enter a character:");
   scanf("%c",&c);
   if(c >= 65 && c <= 90)
      {
        printf("Upper Case Letter");
      }
   else if(c >= 97 && c <= 122)
        {
      printf("Lower Case letter");
        }
   else if(c >= 48 && c <= 57)
        {
      printf("Digit");
        }
   else
        {
      printf("Special Character");
        }
}