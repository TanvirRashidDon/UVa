#include<stdio.h>

int main()
{
    char a[5],c;
    int t,h,m;
    scanf("%d%c",&t,&c);
    while(gets(a)){
        sscanf(a,"%d:%d",&h,&m);
        if(m){
            h++;
            m=60-m;}
        else m=0;
        h=24-h;
        if(h>12)
            h-=12;
        if(h<10)
            printf("0");
        printf("%d:",h);
        if(m<10)
            printf("0");
        printf("%d\n",m);
    }
    return 0;
}
