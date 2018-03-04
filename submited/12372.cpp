#include<stdio.h>

int main()
{
    int t,tc=0,x,y,z;
    scanf("%d",&t);
    while(tc<t){
        scanf("%d%d%d",&x,&y,&z);
        if(x>20){
            printf("Case %d: bad\n",++tc);continue;}
        if(y>20){
            printf("Case %d: bad\n",++tc);continue;}
        if(z>20){
            printf("Case %d: bad\n",++tc);continue;}
        printf("Case %d: good\n",++tc);
    }
    return 0;
}
