#include<stdio.h>

int main()
{
    long int a,b,c,d,l,i,x;
    while(scanf("%ld%ld%ld%ld%ld",&a,&b,&c,&d,&l)&&d){
        x=0;
        for(i=0;i<=l;i++){
            if(!((a*i*i+b*i+c)%d))
                x++;
        }
        printf("%ld\n",x);
    }
    return 0;
}
