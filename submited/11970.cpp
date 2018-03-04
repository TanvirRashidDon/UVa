#include<stdio.h>
#include<math.h>

int main()
{
    long long int n,x,i,y;
    double a,b;
    int t,tc=0;
    //freopen("11970.txt","r",stdin);
    scanf("%d",&t);
    while(tc<t){
        b=1;
        scanf("%lld",&x);
        printf("Case %d:",++tc);
        a=sqrt(x);
        b=n=a;
        if(a==b)
            n--;
        for(i=n;i>1;i--){
            y=x-i*i;
            if(!(y%i))
                printf("% lld",y);
        }
        printf(" %lld\n",x-1);
    }
    return 0;
}
