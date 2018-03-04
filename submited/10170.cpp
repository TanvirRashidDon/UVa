#include<stdio.h>

int main()
{
    long long int s,d;
    while(scanf("%lld%lld",&s,&d)!=EOF){
        while(s<d){
            d-=s;
            s++;
        }
        printf("%lld\n",s);
    }
    return 0;
}
