#include<stdio.h>
int x,i,k;
char a[10];
void f_1(){
    for(i=0;a[i];i++){
        if(i)printf(" ");
        printf(" ");
        switch(a[i]){
        case '1':case '4':
            for(int j=0;j<x;j++)
                printf(" ");
                break;
        default:
            for(int j=0;j<x;j++)
                printf("-");}
        if(a[i])printf(" ");
    }
    printf("\n");
}

void f_2(){
    for(k=0;k<x;k++){
    for(i=0;a[i];i++){
        if(i)printf(" ");
        switch(a[i]){
        case '5':case '6':
            printf("|");
            for(int j=0;j<x;j++)
                printf(" ");
            printf(" ");
            break;
        case '1':case '2':case '3':case '7':
            printf(" ");
            for(int j=0;j<x;j++)
                printf(" ");
            printf("|");
            break;

        default:
            printf("|");
            for(int j=0;j<x;j++)
                printf(" ");
            printf("|");}
    }
    printf("\n");}
}

void f_3(){
    for(i=0;a[i];i++){
        if(i)printf(" ");
        printf(" ");
        switch(a[i]){
        case '0':case '1':case '7':
            for(int j=0;j<x;j++)
                 printf(" ");
            break;
        default:
            for(int j=0;j<x;j++)
                 printf("-");}
        if(a[i])printf(" ");
    }
    printf("\n");
}

void f_4(){
    for(k=0;k<x;k++){
    for(i=0;a[i];i++){
        if(i)printf(" ");
        switch(a[i]){
        case '2':
            printf("|");
            for(int j=0;j<x;j++)
                printf(" ");
            printf(" ");
            break;
        case '0':case '6':case '8':
            printf("|");
            for(int j=0;j<x;j++)
                printf(" ");
            printf("|");
            break;
        default:
            printf(" ");
            for(int j=0;j<x;j++)
                printf(" ");
            printf("|");}
    }
    printf("\n");
    }
}

void f_5(){
    for(int i=0;a[i];i++){
        if(i)printf(" ");
        printf(" ");
        switch(a[i]){
        case '1':case '4':case '7':
            for(int j=0;j<x;j++)
                 printf(" ");
            break;
        default:
            for(int j=0;j<x;j++)
                 printf("-");
     }
    if(a[i])printf(" ");
    }
}

int main()
{
    while(scanf("%d %s",&x,&a)){
        if(!x&&!(a[0]-48))return 0;
        if(x<1||x>10)continue;
        f_1();
        f_2();
        f_3();
        f_4();
        f_5();
        printf("\n\n");
    }
}
