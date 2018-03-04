#include<stdio.h>

int main()
{
    int in;
    while(scanf("%d",&in)==1){
        if(in%6)
            printf("N\n");
        else printf("Y\n");
    }
    return 0;
}
