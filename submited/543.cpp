#include<stdio.h>
#include<string.h>
#include<math.h>

#define maxm 1000000
bool a[maxm+1];

void seav(){
    memset(a,true,sizeof(a));
    for(int i=4;i<maxm+1;i+=2)
        a[i]=false;
    int n=sqrt(maxm);
    for(int i=3;i<n;i+=2)
        if(a[i])
            for(int j=i*i;j<=maxm;j+=2*i)
                 a[j]=false;
}

int main()
{
    seav();
    unsigned long long int n,i,j;
    while(scanf("%llu",&n)){
        bool b=1;
        if(!n)return 0;
        if(n>5&&n<(n|1)){
            for(i=3,j=n-3;i<=j;i+=2,j-=2){
                if(i+j==n&&a[i]&&a[j]){
                    printf("%llu = %llu + %llu\n",n,i,j);
                    b=0;break;}}
        }
        if(b)printf("Goldbach's conjecture is wrong.\n");
    }
}
