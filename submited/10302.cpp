#include<bits/stdc++.h>

int main()
{
    unsigned long long  x;
    while(scanf("%llu",&x)!=EOF){
        if(x%2)
            x=x*((x+1)/2);
        else
            x=x/2*(x+1);
        printf("%llu\n",x*x);
    }
    return 0;
}
