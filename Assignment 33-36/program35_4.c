#include<stdio.h>

int Factorial(int iNo)
{
    static int iFact=1;
    
    if(iNo > 0)
    {
       
        iFact= iFact * iNo;
        iNo--;
        Factorial(iNo);
    }
    return iFact;
}

int main()
{
     int  iValue=0;
     int iAns=0;

    printf("Enter the number :");
    scanf("%d",&iValue);
    
    iAns=Factorial(iValue);
    printf("Factorial of number is : %d",iAns);
 
     return 0;
}