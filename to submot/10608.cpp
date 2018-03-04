#include<stdio.h>

int main()
{
    long int t,i,s,p,x,y,a[500000]={0};
    bool b;
    scanf("%ld",&t);
    while(t--){
        scanf("%ld%ld",&s,&p);
        for(i=0;i<p;i++){
            scanf("%ld%ld",&x,&y);
            a[x]++;
            a[y]++;
        }
        x=0;b=0;
        for(i=1;i<=10;i++){
            if(b){
                y=x;
                b=0;}
            if(a[i]>x){
                x=a[i];
                b=1;}
        }
        printf("%ld",x);
    }
    return 0;
}
