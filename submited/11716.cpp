#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    char in[10000],c;
    int t,l,i,j,n;
    bool a[10001];
    memset(a,true,sizeof(a));
    for(i=1;i<101;i++)
        a[i*i]=0;
    scanf("%d%c",&t,&c);
    while(t--){
        gets(in);
        l=strlen(in);
        if(a[l]){
            printf("INVALID\n");
            continue;}
        n=(int)sqrt(l);
        for(i=0;i<n;i++)
            for(j=i;j<l;j+=n)
            printf("%c",in[j]);
        printf("\n");
    }
    return 0;
}
