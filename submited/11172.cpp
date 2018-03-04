#include<stdio.h>

int main()
{
    unsigned long long int test,a,b;
    scanf("%llu",&test);
    while(test--){
        scanf("%llu%llu",&a,&b);
        if(a>b)
            printf(">\n");
        else if(a<b)
            printf("<\n");
        else
            printf("=\n");
    }
}
