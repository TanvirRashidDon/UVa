#include<stdio.h>

int main()
{
    int t,r,i,mx,mn,x;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&r);
        scanf("%d",&x);
        mx=mn=x;
        for(i=1;i<r;i++){
            scanf("%d",&x);
            if(x>mx)
                mx=x;
            else if(x<mn)
                mn=x;
        }
        printf("%d\n",(mx-mn)*2);
    }
    return 0;
}
