#include<stdio.h>
#include<string.h>

int syn(char *a){
    int l=strlen(a)-1,sum=0;
    for(;l>=0;l--)
    switch(a[l]){
           case 'p' ... 'z':    sum++;    break;
            case 'N':  if(sum<1) return 0; break;
            case 'C':case 'D':case 'E':
            case 'I':if(sum<2) return 0; sum--; break;
            default:return 0;
        }
    return (sum == 1);
}

int main()
{
    char a[256];
    while(gets(a))
        printf("%s\n",syn(a)?"YES":"NO");
    return 0;
}
