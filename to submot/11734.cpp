#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b[21],c;
    int t,tc=0,i,j,f,la,lb;
    scanf("%d%c",&t,&c);
    while(tc<t){
        f=1;
        gets(a);
        gets(b);
        la=strlen(a);
        lb=strlen(b);
        if(la<lb){
            printf("Case %d: Wrong Answer\n",++tc);
            continue;}
        for(i=0,j=0;i<l;i++,j++){
            if(a[i]!=b[j]){
                if(a[i]!=' '){
                    f=2;
                    break;}
                while(a[i]==' ')
                    i++;
                f=0;
            }
        }
        if(f==1)
            printf("Case %d: Yes\n",++tc);
        else if(!f)
            printf("Case %d: Output Format Error\n",++tc);
        else
            printf("Case %d: Wrong Answer\n",++tc);
    }
    return 0;
}
