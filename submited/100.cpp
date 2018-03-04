#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int i,j,maxm,n;
    while(scanf("%d%d",&i,&j)==2)
    {
        printf("%d %d ",i,j);
        maxm=0;
        if(i>j){
           i^=j;j^=i;i^=j;}
        for(int m=i;m<=j;m++)
        {
            int x=1;
            n=m;
            while(n!=1)
            {
                 x++;
                if(n%2==0)
                    n=n/2;
                else
                    n=3*n+1;

            }
            if(maxm<x)
                maxm=x;
        }
        printf("%d\n",maxm);
    }
}
