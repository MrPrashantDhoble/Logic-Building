#include<stdio.h>

int MultDigit(int iNo)
{
    static int iSum=1;
    int iDigit=0;
    if(iNo > 0)
    {
        iDigit = iNo % 10;
        iSum=iSum * iDigit;
        iNo = iNo / 10;
        MultDigit(iNo);
    }
    return iSum;
}

int main()
{
     int  iValue=0;
     int iAns=0;

    printf("Enter the number :");
    scanf("%d",&iValue);
    
    iAns=MultDigit(iValue);
    printf("Sum of digit in number is : %d",iAns);
 
     return 0;
}