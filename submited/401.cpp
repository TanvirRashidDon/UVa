#include<stdio.h>
#include<string.h>

int main()
{
    char in[20],a[91]={0};
    int i,l;bool p,m,pm;
    a['A']='A';a['E']='3';a['H']='H';a['I']='I';
    a['J']='L';a['L']='J';a['M']='M';a['O']='O';
    a['S']='2';a['T']='T';a['U']='U';a['V']='V';
    a['W']='W';a['X']='X';a['Y']='Y';a['Z']='5';
    a['1']='1';a['2']='S';a['3']='E';a['5']='Z';a['8']='8';
    while(scanf("%s",&in)!=EOF){
        l=strlen(in)-1;p=1;m=1,pm=1;
        for(i=0;i<=l-i;i++)
            if(in[i]!=in[l-i]||in[i]!=a[in[i]]){
                pm=0;break;}
        if(pm){
            printf("%s -- is a mirrored palindrome.\n\n",in);continue;}
        for(i=0;i<=l-i;i++)
            if(in[i]!=in[l-i]){
                p=0;break;}
        if(p){
            printf("%s -- is a regular palindrome.\n\n",in);continue;}
        for(i=0;i<l-i;i++)
            if(in[i]!=a[in[l-i]]||!a[in[i]]){
                m=0;break;}
        if(m){
            printf("%s -- is a mirrored string.\n\n",in);continue;}

        printf("%s -- is not a palindrome.\n\n",in);
    }
    return 0;
}
