#include<stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n)==1){
        if(n<1||n>200)
            break;
        printf("%d\n",n+(n/2));
    }
    return 0;
}
