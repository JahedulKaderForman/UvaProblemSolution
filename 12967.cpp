#include<bits/stdc++.h>
using namespace std;
int main(){
int t,x,dec,hex,temp;
cin>>t;
while(t--){
    cin>>x;
    dec=x;
    hex=x;
    int cn=0;
    while(dec!=0){
            if(dec%2!=0){
            cn++;
        }
        dec/=2;
    }
    int cn2=0;
    while(hex!=0){
        temp=hex%10;
        while(temp!=0){
            if(temp%2!=0){
            cn2++;
        }
        temp/=2;
    }
    hex/=10;
    }
    cout<<cn<<" "<<cn2<<endl;

}
}
