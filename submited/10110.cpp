#include<stdio.h>
#include<math.h>

int main()
{
    long int x,b;
    while(scanf("%ld",&x)&&x){
        b=sqrt(x);
        if(b*b<x)
            printf("no\n");
        else printf("yes\n");
    }
    return 0;
}
