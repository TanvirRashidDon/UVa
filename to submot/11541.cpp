#include<stdio.h>

int main()
{
    char in[200],c;
    int i,t,tc=0,j,x;
    scanf("%d",&t);
    while(tc<t){
        scanf("%s",&in);
        printf("Case %d: ",++tc);
        for(i=1;in[i];i++){
            c=in[i-1];x=0;
            while(in[i]<64&&in[i]){
                x=x*10+in[i]-48;
                i++;
            }
            printf("%d %d",i,x);
            for(j=0;j<x;j++)
                printf("%c",c);
        }
        printf("\n");
    }
    return 0;
}
