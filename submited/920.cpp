#include<cstdio>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;

bool compare(pair<float,float>x,pair<float,float>y){
    return x.first>y.first;
}
int main()
{
    //freopen("920.txt","r",stdin);
    int T,n,i;
    float x,y,k,sum;
    scanf("%d",&T);
    while(T--){
        vector<pair<float,float> >v;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%f%f",&x,&y);
            v.push_back(make_pair(x,y));
        }
        sort(v.begin(),v.end(),compare);
        sum=sqrt(pow(v[0].first-v[1].first,2)+pow(v[0].second-v[1].second,2));
        x=v[1].second;
        for(i=2;i<n;i++){
            if(x>v[i].second) continue;
            k=(v[i].second-x)/(x-v[i-1].second);
            k=(k*v[i-1].first+v[i].first)/(k+1);
            sum+=sqrt(pow(v[i].first-k,2)+pow(v[i].second-x,2));
            x=v[i].second;
        }
        printf("%.2f\n",sum);
    }
    return 0;
}
