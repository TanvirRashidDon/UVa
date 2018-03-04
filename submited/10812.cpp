#include<stdio.h>

int main()
{
    int t,a,b;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&a,&b);
        if(a>=b)
        if(a+b<(a+b|1)){
            printf("%d %d\n",(a+b)/2,(a-b)/2);
            continue;}
        printf("impossible\n");
    }
}
