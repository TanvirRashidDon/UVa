#include<cstdio>
#include<iostream>
#include<bitset>
using namespace std;

int main()
{
    long int x,i;
    while(scanf("%ld",&x)&&x){
        bitset<32>a(x);
        for(i=32;!a[i];i--);
        printf("The parity of ");
        for(;i>=0;i--)
            cout<<a[i];
        printf(" is %d (mod 2).\n",a.count());
    }
    return 0;
}
