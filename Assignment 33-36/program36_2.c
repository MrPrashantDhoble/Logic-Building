#include<stdio.h>

int LargeDigit(int iNo)
{
    static int  i=0;
    static int iDigit=0;
    if(iNo > 0)
    {               
        iDigit = iNo % 10;
        iNo= iNo / 10;

        while( iDigit > i)
        {
            i++;
            
        }      
        
            LargeDigit(iNo);
               
      
    }
    return i;
    
}

int main()
{
     int  iValue=0;
     int iAns=0;

    printf("Enter the number :");
    scanf("%d",&iValue);
    
    iAns=LargeDigit(iValue);
    printf("Largest digit in number  : %d",iAns);
 
     return 0;
}