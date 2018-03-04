#include<stdio.h>

int main()
{
    bool a[3];
    while(scanf("%d%d%d",&a[0],&a[1],&a[2])==3){
        if(a[0]==a[1]){
            if(a[0]==a[2])
                printf("*\n");
            else
                printf("C\n");
        }
        else{
            if(a[0]==a[2])
                printf("B\n");
            else
                printf("A\n");
        }
    }
    return 0;
}
