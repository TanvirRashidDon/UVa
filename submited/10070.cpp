#include<stdio.h>
#include<string.h>

int main()
{
    char n[1000000];
    long int mod4,mod100,mod400,mod15,mod55,l,i;
    bool print=0,a,le;
    //freopen("in.txt","r",stdin);
    while(scanf("%s",&n)==1){
        mod4=mod100=mod400=mod15=mod55=0;l=strlen(n);
        for(i=0;i<l;i++){
            mod4=(mod4*10+n[i]-48)%4;
            mod100=(mod100*10+n[i]-48)%100;
            mod400=(mod400*10+n[i]-48)%400;
            mod15=(mod15*10+n[i]-48)%15;
            mod55=(mod55*10+n[i]-48)%55;}
        if(print)printf("\n");
        print=a=le=1;
        if(!mod4&&mod100||!mod400){
            printf("This is leap year.\n");
            a=0;le=0;}
        if(!mod15){
            printf("This is huluculu festival year.\n");
            a=0;}
        if(!mod55&&!le){
            printf("This is bulukulu festival year.\n");
        }
        if(a)
            printf("This is an ordinary year.\n");
    }
    return 0;
}
