#include<stdio.h>

int main()
{
    int t,tc=0,x,h,l,y,i,n;
    scanf("%d",&t);
    while(tc<t){
        h=0;l=0;
        scanf("%d",&n);
        scanf("%d",&x);
        for(i=1;i<n;i++){
            scanf("%d",&y);
            if(y>x)h++;
            if(y<x)l++;
            x=y;
        }
        printf("Case %d: %d %d\n",++tc,h,l);
    }
    return 0;
}
