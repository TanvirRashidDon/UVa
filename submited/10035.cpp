#include<stdio.h>

int main()
{
    unsigned long a,b,x,c;
    while(scanf("%lu%lu",&a,&b)&&(a||b)){
        x=0;c=0;
        while(a||b){
            if(a%10+b%10+c>9){
                c=1;x++;}
            else c=0;
            a/=10;b/=10;
        }
        if(!x)
            printf("No carry operation.\n");
        else if(x==1)
            printf("%d carry operation.\n",x);
        else
            printf("%d carry operations.\n",x);
    }
}
