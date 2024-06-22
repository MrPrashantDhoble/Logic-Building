#include<stdio.h>

int SumDigit(int iNo)
{
    static int iSum=0;
    int iDigit=0;
    if(iNo > 0)
    {
        iDigit = iNo % 10;
        iSum=iSum+iDigit;
        iNo = iNo / 10;
        SumDigit(iNo);
    }
    return iSum;
}

int main()
{
     int  iValue=0;
     int iAns=0;

    printf("Enter the number :");
    scanf("%d",&iValue);
    
    iAns=SumDigit(iValue);
    printf("Sum of digit in number is : %d",iAns);
 
     return 0;
}