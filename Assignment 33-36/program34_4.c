#include<stdio.h>

void Display(char cNo)
{
    static char ch=65;
    if(ch < 65+cNo)
    {
       printf("%c \t",ch);
       ch++;
       Display(cNo);
    }
}

int main()
{
    char cValue=0;

    printf("Enter the number :");
    scanf("%d",&cValue);

    Display(cValue);
 
     return 0;
}