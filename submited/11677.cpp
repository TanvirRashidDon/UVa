#include<stdio.h>

int main()
{
    int h1,m1,h2,m2;
    while(scanf("%d%d%d%d",&h1,&m1,&h2,&m2)&&(h1||m1||h2||m2)){
        m1=m2-m1;
        if(m1<0){
            m1+=60;
            h2--;
        }
        h1=h2-h1;
        if(h1<0)
            h1+=24;
        printf("%d\n",h1*60+m1);
    }
    return 0;
}
