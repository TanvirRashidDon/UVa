#include<stdio.h>

int main()
{
    int t;double in,r,g;
    scanf("%d",&t);
    while(t--){
        scanf("%lf",&in);
        r=.1256637061435917*in*in;
        printf("%.2lf %.2lf\n",r,in*in*.6-r);
    }
}
