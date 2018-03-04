#include<stdio.h>

int main()
{
    int d,t,f,l,i,b;
    scanf("%d",&t);
    while(t--){
        f=0;l=0;
        for(i=0;i<4;i++){
            scanf("%d",&d);
            b=(d/1000)*2;
            f+=(b/10+b%10);
            b=d%100;
            b=(b/10)*2;
            f+=(b/10+b%10);
            d%=1000;
            l+=(d/100+d%10);
        }
        f+=l;
        if(f%10)
            printf("Invalid\n");
        else
            printf("Valid\n");
    }
    return 0;
}
