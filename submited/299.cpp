#include<cstdio>
#include<vector>
using namespace std;

int main()
{
    int test,x,d,a;
    scanf("%d",&test);
    while(test--){
        vector<int>data;
        x=0;
        scanf("%d",&d);
        for(int i=0;i<d;i++){
            scanf("%d",&a);
            data.push_back(a);}
        for(int i=0;i<d-1;i++)
            for(int j=0;j<d-1;j++)
                if(data[j]>data[j+1]){
                    data[j]=data[j]^data[j+1];
                    data[j+1]=data[j+1]^data[j];
                    data[j]=data[j]^data[j+1];
                    x++;}
        printf("Optimal train swapping takes %d swaps.\n",x);
    }
}
