#include<bits/stdc++.h>

int main()
{
    unsigned long long n,a,x;
    while(scanf("%llu",&n)==1){
        a=x=1;
        while(a%n){
            a=a*10+1;
            a%=n;
            x++;
        }
        printf("%llu\n",x);
    }
    return 0;
}
