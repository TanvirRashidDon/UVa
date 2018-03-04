#include<stdio.h>

int main()
{
    int a,b,c,d,e[3],i,n,j=0,k,l,m=0;
    scanf("%d",&n);
    while(j<n)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        for(i=0;i<3;i++)
        {
            scanf("%d",&e[i]);
            if(i!=0)
                if(e[i]>e[i-1])
                {
                    l=e[i-1];
                    e[i-1]=e[i];
                    e[i]=l;
                }
        }
        k=a+b+c+d+((e[0]+e[1])/2);
        if(k>=90)
            printf("Case %d: A\n",++m);
        else if(k>=80)
            printf("Case %d: B\n",++m);
        else if(k>=70)
            printf("Case %d: C\n",++m);
        else if(k>=60)
            printf("Case %d: D\n",++m);
        else
            printf("Case %d: F\n",++m);
        j++;
    }
}
