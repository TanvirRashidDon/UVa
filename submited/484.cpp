#include<map>
#include<string>
#include<iostream>

using namespace std;

int main()
{
    string a[100000];
    int k=0;
    map<string,int>m;
    while(cin>>a[k]){
        m[a[k]]++;
        if(m[a[k]]==1)k++;
    }
    for(int i=0;i<k;i++)
        cout<<a[i]<<" "<<m[a[i]]<<endl;
}
