#include<stdio.h>

int main()
{
    long int x;
    while(scanf("%ld",&x)&&x){
        if(x<102)
            printf("f91(%ld) = 91\n",x);
        else printf("f91(%ld) = %ld\n",x,x-10);
    }
    return 0;
}
