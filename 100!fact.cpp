#include<stdio.h>
#include<iostream>

using namespace std;
int main(){
    int a[200],i,j,n,x,temp,m;
    cin>>n;
    a[0]=1;
    m=1;
    temp=0;
    for(i=1;i<=n;i++){
        for(j=0;j<m;j++){
            x=(a[j]*i)+temp;
            a[j]=x%10;
            temp=x/10;
        }
        if(temp>0){
            a[m]=temp%10;
             m++;
            temp=temp/10;
        }
    }
    for(i=m-1;i>=0;i--){
        cout<<a[i];
    }



}
