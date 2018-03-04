#include<cstdio>
#include<iostream>

using namespace std;
long long int pow(long long int b,long long int p,long long int m){
    if(p==0) return 1;
    if(p==(p|1)) return b*pow(b,p-1,m)%m;
    int x=pow(b,p>>1,m);
    return (x*x)%m;
}

int main()
{
    //freopen("374.txt","r",stdin);
    long long b,p,m;
    while(scanf("%lld%lld%lld",&b,&p,&m)==3)
        printf("%lld\n",pow(b,p,m));
}
