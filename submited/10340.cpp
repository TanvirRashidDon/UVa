#include<stdio.h>
#include<string.h>

int main()
{
    char a[1000000],b[1000000];
    long int i,j,l;
    while(scanf("%s %s",&a,&b)==2){
        l=strlen(a);
        if(strlen(b)<l){
            printf("No\n");
            continue;}
        for(i=0,j=0;b[i];i++){
            if(a[j]==b[i])
                j++;
        }
        if(j==l)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
