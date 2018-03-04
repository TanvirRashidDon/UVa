#include<cstdio>
#include<cmath>
#include<iostream>

using namespace std;

int main()
{
    //freopen("in1047.txt","r",stdin);
    double a,b,c,d;
    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF){
        if(a<=0||b<=0||c<=0){
            printf("-1.000\n");
            continue;}
        d=(a+b+c)/2.0;
        d=d*(d-a)*(d-b)*(d-c);
        if(d<=0){
            printf("-1.000\n");
            continue;}
        d=4/3.0*sqrt(d);
        printf("%.3lf\n",d);
    }
    return 0;
}
