#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t,tc=0,n,x,i;
    scanf("%d",&t);
    while(tc<t){
        scanf("%d",&n);
        vector<int>a;
        for(i=0;i<n;i++){
            scanf("%d",&x);
            a.push_back(x);}
        sort(a.begin(),a.end());
        printf("Case %d: %d\n",++tc,a[n/2]);
    }
    return 0;
}
