#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    long int t,tc=0,x,i,s;
    scanf("%ld",&t);
    while(tc<t){
        s=0;
        vector<long int>v;
        for(i=0;i<3;i++){
            scanf("%ld",&x);
            v.push_back(x);
            s+=x;}
        sort(v.begin(),v.end());
        x=0;
        if((s-=v[2])>v[2]){
            if(v[0]==v[1]){
                x++;
                if(v[0]==v[2])
                    x++;
            }
            else if(v[1]==v[2])
                x++;
            if(!x)
                printf("Case %d: Scalene\n",++tc);
            else if(x==1)
                printf("Case %d: Isosceles\n",++tc);
            else
                printf("Case %d: Equilateral\n",++tc);
        }
        else
            printf("Case %d: Invalid\n",++tc);
    }
    return 0;
}

