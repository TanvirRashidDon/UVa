#include<cstdio>
#include<iostream>
#include<bitset>
#include<cstring>
#include<string>
#include<cmath>
#include<conio.h>
#define P printf(
#define S scanf(
using namespace std;
int lowerbound(int x);
int upperbound(int x);
int s[]={1,1,1,1,2,2,2,2,3,3,3,3,4,4,5,5,5,5,6,6,7,7,8,8,9,10,11,12,13,14,15,16,17,18,19,20};

int main()
{
    int x;
    S"%d",&x);
    P"Lower Bound=> %d\n",lowerbound(x));
    P"Upper Bound=> %d\n",upperbound(x));
}

int lowerbound(int x){
    int lo=0,hi=sizeof(s)/4-1,mid,b=-1;
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(s[mid]>=x){
            if(s[mid]==x)
                b=mid;
            hi=mid-1;
        }else lo=mid+1;
    }
    return b;
}

int upperbound(int x){
    int lo=0,hi=sizeof(s)/4-1,mid,b=-1;
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(s[mid]<=x){
            if(s[mid]==x)
                b=mid;
            lo=mid+1;
        }else hi=mid-1;
    }
    return b;
}

