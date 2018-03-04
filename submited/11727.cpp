#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    long int t,tc=0,i,x;
    scanf("%ld",&t);
    while(tc<t){
        vector<int>s;
        for(i=0;i<3;i++){
            scanf("%ld",&x);
            s.push_back(x);}
        sort(s.begin(),s.end());
        printf("Case %ld: %ld\n",++tc,s[1]);
    }
    return 0;
}
