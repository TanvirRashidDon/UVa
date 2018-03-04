#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

int main()
{
    char in[5];
    int x1,x2,y1,y2;
    bool b[8][8]={0};
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++)
            cout<<b[i][j]<<" ";
        cout<<endl;
    }

    while(gets(in)){
        x1=in[0]-97;
        x2=in[1]-49;
        y1=in[3]-97;
        y2=in[4]-49;
        printf("%d %d %d %d",x1,x2,y1,y2);
    }
}
