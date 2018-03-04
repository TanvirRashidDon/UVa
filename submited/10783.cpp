#include<stdio.h>

int main()
{
    int t,a,b,i,j,sum;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d%d",&a,&b);
        sum=0;
        if(a<(a|1))a++;
        for(j=a;j<=b;j+=2)
        sum+=j;
    printf("Case %d: %d\n",i,sum);
    }
}
