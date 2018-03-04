#include<bits/stdc++.h>

int main()
{
    char f[100][100];
    int m,n,i,j,x=0;
    while(scanf("%d%d",&n,&m)&&n){
        if(x)printf("\n");
        for(i=0;i<n;i++){
            scanf("%s",&f[i]);}
        int a[103][103]={};
        for(i=1;i<=n;i++)
            for(j=1;j<=m;j++)
                if(f[i-1][j-1]=='*'){
                    a[i][j]=10;
                    a[i-1][j-1]++;
                    a[i-1][j]++;
                    a[i-1][j+1]++;
                    a[i][j-1]++;
                    a[i][j+1]++;
                    a[i+1][j-1]++;
                    a[i+1][j]++;
                    a[i+1][j+1]++;}
        printf("Field #%d:\n",++x);
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                if(a[i][j]<10)
                    printf("%d",a[i][j]);
                else
                    printf("*");
                }
            printf("\n");
        }
    }
    return 0;
}
