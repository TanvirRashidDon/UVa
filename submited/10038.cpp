#include<stdio.h>
#include<algorithm>

int main()
{
    int e,a[3000],y,x,i;bool b;
    while(scanf("%d",&e)!=EOF){
        for(i=0;i<e;i++)
            scanf("%d",&a[i]);
        if(e==1){
            printf("Jolly\n");
            continue;}
        x=0;b=1;
        for(i=1;i<e;i++){
            y=abs(a[i]-a[i-1]);
            x+=y;
            if(b&&!y)b=0;}
        if(!b)e--;
        y=(e*(e-1))/2;
        if(x==y)
            printf("Jolly\n");
        else printf("Not jolly\n");
    }
    return 0;
}
