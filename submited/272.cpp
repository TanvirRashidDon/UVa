#include<stdio.h>
#include<string.h>

int main()
{
    char a[10000];
    int i;bool b=1;
    freopen("in272.txt","r",stdin);
    while(gets(a)){
        for(i=0;a[i];i++){
            if(a[i]=='"'){
                if(b){
                    printf("``");
                    b=0;continue;}
                else{
                    printf("''");
                    b=1;continue;}
            }
            printf("%c",a[i]);
        }
        printf("\n");
    }
    return 0;
}
