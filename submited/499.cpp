#include<iostream>
#include<cstdio>
#include<string>
#include<map>

using namespace std;

int main()
{
    char a[10000];
    int i,mx;
    while(gets(a)){
        map<char,int>m;
        map<char,int>::iterator it,s;
        mx=i=0;
        for(;a[i];i++){
            if(a[i]<65)
            continue;
            m[a[i]]++;
            if(m[a[i]]>mx)
                mx=m[a[i]];
        }
        it=m.begin();
        s=m.end();
        for(;it!=s;it++){
            if(it->second==mx)
                printf("%c",it->first);
        }
        printf(" %d\n",mx);
    }
    return 0;
}
