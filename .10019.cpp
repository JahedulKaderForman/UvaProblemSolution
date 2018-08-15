#include<bits/stdc++.h>
using namespace std;
int main(){
int n,M,temp,cn,len[1000],i;
cin>>n;
while(n--){
    i=0;
    cin>>temp;
    M=temp;
    cn=0;
    while(M!=0){
        if(M%2!=0){
            cn++;
            M/=2;
        }
        else{
            M/=2;
        }
    }
    cout<<cn<<endl;
    while(temp!=0){
        len[i++]=temp%16;
        temp/=16;
    }
    for(int j=i-1;j>=0;j--){
        cout<<len[j];
    }

}

}
