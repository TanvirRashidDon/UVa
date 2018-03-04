#include<stdio.h>

int main()
{
    long int t,x,y;
    scanf("%ld",&t);
    while(t--){
        scanf("%ld%ld",&x,&y);
        x-=2;y-=2;
        if(x%3){
            x/=3;
            x++;}
        else x/=3;
        if(y%3){
            y/=3;
            y++;}
        else y/=3;
        printf("%ld\n",x*y);
    }
    return 0;
}
