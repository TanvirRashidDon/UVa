#include<bits/stdc++.h>

int main()
{
    unsigned long long x;
    while(scanf("%llu",&x)==1){
        x=(x+1)/2;
        printf("%llu\n",6*x*x-9);
    }
    return 0;
}
