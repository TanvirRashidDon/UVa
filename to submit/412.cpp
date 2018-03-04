#include<bits/stdc++.h>
#include<vector>
#include<cstring>
#define mx 32769
using namespace std;

bool a[mx+2],b;
void seav(){
    memset(a,true,sizeof(a));
    for(int i=4;i<mx+1;i+=2)
        a[i]=false;
    int n=sqrt(mx+1);
    for(int i=3;i<=n;i+=2)
        if(a[i])
            for(int j=i*i;j<mx+1;j+=2*i)
                a[j]=false;
}

int main()
{
    //freopen("in412.txt","r",stdin);
    seav();
    int n,x,i=2,j=0,pairs,cmnfac,prime[3515],a[50];
    for(;i<mx;i++)
        if(a[i]) prime[j++]=i;
    printf("_|_");
    while(scanf("%d",&n)&&n){
        vector<int>v;
        bool a1[50]={},a2[50]={};
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(a1[i]&&a[i]==a[j])
                    a2[j]=1;
                if(a[i]==a[j])
                    a1[i]=1;
            }
        }
        for(i=0;i<n;i++){
            if(!a2[i])
                v.push_back(a[i]);
        }
        for(i=0;i<v.size();i++)
            printf("%d ",v[i]);
        pairs=0,cmnfac=0;

        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                pairs++;b=1;
                if(!(v[i]%v[j])||!(v[j]%v[i]))
                    continue;
                else if(a[v[i]]||a[v[j]])
                    cmnfac++;
                else{
                    for(x=0;prime[x]<v[i]&&prime[x]<v[j];x++)
                        if(!(v[i]%prime[x])&&!(v[j]%prime[x])){
                            b=0;
                            break;}
                    if(b)cmnfac++;}
            }
        }
        if(cmnfac)
            printf("%.6f\n",(float)sqrt(pairs*6/cmnfac));
        else
            printf("No estimate for this data set.\n");

    }
    return 0;
}
