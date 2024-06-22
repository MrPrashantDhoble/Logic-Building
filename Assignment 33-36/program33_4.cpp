#include<iostream>

using namespace std;

void Display()
{
    static char ch=65;
    if(ch<=70)
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