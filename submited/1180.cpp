#include<stdio.h>

int main()
{
    int t;unsigned long int x;
    bool a[18]={1,1,0,0,1,0,1,0,1,1,1,1,1,0,1,1,1,0};
    scanf("%d",&t);
    while(t--){
        scanf("%lu,",&x);
        if(a[x]||x>17)
            printf("No\n");
        else printf("Yes\n");
    }
    return 0;
}
