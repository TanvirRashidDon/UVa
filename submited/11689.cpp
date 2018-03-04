#include<stdio.h>

int main()
{
    int t,x,y,z,o;
    scanf("%d",&t);
    while(t--){
        o=1;
        scanf("%d%d%d",&x,&y,&z);
        x+=y;
        z--;
        if(!x||x%z)
            o=0;

        printf("%d\n",x/z-o);
    }
    return 0;
}
