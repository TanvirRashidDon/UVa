#include<stdio.h>

int main()
{
    int t,tc=0,n,s,mx,i;
    scanf("%d",&t);
    while(tc<t){
        scanf("%d",&n);mx=0;
        for(i=0;i<n;i++){
            scanf("%d",&s);
            if(s>mx)mx=s;
        }
        printf("Case %d: %d\n",++tc,mx);
    }
    return 0;
}
