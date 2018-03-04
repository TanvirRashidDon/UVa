#include<stdio.h>

int main()
{
    unsigned long long x,mx,sum;
    int t,i;
    scanf("%d",&t);
    while(t--){
        mx=0;sum=0;
        for(i=0;i<3;i++){
            scanf("%llu",&x);
            if(x>mx)mx=x;
            sum+=x;}
        sum-=mx;
        if(sum>mx)
            printf("OK\n");
        else
            printf("Wrong!!\n");
    }
    return 0;
}
