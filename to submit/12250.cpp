#include<stdio.h>

int main()
{
    char a[14];int t=0;
    while(scanf("%s",&a)&&a[0]!='#')
        switch(a[0]){
            case 'B':printf("Case %d: FRENCH\n",++t);break;
            case 'C':printf("Case %d: ITALIAN\n",++t);break;
            case 'Z':printf("Case %d: RUSSIAN\n",++t);break;
            case 'H':{
                switch(a[1]){
                case 'E':printf("Case %d: ENGLISH\n",++t);break;
                case 'O':printf("Case %d: SPANISH\n",++t);break;
                case 'A':printf("Case %d: GERMAN\n",++t);break;
                default:printf("Case %d: UNKNOWN\n",++t);}
                break;}
            default:printf("Case %d: UNKNOWN\n",++t);
        }
    return 0;
}
