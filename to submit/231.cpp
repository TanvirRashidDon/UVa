#include<stdio.h>

int main()
{
    unsigned long t=0,x,y=32768,z=1,o=0;
    while(scanf("%lu",&x)==1){
        if(y==-1)continue;
        if(x==-1){
            printf("Test #%lu:\n  maximum possible interceptions: %lu",x++,o);
            o=0;}
        if(x<y){
            o++;
            y=x;
            z=x;}

    }
}

