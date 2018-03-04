#include<stdio.h>
#include<string.h>

int main()
{
    int i,j;bool f;
    char a[10000],b[10000];
    while(gets(a)&&(a[0]!='D'&&a[1]!='O'&&a[2]!='N'&&a[3]!='E')){
        j=i=0;f=0;
        for(;a[i];i++){
            if(a[i]>64){
                if(a[i]<90)
                    b[j++]=a[i]+32;
                else b[j++]=a[i];}
        }
        j--;
        i=0;
        for(;i<=j;i++,j--)
            if(b[i]!=b[j]){
                f=1;
                break;}
        if(f)
            printf("Uh oh..\n");
        else
            printf("You won't be eaten!\n");
    }
    return 0;
}
