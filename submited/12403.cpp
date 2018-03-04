#include<stdio.h>

int main()
{
    char a[7];
    unsigned long in,sum=0;int t;
    scanf("%d",&t);
    while(t--){
        scanf("%s",&a);
        if(a[0]=='r')
            printf("%lu\n",sum);
        else{
            scanf("%lu",&in);
            sum+=in;}
    }
    return 0;
}
