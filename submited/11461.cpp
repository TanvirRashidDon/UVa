#include<stdio.h>
#include<math.h>

int main()
{
    long int x,y,i,c;
    while(scanf("%ld %ld",&x,&y)&&y){
        c=0;
        i=(long int)sqrt(x);
        if((i*i)!=x)
           i++;
        for(;i*i<=y;i++)
            c++;
        printf("%ld\n",c);
    }
    return 0;
}
