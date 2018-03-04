#include<stdio.h>

int main()
{
    int t,tc=0,d1,d2,m1,m2,y1,y2,y;
    char a[11],b[11];
    scanf("%d",&t);
    while(tc<t){
        scanf("%s %s",&a,&b);
        sscanf(a,"%d/%d/%d",&d1,&m1,&y1);
        sscanf(b,"%d/%d/%d",&d2,&m2,&y2);
        if(d1<d2)
            m1--;
        if(m1<m2)
            y1--;
        y=y1-y2;
        if(y<0)
            printf("Case #%d: Invalid birth date\n",++tc);
        else if(y>130)
            printf("Case #%d: Check birth date\n",++tc);
        else
            printf("Case #%d: %d\n",++tc,y);
    }
    return 0;
}
