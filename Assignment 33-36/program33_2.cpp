#include<iostream>

using namespace std;

void Display()
{
    static int i=1;
    if(i<=5)
    {
       cout<< i ;
       i++;
       Display();
    }
}

int main()
{
    Display();
 
     return 0;
}