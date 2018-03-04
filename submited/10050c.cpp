#include<stdio.h>
#include<string.h>

int main()
{
    bool a[3651];
    int t,n,p,i,x,z;
    //freopen("10050.txt","r",stdin);
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&p);
        memset(a,true,n+1);
        for(i=6;i<=n;i+=7){
            a[i]=0;
            a[i+1]=0;}
        z=0;
        while(p--){
            scanf("%d",&x);
            for(i=1;i*x<=n;i++)
                if(a[i*x]){
                z++;
                a[i*x]=0;}
        }
        printf("%d\n",z);
    }
    return 0;
}
