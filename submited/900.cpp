#include<stdio.h>

int main()
{
    unsigned long long f[51],sum=0,x=1,y=0,i=1;
    for(;i<51;i++){
        sum=x+y;
        y=x;
        x=sum;
        f[i]=sum;
    }
    while(scanf("%lld",&x)&&x){
        printf("%lld\n",f[x]);
    }
}

