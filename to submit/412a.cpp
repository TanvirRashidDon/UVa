#include<bits/stdc++.h>

int main()
{
    freopen("in412a.txt","r",stdin);
    int i,j,x,n,a[50],b[50],d,e,f;
    while(scanf("%d",&n)&&n){
        int flag[50]={},par=0,cmnfac=0;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n-1;i++){
            x=1;
            for(j=i+1;j<n&&!flag[i];j++)
                if(a[i]==a[j])
                    flag[j]=x++;
        }
        for(i=0,j=0;i<n;i++)
            if(flag[i]<2)
                b[j++]=a[i];
        for(i=0;i<j-1;i++){
            for(n=i+1;n<j;n++){
                par++;
                if(b[i]>b[n]){
                    d=b[i];
                    e=b[n];}
                else{
                    d=b[n];
                    e=b[i];}
                while(e){
                    f=e;
                    e=d%e;
                    d=f;}
                if(d==1)cmnfac++;
            }
        }
        if(cmnfac)
            printf("%.6f\n",(float)sqrt(6*par/cmnfac));
        else
            printf("No estimate for this data set.\n");
    }
}
