#include<stdio.h>
#include<algorithm>

int main()
{
    int a,b,x;
    while(scanf("%d%d",&a,&b)&&a!=-1){
        x=abs(a-b);
        if(x<51)
        printf("%d\n",x);
        else printf("%d\n",100-x);
    }
    return 0;
}
