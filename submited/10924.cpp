#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#define maxm 1041
using namespace std;

bool a[maxm+1];
void seav()
{
   for(int i=4;i<maxm+1;i+=2)
       a[i]=false;
   int n=sqrt(maxm);
   for(int i=3;i<n;i+=2){
       if(a[i]==true)
          for(int j=i*i;j<=maxm;j+=2*i)
            a[j]=false;}
}

int main()
{
    int i,sum;
    char s[22];
    memset(a,true,sizeof(a));
    seav();
    while(scanf("%s",&s)==1){
        sum=i=0;
        for(;s[i];i++){
            if(s[i]>90)
                 sum+=(s[i]-96);
            else
                sum+=(s[i]-38);
        }
        if(a[sum])
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
    }
    return 0;
}

