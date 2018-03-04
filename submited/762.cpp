#include<cstdio>
#include<iostream>
#include<bitset>
#include<cstring>
#include<string>
#include<cmath>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<map>
#include<algorithm>
#include<cstdlib>

using namespace std;

int main()
{
    //freopen("in762.txt","r",stdin);
    int e,i;bool b=0;
    while(scanf("%d",&e)==1){
        if(b)printf("\n");
        b=1;
        map<string,int>m;
        string s1,s2;
        vector<int>node[10000];
        vector<string>str(10000);
        int x=1,par[10000]={};
        for(i=0;i<e;i++){
            cin>>s1>>s2;
            if(!m[s1]){
                m[s1]=x++;
                str[x-1]=s1;}
            if(!m[s2]){
                m[s2]=x++;
                str[x-1]=s2;}
            node[m[s1]].push_back(m[s2]);
            node[m[s2]].push_back(m[s1]);
        }
        cin>>s1>>s2;
        if(m[s1]&&m[s2])
            x=m[s2];
        else{
            printf("No route\n");
            continue;}
        queue<int>q;
        bool taken[10000]={};
        q.push(m[s1]);
        taken[m[s1]]=1;
        while(!q.empty()){
            int u=q.front();
            q.pop();
            int s=node[u].size();
            for(i=0;i<s;i++){
                int v=node[u][i];
                if(!taken[v]){
                    taken[v]=1;
                    q.push(v);
                    par[v]=u;}
            }
        }
        if(!par[x]){
            printf("No route\n");
            continue;}
        int pr[10000]={},j=1;
        pr[0]=x;
        while(par[x]){
            pr[j++]=par[x];
            i=par[x];
            x=i;}
        for(j--;j;j--)
            cout<<str[pr[j]]<<" "<<str[pr[j-1]]<<endl;
    }
}
