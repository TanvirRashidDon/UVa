#include<stdio.h>

unsigned long long f[81];
void fib(){
    unsigned long long sum=0,x=1,y=0;int i=1;
    for(;i<81;i++){
        sum=x+y;
        y=x;
        x=sum;
        f[i]=sum;
    }
}
int main()
{
    fib();
    int x;
    for(x=1;x<48;x++)
        printf("%lld ",f[x]);
}
