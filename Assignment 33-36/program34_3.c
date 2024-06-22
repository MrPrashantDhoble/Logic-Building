#include<stdio.h>

void Display(int iNo)
{
    static int i=1;
    if(iNo>=i)
    {
       printf("%d \t",iNo);
       iNo--;
       Display(iNo);
    }
}

int main()
{
    static int iValue=0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    Display(iValue);
 
     return 0;
}