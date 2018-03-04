#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int x,n,h,s=0;
    scanf("%d",&n);
    while(n){
        vector<int>a;
        int sum=0,result=0;
        for(int i=0;i<n;i++){
            scanf("%d",&x);
            a.push_back(x);
            sum+=x;}
        sort(a.begin(),a.end());
        h=sum/n;
        for(int l=a.size()-1;a[l]>h;l--)
            result+=a[l]-h;

        printf("Set #%d\nThe minimum number of moves is %d.\n\n",++s,result);
        scanf("%d",&n);
    }
    return 0;
}
