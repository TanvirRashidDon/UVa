#include<stdio.h>

int main()
{
    int t,tc=0;float x,y,z,in;
    scanf("%d",&t);
    while(tc<t){
        scanf("%f",&in);
        x=in*2.25;
        y=in*1.5;
        z=in*2.75;
        printf("Case %d:\n-%.0f %.0f\n%.0f %.0f\n%.0f -%.0f\n-%.0f -%.0f\n",++tc,x,y,z,y,z,y,x,y);
    }
}
