#include<stdio.h>
#include<math.h>

int main()
{
    int c=1;unsigned long long n;
    while(scanf("%llu",&n)&&n){
        printf("Case %d: %d\n",c++,(int)ceil((3+sqrt(9+8*n))/2));
    }
}
