#include<stdio.h>

void Display(int iNo)
{
    static int i=1;
    if(i<=iNo)
    {
       printf("* \t");
       i++;
       Display(iNo);
    }
}

int main()
{
    int iValue=0;

    printf("Enter the number of times you want to print *:");
    scanf("%d",&iValue);
    
    Display(iValue);
 
     return 0;
}