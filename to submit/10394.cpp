#include<cstdio>
#include<cmath>
#include<cstring>

#define maxm 18409201
#define l unsigned long long

bool a[maxm+1];
void seav(){
   for(l i=4;i<maxm+1;i+=2)
       a[i]=false;
   int n=sqrt(maxm);
   for(l i=3;i<n;i+=2){
       if(a[i]==true)
          for(l j=i*i;j<=maxm;j+=2*i)
            a[j]=false;}
}

int main()
{
    l i,j=1,x,s[100001];
    memset(a,true,sizeof(a));
    seav();
    for(i=3;j<=100000;i+=2){
        if(a[i]&&a[i+2]){
           s[j++]=i;
        //printf("%llu ",i);
        }
    }
    while(scanf("%llu",&x)==1)
        printf("(%llu, %llu)\n",s[x],s[x]+2);
    return 0;
}
