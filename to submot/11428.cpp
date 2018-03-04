#include<stdio.h>

int main()
{
    int a[10001]={},b[10001]={},x,i,y;
    for(i=57;i>21;i--){
           x=i-1;
           y=i*i*i-x*x*x;
           printf("%d ",y);
           a[y]=i;
           b[y]=x;
    }
    for(i=21;i>0;i--){
        for(x=i-1;x>0;x--){
            y=i*i*i-x*x*x;
            printf("%d ",y);
            a[y]=i;
            b[y]=x;
        }
    }
    while(scanf("%ld",&x)&&x){
        if(a[x])
            printf("%ld %ld\n",a[x],b[x]);
        else
            printf("No solution\n");
    }
    return 0;
}
