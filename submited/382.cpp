#include<stdio.h>
#include<math.h>

int main()
{
    int x,sum,i,s;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%d",&x)&&x){
        if(x==1){
            printf("    1  DEFICIENT\n");
            continue;}
        sum=1;s=sqrt(x);
        for(i=2;i<=s;i++)
            if(!(x%i))
                sum+=(i+x/i);
        printf("%5d  ",x,sum);
        if(sum<x)
            printf("DEFICIENT\n");
        else if(sum>x)
            printf("ABUNDANT\n");
        else printf("PERFECT\n");
    }
    printf("END OF OUTPUT\n");
}
