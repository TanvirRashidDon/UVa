#include<cstdio>
#include<iostream>

using namespace std;

double ncr(int n,int r){
    double num=1;
    int x=n-r+1;
    if(r>n-r){
        x=r+1;
        r=n-r;}
    for(int i=r;i;i--,x++)
        num*=(double)x/i;
    return num;
}

int main()
{
    int x,y;
    cin>>x>>y;
    printf("%.0lf",ncr(x,y));
}
