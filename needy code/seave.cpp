#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>

using namespace std;
#define maxm 1000000

bool a[maxm+1];


void seav();

int main()
{
     memset(a,true,sizeof(a));
     seav();
     long int x=0,n=maxm;
     scanf("%d",&n);
     for(int i=1;i<n;i++)
     {
         if(a[i]==true){
            printf("%d ",i);
            x++;}
     }
     printf("\ntotal prime=%d",x);
}

void seav()
{
   for(int i=4;i<maxm+1;i+=2)
       a[i]=false;
   int n=sqrt(maxm);
   for(int i=3;i<n;i+=2)
   {
       if(a[i]==true)
          for(int j=i*i;j<=maxm;j+=2*i)
            a[j]=false;
   }
}
