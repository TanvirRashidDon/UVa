#include<cstdio>

int main()
{
    int n,i,j,ii,jj,x,y;
    bool a[100][100],b;
    while(scanf("%d",&n)&&n){
        y=b=0;
        for(i=0;i<n;i++){
            x=0;
            for(j=0;j<n;j++){
                scanf("%d",&a[i][j]);
                if(a[i][j])
                    x++;}
            if(x%2){
                y++;
                ii=i;}
        }
        if(y>1){
            printf("Corrupt\n");
            continue;}
        y=0;
        for(i=0;i<n;i++){
            x=0;
            for(j=0;j<n;j++)
                if(a[j][i])
                    x++;
            if(x%2){
                jj=i;
                y++;
                b=1;}
        }
        if(y>1)
            printf("Corrupt\n");
        else if(b)
            printf("Change bit (%d,%d)\n",ii+1,jj+1);
        else
            printf("OK\n");
    }
    return 0;
}
