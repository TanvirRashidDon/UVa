#include<stdio.h>

int main()
{
    int x;
    while(scanf("%d",&x)){
        if(x<(x|1))
            printf("even ");
        else printf("odd ");
        if(x>(x^1))
            printf("odd\n");
        else printf("even\n");
    }
}
