#include<bits/stdc++.h>

int main()
{
    long int i,T,f,x,y,z,o;
    scanf("%ld",&T);
    while(T--){
        scanf("%ld",&f);
        o=0;
        for(i=0;i<f;i++){
            scanf("%ld%ld%ld",&x,&y,&z);
            o+=(x*z);
        }
        printf("%ld\n",o);
    }
    return 0;
}
