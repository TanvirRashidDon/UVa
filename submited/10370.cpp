#include<bits/stdc++.h>

int main()
{
    //freopen("10370.txt","r",stdin);
    int T,n,i,x,num;
    float s,a[1000];
    scanf("%d",&T);
    while(T--){
        scanf("%d",&n);
        s=num=0;
        for(i=0;i<n;i++){
            scanf("%f",&a[i]);
            s+=a[i];}
        s=(float)s/n;
        for(i=0;i<n;i++)
            if(a[i]>s)
                num++;
        printf("%.3f%%\n",(float)num/n*100);
    }
    return 0;
}
