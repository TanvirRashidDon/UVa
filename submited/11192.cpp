#include<stdio.h>
#include<string.h>

int main()
{
    int x,i,p1,p2,l;
    char a[101];
    while(scanf("%d",&x)&&x){
        scanf("%s",a);
        l=strlen(a);
        x=l/x;
        p1=0;p2=x;
        while(p2<=l){
            for(i=p2-1;i>=p1;i--)
                printf("%c",a[i]);
            p1+=x;
            p2+=x;
        }
        printf("\n");
    }
    return 0;
}
