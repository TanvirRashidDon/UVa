#include<stdio.h>

int main()
{
    long long cut;
    scanf("%lld",&cut);
    while(cut>-1){
        long long sum=1;
        for(int i=1;i<=cut;i++)
            sum+=i;
        printf("%lld\n",sum);
        scanf("%lld",&cut);
    }
}
