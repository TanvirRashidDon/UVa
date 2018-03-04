#include<stdio.h>

int main()
{
    long int x,y;
    while(scanf("%ld%ld",&x,&y)==2)
        printf("%ld\n",x*y-1);
    return 0;
}
