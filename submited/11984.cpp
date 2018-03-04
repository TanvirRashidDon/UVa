#include<stdio.h>

int main()
{
    float a,b;
    int t,tc=0;
    scanf("%d",&t);
    while(tc<t){
        scanf("%f%f",&a,&b);
        if(!b){
            printf("Case %d: %.2f\n",++tc,a);
            continue;}
        a=1.8*a+32+b;
        printf("Case %d: %.2f\n",++tc,5*(a-32)/9);
    }
    return 0;
}
