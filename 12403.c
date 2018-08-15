#include<stdio.h>
#include<string.h>
int main(){
    char s[10],e[]="donate",f[]="report";
    char d;
    int a,n,c=0,k,i,g;
    scanf("%d",&n);
    scanf("%c",&d);
    for(i=1;i<n+1;i++){
        gets(s);
        if(g=strcmp(s,e)==0){
            scanf("%d",&k);
              c=c+k;
              a=c;
        }
        else if(g=strcmp(s,f)==0){
            printf("%d\n",a);
        }
    }
    return 0;
}
