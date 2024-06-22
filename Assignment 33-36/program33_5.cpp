#include<iostream>

using namespace std;

void Display()
{
    static char ch=97;
    if(ch<=102)
    {
       cout<<ch<<endl;
       ch++;
       Display();
    }
}

int main()
{
    Display();
 
     return 0;
}