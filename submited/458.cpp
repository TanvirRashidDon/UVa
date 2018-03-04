#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    while(gets(s)){
    for(int i=0;i<strlen(s);i++)
        printf("%c",s[i]-7);
    printf("\n");
    }
}
