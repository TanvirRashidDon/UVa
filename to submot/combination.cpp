#include<cstdio>
#include<iostream>
#include<cstring>

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
    int x=1,y,i,j,l;
    bool f=0;
    char a[10],b[10],c;
    gets(a);b[0]=a[0];
    l=strlen(a);
    for(i=1;i<l;i++){
        c=a[i];f=1;
        for(j=0;j<i;j++){
            if(a[j]==c){
                f=0;
                break;}
        }
        if(f)b[x++]=c;
    }
    cin>>y;
    for(i=0;i<x;i++)
        printf("%c",b[i]);
    if(x<y)
        printf("imposible\n");
    else{
        printf("\n%dC%d=%.0lf\n",x,y,ncr(x,y));
    for(i=0;i<x;i++){
        for(j=i+1;j<x;j++)
            printf("%c%c\n",b[i],b[j]);}
    }
}
