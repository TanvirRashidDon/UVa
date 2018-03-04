#include<stdio.h>

int main()
{
    int x,o,tc=0;
    while(scanf("%d",&x)&&x!=-1){
        if(x<=2){
            o=1;
            if(x==2)
                o++;}
        else if(x<=3){
            o=2;
            if(x==3)
                o++;}
        else if(x<=5){
            o=3;
            if(x==5)
                o++;}
        else if(x<=8){
            o=4;
            if(x==8)
                o++;}
        else if(x<=13){
            o=5;
            if(x==13)
                o++;}
        else if(x<=21){
            o=6;
            if(x==21)
                o++;}
        else if(x<=34){
            o=7;
            if(x==34)
                o++;}
        else if(x<=55){
            o=8;
            if(x==55)
                o++;}
        else if(x<=89){
            o=9;
            if(x==89)
                o++;}
        else if(x<=144){
            o=10;
            if(x==144)
                o++;}
        else if(x<=233){
            o=11;
            if(x==233)
                o++;}
        else if(x<=377){
            o=12;
            if(x==377)
                o++;}
        else if(x<=610){
            o=13;
            if(x==610)
                o++;}
        else if(x<=987){
            o=14;
            if(x==987)
                o++;}
        else if(x<=1597){
            o=15;
            if(x==1597)
                o++;}
        else if(x<=2584){
            o=16;
            if(x==2584)
                o++;}
        else if(x<=4181){
            o=17;
            if(x==4181)
                o++;}
        else if(x<=6765){
            o=18;
            if(x==6765)
                o++;}
        else
            o=20;
        printf("Case %d: %d\n",++tc,o-1);
    }
    return 0;
}
