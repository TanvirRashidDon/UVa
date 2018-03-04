#include<stdio.h>
#include<math.h>

int main()
{
    double l,w,h,h2,a,pi=M_PI;
    //freopen("11909.txt","r",stdin);
    while(scanf("%lf%lf%lf%lf",&l,&w,&h,&a)==4){
        h2=l*tan(a*pi/180.0);
        if(h2<h)
            printf("%.3lf mL\n",w*l*(h-h2/2.0));
        else
            printf("%.3lf mL\n",w*h*h*tan((90-a)*pi/180.0)/2.0);
    }
    return 0;
}
