#include<stdio.h>

int main()
{
    int t,tc=0,whs,wms,whe,wme,mhs,mms,mhe,mme;
    char in[12],c;bool b;
    freopen("12136.txt","r",stdin);
    scanf("%d%c",&t,&c);
    while(tc<t){
        //scanf("%c",&c);
        gets(in);b=0;
        sscanf(in,"%d:%d %d:%d",&whs,&wms,&whe,&wme);
        //scanf("%c",&c);
        gets(in);
        sscanf(in,"%d:%d %d:%d",&mhs,&mms,&mhe,&mme);
        if(whs>mhe)
            b=1;
        else if(whs==mhe&&wms>mme)
            b=1;
        else if(whe<mhs)
            b=1;
        else if(whe==mhs&&wme<mms)
            b=1;
        if(b)printf("Case %d: Hits Meeting\n",++tc);
        else printf("Case %d: Mrs Meeting\n",++tc);
        if(tc!=t)printf("\n");
    }
    return 0;
}
