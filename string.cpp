#include<stdio.h>
#include<iostream>
using namespace std;
int Akerman(int m,int n){
    if(m==0)
        return(n+1);
    else if(m!=0 && n==0)
        return Akerman(m-1,1);
    else if(m!=0 && n!=0)
        return Akerman(m-1,Akerman(m,n-1));

}
int main(){
    int m,n,result;
    cin>>m>>n;
    result=Akerman(m,n);
    cout<<result<<endl;


}
