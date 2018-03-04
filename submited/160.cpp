#include<stdio.h>

int main()
{
    int i,j,x,y,p[]={2,3,5,7,11,13,17,19,23,29,31,37,41,
                   43,47,53,59,61,67,71,73,79,83,89,97};
    while(scanf("%d",&x)&&x){
        int o[27]={};
        for(j=x;j>1;j--){
            i=0;y=j;
            while(y!=1){
                while(!(y%p[i])){
                    y/=p[i];
                    o[i]++;}
                i++;
            }
        }
        printf("%3d! =",x);
        for(i=0;o[i];i++){
            if(i==15)
            printf("\n%6c",' ');
            printf("%3d",o[i]);}
        printf("\n");
    }
    return 0;
}
