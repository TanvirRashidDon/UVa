#include<cstdio>
#include<vector>
#include<string>
#include<iostream>
using namespace std;

int main()
{
    int t,tc=0,i,x,mx;string si;
    scanf("%d",&t);
    while(tc<t){
        vector<string>s;
        vector<int>d;
        mx=0;
        for(i=0;i<10;i++){
            cin>>si>>x;
            s.push_back(si);
            d.push_back(x);
            if(x>mx)
                mx=x;
        }
        printf("Case #%d:\n",++tc);
        for(i=0;i<10;i++){
            if(d[i]==mx)
                cout<<s[i]<<endl;
        }
    }
}
