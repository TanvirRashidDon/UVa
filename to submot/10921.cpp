#include<stdio.h>
#include<string.h>

int main()
{
    char s[31];
    int i,a[100],j=2;
    for(i=65;i<79;i+=3){
        a[i]=a[i+1]=a[i+2]=j++;
    }
    a[80]=a[81]=a[82]=a[83]=7;
    a[84]=a[85]=a[86]=8;
    a[87]=a[88]=a[89]=a[90]=9;
    while(scanf("%s",&s)==1){
        for(i=0;s[i];i++){
            if(s[i]<65)
                printf("%c",s[i]);
            else
                printf("%d",a[s[i]]);
        }
        printf("\n");
    }
    return 0;
}
