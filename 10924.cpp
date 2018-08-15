#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    char temp='a',store[56],str[1000];
    int i,j,sum,k=0,c[100000],istore[56],num=1,flag[100000]={0},f;
    for(i=0;i<26;i++){
        store[i]=temp++;
        istore[i]=num++;
    }
    temp='A';
    for(i=26;i<52;i++){
        store[i]=temp++;
        istore[i]=num++;
    }
    for(j=2;j<100000;j++){
        if(flag[j]==0){
            for(i=2;i*j<100000;i++){
                flag[i*j]=1;
            }
        }
    }
    for(i=1;i<100000;i++){
        if(flag[i]==0)
            c[k++]=i;
    }
    while(gets(str)){
            sum=0;
        for(i=0;str[i];i++){
                for(j=0;j<52;j++){
                    if(store[j]==str[i]){
                        sum+=istore[j];
                    }
        }

    }
    for(i=0;i<30000;i++){
            f=0;
        if(sum==c[i]){
        f=1;
        break;
        }
    }
    if(f==1)
        cout<<"It is a prime word."<<endl;
    else
         cout<<"It is not a prime word."<<endl;
    }
}
