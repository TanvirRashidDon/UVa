#include<stdio.h>

int main()
{
    char a[10000];
    int x,i;
    bool f,c;
    while(gets(a)){
        x=0;f=c=0;
        for(i=0;a[i];i++){
            if((a[i]<='z'&&a[i]>='a')||(a[i]<='Z'&&a[i]>='A')){
                c=f?0:1;f=1;}
            else f=0;
            if(f&&c)
                x++;
        }
        printf("%d\n",x);
    }
}
