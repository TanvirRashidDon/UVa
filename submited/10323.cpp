#include<stdio.h>

int main()
{
    long int x;
    while(scanf("%ld",&x)!=EOF){
        if(x<0&&(x<(x|1)))
            printf("Underflow!\n");
        else if(x<0)
            printf("Overflow!\n");
        else
        switch(x){
            case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:
                printf("Underflow!\n");break;
            case 8:printf("40320\n");break;
            case 9:printf("362880\n");break;
            case 10:printf("3628800\n");break;
            case 11:printf("39916800\n");break;
            case 12:printf("479001600\n");break;
            case 13:printf("6227020800\n");break;
            default:printf("Overflow!\n");}
    }
    return 0;
}
