#include<stdio.h>
#include<algorithm>

int main()
{
    long int t,s,n,x1,y1,x2,y2,a,b;
    //freopen("10849.txt","r",stdin);
    scanf("%ld",&t);
    while(t--){
        scanf("%ld%ld",&s,&n);
        while(s--){
            scanf("%ld%ld%ld%ld",&x1,&y1,&x2,&y2);
            if(x1==x2&&y1==y2){
                printf("0\n");
                continue;}
            a=abs(x1-x2);
            b=abs(y1-y2);
            if(a==b)
                printf("1\n");
            else if((a%2)!=(b%2))
                printf("no move\n");
            else
                printf("2\n");
        }
    }
    return 0;
}
