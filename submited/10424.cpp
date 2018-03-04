#include<stdio.h>

int sod(int x){
    int sum=0;
    while(x){
        sum+=x%10;
        x/=10;}
    return sum;
}

int main()
{
    char in1[50],in2[50],c;
    int a[200]={0},i,j,x=1;float r;
    for(i='a';i<='z';i++)
        a[i-32]=a[i]=x++;
    //freopen("10424.txt","r",stdin);
    while(gets(in1)){
        //scanf("%c",&c);
        gets(in2);
        x=j=0;
        for(i=0;in1[i];i++)
            x+=a[in1[i]];
        for(i=0;in2[i];i++)
            j+=a[in2[i]];
        i=sod(x);
        while(i>9)
            i=sod(i);
        x=sod(j);
        while(x>9)
            x=sod(x);
        if(i>x){
            r=(float)x*100/i;
            printf("%.2f \%\n",r);}
        else{
            if(x){
            r=(float)i*100/x;
            printf("%.2f \%\n",r);}
            else
                printf("100.00 \%\n");
        }
    }
    return 0;
}
