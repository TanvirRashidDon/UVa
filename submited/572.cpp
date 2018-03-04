#include<bits/stdc++.h>
using namespace std;

string a[100];
bool b[105][105]={};
int m,n,i,j;
void src(int i,int j){
    if(!b[i][j])return;
    b[i][j]=0;
    if(i<1||i>m||j<1||j>n)return;
    if(a[i-1][j-1]=='*')return;
    src(i-1,j-1);
    src(i-1,j);
    src(i-1,j+1);
    src(i,j-1);
    src(i,j+1);
    src(i+1,j-1);
    src(i+1,j);
    src(i+1,j+1);
}

int main()
{
    //freopen("572.txt","r",stdin);
    while(scanf("%d %d",&m,&n)&&m){
        for(i=0;i<m;i++)
            cin>>a[i];
        memset(b,1,sizeof(b));
        int op=0;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if((a[i][j]=='@')&&(b[i+1][j+1])){
                    src(i+1,j+1);
                    op++;}
            }
        }
        printf("%d\n",op);
    }
    return 0;
}
