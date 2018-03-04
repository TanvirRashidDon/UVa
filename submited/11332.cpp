#include<stdio.h>

int sd(int x){
    int sum=0;
    while(x){
        sum+=x%10;
        x/=10;
    }
    return sum;
}

int main()
{
    char a[11];
    int sum,i;
    while(scanf("%s",&a)&&a[0]-48){
        sum=0;
        for(i=0;a[i];i++)
            sum+=a[i]-48;
        if(sum<10){
            printf("%d\n",sum);
            continue;}
        i=sd(sum);
        while(i>9)
            i=sd(i);
        printf("%d\n",i);
    }
    return 0;
}
