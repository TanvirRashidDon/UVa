#include<stdio.h>

int main()
{
    char a[50];int tc=0;
    while(scanf("%s",&a)&&a[0]!='*'){
        if(a[0]=='H')
            printf("Case %d: Hajj-e-Akbar\n",++tc);
        else printf("Case %d: Hajj-e-Asghar\n",++tc);
    }
    return 0;
}
