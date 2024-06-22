#include <stdio.h>

int CountSpace(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
        CountSpace(str);
    }
    return iCount;
}

int main() {
    char Arr[100];
    int iResult = 0;

    printf("Enter the string: ");
    scanf("%[^\n]s",& Arr);

    iResult = CountSpace(Arr);
    printf("Number of spaces present in the given string are: %d", iResult);

    return 0;
}
