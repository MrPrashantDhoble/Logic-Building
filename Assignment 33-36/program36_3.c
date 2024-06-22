#include<stdio.h>

 int CountSmallChar(char *str)
{
    static int iCnt=0;
    
    if(*str!='\0')
    {
        if((*str>='a') && (*str<='z'))
        {
            iCnt++;
                       
        }
         str++;
       CountSmallChar(str);
    
    }
    
    return iCnt;
}

int main()
{
     char Arr[100];
     int iResult=0;

    printf("Enter the string :");
    scanf("%[^'\n']s",Arr);
    
    iResult=CountSmallChar(Arr);
    printf("Number of space present in given string are: %d",iResult);
 
     return 0;
}