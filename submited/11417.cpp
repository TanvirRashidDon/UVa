#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    long long int s[502],i,j,g=0,c,ii,jj;
    bool a[501];
    memset(a,true,sizeof(a));
    for(int i=4;i<501;i+=2)
       a[i]=false;
    int n=sqrt(501);
    for(i=3;i<n;i+=2){
       if(a[i]==true)
          for(j=i*i;j<=501;j+=2*i)
            a[j]=false;
    }
    for(i=2;i<501;i++){
        if(a[i]){
            g+=i-1;
            s[i]=g;
            continue;}
        for(j=1;j<i;j++){
            c=1;ii=j;jj=i;
            while(c){
                c=jj%ii;
                jj=ii;
                ii=c;
            }
            g+=jj;
        }
        s[i]=g;
    }
    while(scanf("%ldd",&c)&&c)
        printf("%lld\n",s[c]);
    return 0;
}
