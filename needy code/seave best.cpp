#include<cstdio>
#include<iostream>
#include<bitset>
#include<cstring>
#include<string>
#include<cmath>
#define P printf(
#define S scanf(
#define maxm 1000000
using namespace std;

bitset<maxm+1>a;
void seav();

int main()
{
    long int x=0;
    seav();
    for(int i=1;i<=maxm;i++)
        if(!a[i])
            x++;
    P"%ld",x);

}

void seav(){
    for(int i=4;i<maxm+1;i+=2)
        a[i]=1;
    int m=(long int)sqrt(maxm);
    for(int i=3;i<=m;i+=2)
        if(!a[i])
            for(int j=i*i;j<=maxm;j+=2*i)
                a[j]=1;
}
