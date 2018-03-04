#include<stdio.h>

using namespace std;
int main()
{
    char a[5];
    float h,m,x;
    scanf("%s",&a);
    sscanf(a,"%f:%f",&h,&m);
    while(h||m){
        x=h*30-m*5.5;   //h*30+m/2-m*6;
        x=x<0?-x:x;
        if(x==360)
            x=0;
        if(x>180.0)
            x=360-x;
        printf("%.3f\n",x);
        scanf("%s",&a);
        sscanf(a,"%f:%f",&h,&m);
    }
    return 0;
}
