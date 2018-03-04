#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    long int x,l,i,y;
    char a[32];
    while(scanf("%s",&a)){
        x=0;
        l=strlen(a);
        for(i=0;a[i];i++)
            x+=(a[i]-48)*(pow(2,l--)-1);
        if(!x)break;
        printf("%ld\n",x);
    }
    return 0;
}
