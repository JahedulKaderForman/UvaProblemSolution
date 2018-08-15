#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
int n,cn;
while(cin>>n){
        cn=0;
    if(n==0)
        break;
    for(int i=1;i<=n;i++){
        if(i%2==0)
            cn++;
    }
    cout<<cn<<endl;
}



}
