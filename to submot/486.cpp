#include<stdio.h>

int main()
{
    char a[1000];
    int i,f=1;
    while(gets(a)){
        for(int i=0;a[i];i++){
            if(f){
            if(a[i]=='z')
                printf("0");
            else if(a[i]=='o')
                printf("1");
            else if(a[i]=='n'){
                if(a[i+4]==' ')
                    printf("9");
                else if(a[i+5]=='i')
                    printf("-");
                else if(a[i+5]=='e')
                    printf("19");
                else if(a[i+5]=='y')
                    printf("90");
                }
            else if(a[i]=='e'){
                if(a[i+5]==' ')
                    printf("8");
                else if(a[i])
            }
            }
        }
    }
}
