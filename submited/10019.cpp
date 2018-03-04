#include<cstdio>
#include<bitset>
using namespace std;

int main()
{
    int t,y,h;
    scanf("%d",&t);
    while(t--){
        h=0;
        scanf("%d",&y);
        bitset<14>bset(y);
        printf("%d ",bset.count());
        while(y){
            switch(y%10){
                case 0:break;
                case 7:h+=3;break;
                case 1: case 2: case 4: case 8:h+=1;break;
                default:h+=2;
            }
            y/=10;
        }
        printf("%d\n",h);
    }
     return 0;
}
