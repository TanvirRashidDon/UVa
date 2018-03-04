#include<bits/stdc++.h>
using namespace std;
map<string,int>gmap;
vector<int>node[201];
vector<int>cost[201];

int mw(string s1,string s2){

}

int main()
{
    int n,e,c;
    string s1,s2,s[201];
    while(scanf("%d %d",&n,&e)&&n){
        int i,x=3,y,z;
        cin>>s1>>s2>>c;
        gmap[s1]=1;
        gmap[s2]=2;
        s[1]=s1;
        s[2]=s2;
        node[1].push_back(2);
        node[2].push_back(1);
        cost[1].push_back(c);
        cost[2].push_back(c);
        for(i=1;i<e;i++){
            cin>>s1>>s2>>c;
            if(!gmap[s1]){
                gmap[s1]=x++;
                s[x]=s1;}
            if(!gmap[s2]){
                gmap[s2]=x++;
                s[x]=s2;}
            gmap[s1]=y;
            gmap[s2]=z;
            node[y].push_back(z);
            node[z].push_back(y);
            cost[y].push_back(c);
            cost[z].push_back(c);
        }
        cin>>s1>>s2;

    }
}
