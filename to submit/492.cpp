#include<stdio.h>
char a[100000];
void pig(int s,int i){
    bool v=0;
    for(int j=s;j<i;j++){
        /*if(a[j]=='A'||a[j]=='E'||a[j]=='I'||a[j]=='O'||a[j]=='U'||a[j]=='a'||a[j]=='e'||a[j]=='i'||a[j]==''||a[j]=='o'||a[j]=='u'){
            v=1;
        }
        else{
            v=0;
        }*/
        printf("%c",a[j]);
    }
}
int main()
{
    int i,s;bool f,c;
    while(gets(a)){
        f=c=0;
        for(i=0;a[i];i++){
            if((a[i]<='z'&&a[i]>='a')||(a[i]<='Z'&&a[i]>='A')){
                c=f?0:1;if(!f&&c)s=i;f=1;}
            else
                f=0;
            if(!f&&!c){
                //printf("pass->%d=",i);
                pig(s,i);
                c=1;}
            if(!f) printf("%c",a[i]);
        }
        pig(s,i);
    }
}
