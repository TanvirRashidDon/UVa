#include<bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in10004.txt","r",stdin);
    int x,y,i,j,n,e,s;
    while(scanf("%d %d",&n,&e)&&n){
        vector<int>node[200];
        for(i=0;i<e;i++){
            scanf("%d%d",&x,&y);
            node[x].push_back(y);
            node[y].push_back(x);
        }
        if(e<n){
            printf("BICOLORABLE.\n");
            continue;}
        bool color[200]={},b=1,c=1,taken[200]={};
        queue<int>q;
        q.push(0);
        taken[0]=color[0]=b;
        while(!q.empty()){
            int u=q.front();
            q.pop();
            s=node[u].size();
            b=1-color[u];
            for(i=0;i<s;i++){
                int v=node[u][i];
                color[v]=b;
                if(!taken[v]){
                    q.push(v);
                    taken[v]=1;}
            }
            if(!color[0]){
                c=0;break;}
        }
        for(i=0;i<n&&c;i++){
            s=node[i].size();
            b=1-color[i];
            for(j=0;j<s;j++)
                if(color[node[i][j]]!=b){
                    c=0;break;}
        }
        if(c)
            printf("BICOLORABLE.\n");
        else
            printf("NOT BICOLORABLE.\n");
    }
    return 0;
}
