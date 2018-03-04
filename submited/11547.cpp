#include<stdio.h>
#include<algorithm>

int main()
{
    double x;
    long int t,y;
    scanf("%d",&t);
    while(t--){
        scanf("%lf",&x);
        y=(int)((x*63)+7492)*5-498;
        y=abs(y);
        printf("%ld\n",(y/10)%10);
    }
    return 0;
}
