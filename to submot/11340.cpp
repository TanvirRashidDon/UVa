#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("11340.txt","r",stdin);
    long long int T,k,i,y,m;
    unsigned char c,c1;
    scanf("%lld",&T);
    while(T--){
        scanf("%lld",&k);
        string s;
        int value[256]={0},x=0;
        for(i=0;i<k;i++){
            scanf("%c%c %lld",&c1,&c,&y);
            value[c]=y;
        }
        scanf("%lld",&m);
        scanf("%c",&c1);
        while(m--){
            getline(cin,s);
            for(i=0;s[i];i++)
                x+=value[s[i]];
        }
        printf("%.2f$\n",(float)x/100.0);
    }
    return 0;
}
