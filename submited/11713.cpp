#include<stdio.h>
#include<string.h>

int main()
{
    int t,l,i;
    char a[100],b[100],c;
    bool s[26],f;
    memset(s,false,sizeof(s));
    s[0]=1;s[4]=1;s[8]=1;s[14]=1;s[20]=1;
    scanf("%d%c",&t,&c);
    while(t--){
        f=1;
        gets(a);
        gets(b);
        l=strlen(a);
        if(l!=strlen(b)){
            printf("No\n");
            continue;}
        for(i=0;a[i];i++){
            if(a[i]!=b[i]){
                if(s[a[i]-97]&&s[b[i]-97])
                    continue;
                else{
                    f=0;
                    break;}
            }
        }
        if(f)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
