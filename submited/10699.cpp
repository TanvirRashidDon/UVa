#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>

using namespace std;
#define maxm 1000000

bool a[maxm+1],b;
void seav(){
   for(int i=4;i<maxm+1;i+=2)
       a[i]=false;
   int n=sqrt(maxm);
   for(int i=3;i<n;i+=2){
       if(a[i]==true)
          for(int j=i*i;j<=maxm;j+=2*i)
            a[j]=false;
   }
}

int main()
{
     memset(a,true,sizeof(a));
     seav();
     int x=0,pr[41539],i=2,s;long int in,in1;
     //freopen("10699.txt","r",stdin);
     for(;i<500000;i++)
         if(a[i])
            pr[x++]=i;
     while(scanf("%ld",&in)&&in){
        x=0;in1=in;
        for(i=0;pr[i]<=in1;i++){
            if(a[in1])break;
            b=1;
            while(!(in1%pr[i])){
                in1/=pr[i];
            if(b){x++;b=0;}}
        }
        if(in1>1)x++;
        printf("%d : %d\n",in,x);
     }
}
