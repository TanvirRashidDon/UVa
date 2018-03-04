#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

vector<char>result;
char arr[20];
int taken[20]={0},n;
void back_tracking();

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    back_tracking();
    return 0;
}

void back_tracking(){
    if(result.size()==n){
        for(int i=0;i<n;i++)
            printf("%c",result[i]);
        puts("");
        return;}
    for(int i=0;i<n;i++)
        if(!taken[i]){
            taken[i]=1;
            result.push_back(arr[i]);
            back_tracking();
            taken[i]=0;
            result.pop_back();
        }
}
