#include<cstdio>
#include<queue>
#include<algorithm>

using namespace std;

struct compare{
    bool operator()(const int& i,const int& r){
    return i>r;}
};

int main()
{
    long int n,nn,x,i,sum,cost;
    while(scanf("%ld",&n)&&n){
        priority_queue<long int, vector<long int>,compare>a;nn=n;sum=0;
        while(n--){
            scanf("%ld",&x);
            a.push(x);}
        sum=0;
        while(!a.empty()){
            cost=a.top();
            a.pop();
            if(a.empty())break;
            cost+=a.top();
            a.pop();
            a.push(cost);
            sum+=cost;
        }
        printf("%ld\n",sum);
    }
    return 0;
}
