#include<stdio.h>
#include<stdlib.h>

int main()
{
    long int x,i,s[22];
    while(scanf("%ld",&x)&&x>-1){
        if(x==0){
            printf("0\n");
            continue;}
        i=0;
        while(x){
            s[i++]=x%3;
            x/=3;
        }
        i--;
        for(;i>=0;i--)
            printf("%ld",s[i]);
        printf("\n");
    }
    return 0;
}

