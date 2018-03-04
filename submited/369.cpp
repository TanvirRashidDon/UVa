#include<stdio.h>

double ncr(int n,int r){
    double num=1;
    int x=n-r+1;
    if(r>n-r){
        x=r+1;
        r=n-r;}
    for(int i=r;i;i--,x++)
        num*=(double)x/i;
    return num;
}

int main()
{
    int n,r;
    scanf("%d%d",&n,&r);
    while(n||r){
        printf("%d things taken %d at a time is %0.lf exactly.\n",n,r,ncr(n,r));
        scanf("%d%d",&n,&r);
    }
}
