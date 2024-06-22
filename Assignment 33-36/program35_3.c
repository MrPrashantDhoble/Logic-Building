#include<stdio.h>

int CountChar( char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        iCount++;
        str++;
        CountChar(str);
    }
    return iCount;
     
    
    

}

int main()
{
    char Arr[100];
    int iRet=0;

    printf("Enter the string :");
    scanf("%[^'\n']s",Arr);

    iRet=CountChar(Arr);

    printf("Number of character in string are: %d",iRet);






    return 0;
}