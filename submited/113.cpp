#include<stdio.h>
#include<math.h>


int main()
{
    long double n,p,o;
    while(scanf("%Lf %Lf",&n,&p)==2){
        n=1/n;
        o=floor(pow(p,n)+.5);
        printf("%.0Lf\n",o);
    }
    return 0;
}
