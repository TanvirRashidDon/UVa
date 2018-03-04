#include<stdio.h>


int main()
{
    int t,i,a[10];bool b;
    //freopen("11942.txt","r",stdin);
    scanf("%d",&t);
    printf("Lumberjacks:\n");
    while(t--){
        i=0;b=1;
        scanf("%d%d%d%d%d%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9]);
        while(a[i]==a[i+1]&&i<9)
            i++;
        while(a[i]>a[i+1]&&i<9){
            i++;
            b=0;
            while(a[i]==a[i+1]&&i<9)
            i++;
        }
        while(b&&a[i]<a[i+1]&&i<9){
            i++;
            while(a[i]==a[i+1]&&i<9)
            i++;
        }
        if(i==9)
            printf("Ordered\n");
        else
            printf("Unordered\n");
    }
    return 0;
}
