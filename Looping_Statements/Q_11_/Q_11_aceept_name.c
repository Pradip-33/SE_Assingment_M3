//Accept 5 names from user at run time.
#include<stdio.h>
int main()
{
    char n[5][50];
    int i;
    printf("---------Enter the name(one name at one time)---------");
    for(i = 0; i < 5; i++) 
    {
        printf("\n\t Name %d: ", i + 1);
        scanf("%s", n[i]);
    }
    printf("\n---------Your Enterd name---------");
    for(i = 0; i < 5; i++)
    {
        printf("\n\t %d. %s\n", i + 1, n[i]);
    }
}