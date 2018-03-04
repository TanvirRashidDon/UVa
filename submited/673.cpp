#include<stdio.h>
#define mx 129

int main()
{
    char pr[mx],stk[mx],c;
    int n,l,top;
    scanf("%d%c",&n,&c);
    while(n--){
    l=top=0;
    gets(pr);
    if(!pr[0]){
        printf("Yes\n");
        continue;}
    stk[0]=pr[0];
    while(pr[l]){
        l++;top++;
        stk[top]=pr[l];
        if((stk[top]-stk[top-1]==2)||(stk[top]-stk[top-1]==1))
            top-=2;
    }
    if(top)
        printf("No\n");
    else
        printf("Yes\n");
    }
    return 0;
}

