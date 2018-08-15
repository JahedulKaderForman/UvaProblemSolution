#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int flag,i,k=0,j;
    char a[10000],c[10000];
    while(gets(a)){
          k=0;
    for(i=0;a[i];i++){
        if(a[i]!=' '){
            flag=1;
            c[k++]=a[i];
        }
        if(flag==1 && a[i]==' '){
            c[k]='\0';
            for(j=k-1;j>=0;j--){
            printf("%c",c[j]);
            }
            flag=0;
            k=0;
        }
        if(flag==0){
            printf("%c",a[i]);
        }

    }
    if(flag==1){
    c[k]='\0';
    for(j=k-1;j>=0;j--){
            printf("%c",c[j]);
            }
    }
    cout<<endl;
}
}

