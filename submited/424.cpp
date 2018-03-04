#include<stdio.h>
#include<string.h>

int i,l;
char a[102]={},b[102];
void add(){
    int j,lb,va,vb,carry=0;
    lb=strlen(b);
    l=i>lb?i:lb;
    l++;
    for(j=0;j<l;j++){
        --lb;
        va=j>=i?0:(a[j]-48);
        vb=lb<0?0:(b[lb]-48);
        a[j]=((va+vb+carry)%10)+48;
        carry=(va+vb+carry)/10;
    }
    i=j--;
    if(!(a[j]-48))
        i--;
}
int main()
{
    scanf("%s",&b);
    for(i=0,l=strlen(b)-1;l>=0;i++,l--)
        a[i]=b[l];
    while(scanf("%s",&b)&&b[0]-48)
        add();
    for(l=i-1;l>=0;l--)
        printf("%c",a[l]);
    printf("\n");
    return 0;
}

