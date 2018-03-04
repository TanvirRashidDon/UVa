#include<stdio.h>

int main()
{
    int a[8],t,j,k,l,m;
    freopen("in460.txt","r",stdin);
    scanf("%d",&t);
    while(t--){
        for(j=0;j<8;j++)
            scanf("%d",&a[j]);
        j=0;k=4;l=1;m=5;
        if(a[0]>a[4]){
            j=4;k=0;}
        if(a[1]<a[5]){
            l=5;m=1;}
        if(a[j+2]<=a[k])
            printf("No Overlap\n");
        else if(a[l]>a[m+2]||a[l+2]<a[m])
            printf("No Overlap\n");
        else if(a[j+3]>a[k+3]&&a[k+1]>a[j+1])
                printf("%d %d %d %d\n",a[k],a[k+1],a[k+2],a[k+3]);
        else if(a[j+2]>a[k+2]&&a[j+3]<a[k+3]){
            printf("%d %d %d %d\n",a[k],a[l],a[k+2],a[j+3]);
        }
        else printf("%d %d %d %d\n",a[k],a[l],a[j+2],a[m+2]);
        if(t) printf("\n");
    }
}
