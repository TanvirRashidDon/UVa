#include<stdio.h>

unsigned long rev(unsigned long x){
    unsigned long a,p=0;
    while(x!=0){
        a=x%10;
        x/=10;
        p=p*10+a;
    }
    return p;
}

int main()
{
    unsigned long a,b;
    int n,i;
    scanf("%d",&n);
    while(n--){
    scanf("%lu",&a);
    i=0;
    b=rev(a);
    while(a!=b){
        a+=b;
        i++;
        b=rev(a);}
    printf("%d %lu\n",i,b);
    }
}
