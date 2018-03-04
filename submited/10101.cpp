#include<stdio.h>

void bn(long long int x){
    long long a,b;
    a=x/10000000;
    if(a>100){
        bn(a);
        printf(" kuti");
        a=0;
        }
    if(a)
        printf(" %lld kuti",a);
    x=x%10000000;
    a=x/100000;
    if(a){
        printf(" %lld lakh",a);
        x=x%100000;}
    a=x/1000;
    if(a){
        printf(" %lld hajar",a);
        x=x%1000;}
    a=x/100;
    if(a){
        printf(" %lld shata",a);
        x=x%100;}
    if(x)
    printf(" %lld",x);
}

int main()
{
    long long int x;
    int a=0;
    while(scanf("%lld",&x)!=EOF){
        if(!x){printf("%4d. 0\n",++a);continue;}
        printf("%4d.",++a);
        bn(x);
     printf("\n");
    }
    return 0;
}


