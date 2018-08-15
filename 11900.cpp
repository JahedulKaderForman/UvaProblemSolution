#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n,p,w,a[1000];
cin>>t;
for(int i=1;i<=t;i++){
    cin>>n>>p>>w;
    for(int j=0;j<n;j++){
        cin>>a[j];
    }
    int cn=0,sum=0;
    for(int j=0;j<n;j++){
        sum+=a[j];
        if(sum>w  || j+1>p){
        break;
        }
        cn++;

    }
    printf("Case %d: ",i);
    cout<<cn<<endl;
}


}
