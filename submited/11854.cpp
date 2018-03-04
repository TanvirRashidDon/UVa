#include<stdio.h>


int main()
{
    long int a,m,mx,sum,i;
    while(1){
        sum=0;m=0;
        for(i=0;i<3;i++){
            scanf("%d",&a);
            if(!a)break;
            if(a>m){
                m=a;
                mx=a*a;
            }
            sum+=a*a;
        }
        sum-=mx;
        if(sum==mx)
            printf("right\n");
        else printf("wrong\n");
    }
}
