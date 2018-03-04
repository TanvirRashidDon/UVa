#include<stdio.h>
#include<string.h>

bool ss[730],b;

long int sod(long int x){
    long int sum=0,a;
    while(x){
        a=x%10;
        sum+=a*a;
        x/=10;}
    return sum;
}
int main()
{
    long int a,c,x=0,t;
    scanf("%ld",&t);
    while(x++<t){
    memset(ss,true,sizeof(ss));
    b=0;
    scanf("%ld",&a);
    if(a<730)ss[a]=false;
    c=sod(a);
    while(ss[c]){
        if(c==1){
            b=1;
            break;}
        ss[c]=false;
        c=sod(c);}
    if(b)printf("Case #%ld: %ld is a Happy number.\n",x,a);
    else printf("Case #%ld: %ld is an Unhappy number.\n",x,a);
    }
}
