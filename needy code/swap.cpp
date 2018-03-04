#include<iostream>
using namespace std;

int main()
{
    int a=10,b=100;
    a^=b;
    b^=a;
    a^=b;
    cout<<a<<"  "<<b;

}
