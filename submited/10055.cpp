#include<stdio.h>

int main()
{
    long long int a,b;
    while(scanf("%lld%lld",&a,&b)==2){
        if(a<b)
            printf("%lld\n",b-a);
        else
            printf("%lld\n",a-b);
    }
}
