#include<cstdio>
#include<set>

using namespace std;


int main()
{
    long int t,tc=0,a,b,i;
    char s[10000];
    scanf("%ld",&t);
    while(tc<t){
        set<char[]>sa;
        scanf("%ld %ld",&a,&b);
        for(i=0;i<a;i++)
            scanf("%s",&s);
        printf("Case %ld: %ld\n",++tc,a*b);
    }
}
