#include<cstdio>
#include<vector>
using namespace std;

int main()
{
    char s[31];
    int r,i,j;
    //vector<char>v[130];
    //v['a'].push_back('a');
    while(gets(s)&&scanf("%d",r)){
        vector<char>v[130];
        for(i=0;s[i];i++)
            v[s[i]].push_back(s[i]);
        for(i=97;i<123;i++){
            printf("_|_");
            for(j=0;j<v[i].size();j++)
            printf("%c ",v[i][j]);
            printf("\n");
            }
    }
}
