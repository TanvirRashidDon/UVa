#include<stdio.h>

char a[1000000],c;
void p(int s,int e){
    for(int i=e;i>=s;i--)
        printf("%c",a[i]);
}
int main()
{
    int i,s;
    while(gets(a)!=NULL){
        s=0;
        for(i=0;a[i];i++){
           if(a[i]==' '){
                p(s,i-1);
                s=i+1;
                printf(" ");
           }
        }
         p(s,i-1);
         printf("\n");
    }
    return 0;
}
