#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t,n,p,i,x,a,j;
    scanf("%d",&t);
    while(t--){
        vector<int>v;
        scanf("%d%d",&n,&p);
        for(i=0;i<p;i++){
            scanf("%d",&x);
            v.push_back(x);
        }
        //v.push_back(6);
        sort(v.begin(),v.end());
        a=0;
        for(i=0;i<p;i++){
            a+=n/v[i];
            printf("\n%d ",a);
            //a-=n/(v[i]*6);
            a-=n/(v[i]*7);
            //if(!(6%v[i]))
                //a-=n/12;
            printf("%d->",a);
            for(j=0;j<i;j++){
                if(!(v[i]%v[j])){
                    a-=n/v[i];
                    continue;}
                a-=(n/(v[i]*v[j]));
                printf(" %d ",a);
            }
        }

        printf("\n%d\n",a);
    }
    return 0;
}
