#include<stdio.h>
#include<iostream>
#include<cstring>

using namespace std;

int main(){
    //freopen("Input.in","r",stdin);
    //freopen("output.out","w",stdout);
    char a[1000];
    int i,num,p,temp,get,store;
    while(gets(a)){
            temp=0;
            store=0;
            strrev(a);
    for(i=0;a[i]!='\0';i++){
        if(isalpha(a[i]) || a[i]=='-' || a[i]=='!' || a[i]=='.' || a[i]==':' || a[i]==';' || a[i]=='?' || a[i]==' '){
        temp=0;num=0;p=0;
        num=a[i];

        while(num!=0){
            p=num%10;
            temp=(temp*10)+p;
            num=num/10;
        }
        printf("%d ",temp);
        }
        else{
            store=store*10+a[i]-'0';
            if(store==32 || store==33 || store==44 || store==46 || store==58 || store==59 || store==63){
                printf("%c",store);
                store=0;
            }
            if(store>96 || store>64){
                printf("%c",store);
                store=0;
            }
        }
    }
    printf("\n");
    }
}
