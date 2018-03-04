#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t,r,i,x,d;
    scanf("%d",&t);
    while(t--){
        vector<int>a;d=0;
        scanf("%d",&r);
        for(i=0;i<r;i++){
            scanf("%d",&x);
            a.push_back(x);}
        sort(a.begin(),a.end());
        if(r>(r^1))
            x=a[(r+1)/2-1];
        else x=(a[r/2]+a[r/2-1])/2;
        for(i=0;a[i]<=x;i++)
            d+=(x-a[i]);
        for(;i<r;i++)
            d+=(a[i]-x);
        printf("%d\n",d);
    }
    return 0;
}
