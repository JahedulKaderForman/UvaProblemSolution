#include<bits/stdc++.h>
using namespace std;
int a[120];
int main(){
a[1]=1;
for(int i=2;i<=101;i++){
    a[i]=a[i-1]+(i*i);
}
int n;
while(cin>>n){
    if(n==0)
        break;
    cout<<a[n]<<endl;
}
}
