#include<stdio.h>


int main()
{
    char c[600],ch;
    int m,a,r,g,i,t,j,tc,o;
    scanf("%d%c",&tc,&ch);
    while(tc--){
        gets(c);m=a=r=g=i=t=0;
        for(j=0;c[j];j++){
            switch(c[j]){
                case 'A':a++;break;
                case 'M':m++;break;
                case 'R':r++;break;
                case 'G':g++;break;
                case 'I':i++;break;
                case 'T':t++;break;
            }
        }
        o=a/3;
        if(o>r/2)o=r/2;
        if(o>m)o=m;
        if(o>g)o=g;
        if(o>i)o=i;
        if(o>t)o=t;
        printf("%d\n",o);
    }
    return 0;
}
