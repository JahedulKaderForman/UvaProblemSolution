#include<stdio.h>
#include<iostream>
using namespace std;
 unsigned long long int bionemial( unsigned long long int n, unsigned long long int k){
    unsigned long long int res=1,i;
    if(k>n-k)
        k=n-k;
    for(i=0;i<k;i++){
        res*=n-i;
        res/=i+1;
    }
    return res;



}
int main(){
     unsigned long long int n,result;
    while(cin>>n){;
    result=bionemial(2*n,n);
    cout<<result/(n+1)<<endl;
    }
}
