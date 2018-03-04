#include<bits/stdc++.h>

int main()
{
    int m,b,n,a[4]={0,2,4,4};
    //freopen("in696.txt","r",stdin);
    while(scanf("%d%d",&m,&n)&&(m||n)){
        if(m==1||n==1)
            b=m*n;
        else if(m==2||n==2){
            b=m==2?n:m;
            b=(b/4)*4+a[b%4];
        }
        else
            b=(int)ceil(m*n/2.0);
        printf("%d knights may be placed on a %d row %d column board.\n",b,m,n);
    }
    return 0;
}
