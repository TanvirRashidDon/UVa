#include<bits/stdc++.h>

int f(int x){
    int z=0;
    while(x){
        z+=x%10;
        x/=10;}
    return z;
}

int main()
{
    char a[1000];
    int x,i,j;
    while(gets(a)&&a[0]-48){
        x=0;
        for(i=0;a[i];i++)
            x+=a[i]-48;
        if(x%9){
            printf("%s is not a multiple of 9.\n",a);
            continue;}
        i=1;
        while(x>9){
            x=f(x);
            i++;
        }
        printf("%s is a multiple of 9 and has 9-degree %d.\n",a,i);
    }
    return 0;
}
