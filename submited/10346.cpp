#include<stdio.h>

int main()
{
    long long int x,y,o;
    while(scanf("%lld%lld",&x,&y)==2){
        o=1;
        if(x%(y-1))
            o=0;
        printf("%lld\n",x+(x/(y-1)-o));
    }
    return 0;
}
