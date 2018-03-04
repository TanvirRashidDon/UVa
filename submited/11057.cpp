#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    long int n,x,c,i,j;
    bool b=0;
    //freopen("11057.txt","r",stdin);
    while(scanf("%ld",&n)==1){
        vector<long int>v;
        for(i=0;i<n;i++){
            scanf("%ld",&x);
            v.push_back(x);
        }
        scanf("%ld",&c);
        sort(v.begin(),v.end());
        i=n/2-1;
        while(v[i]<c/2)
            i++;
        while(v[i]>c/2)
            i--;
        x=i+1;b=0;
        for(;i>=0;i--){
            for(j=x;j<n;j++){
                if(v[i]+v[j]==c){
                    b=1;break;}
            }
            if(b)break;
        }
        printf("Peter should buy books whose prices are %ld and %ld.\n\n",v[i],v[j]);
    }
    return 0;
}

