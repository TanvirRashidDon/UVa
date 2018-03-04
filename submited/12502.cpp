#include<stdio.h>

int main()
{
    float x,y,z,a;int t;
    scanf("%d",&t);
    while(t--){
        scanf("%f%f%f",&x,&y,&z);
        if(x/2>=y)
            printf("%.0f\n",z);
        else if(y/2>=x)
            printf("0\n");
        else{
        a=(2*x-y)/3;
        y=(2*y-x)/3;
        printf("%.0f\n",z*a/(a+y));}
    }
    return 0;
}
