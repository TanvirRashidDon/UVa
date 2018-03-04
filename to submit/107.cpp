#include<stdio.h>

double func(double x, double y)
{
    double z;
    int a;
    z=x+y;
    return z;
}

int main()
{
  double a,b,m;
  scanf("%lf %lf",&a,&b);
  m=func(a,b);
  printf("%lf",m);
}
