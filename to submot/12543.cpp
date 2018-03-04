#include<stdio.h>

int main()
{
    char in[1000],word[100];
    int x,i,p,bx=0,o,j;
    freopen("12543.txt","r",stdin);
    while(gets(in)){
        for(i=0;in[i];i++){
            p=i;x=0;
            for(;in[i]!=' ';i++)
                x++;
            if(x>bx){
                bx=x;
                for(j=0;in[p]!=' ';j++,p++)
                    word[j]=in[p];
            }

        }
        printf("_|_");
    }
    for(i=0;word[i]!=' ';i++)
        printf("%c",word[i]);


}
