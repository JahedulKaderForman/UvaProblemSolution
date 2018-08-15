#include<stdio.h>
#include<iostream>
using namespace std;
int recur(int n,int k){
    k++;
    if(n==1)
        return k;
    else if(n%2!=0){
        recur(((3*n)+1),k);
    }
    else{
        recur(n/2,k);
    }

}
int main(){
    int a,b,i,store=0,temp,result,k=0;
    cin>>a>>b;

    for(i=a;i<=b;i++){
             k=0;
    temp=recur(i,k);
    if(temp>store){
        result=temp;
        store=temp;
    }
    }
    printf("rr=%d",result);

}
