#include<bits/stdc++.h>
using namespace std;
int a[500002],b[500002];
int main(){
int n;
while(cin>>n){
    if(n==0)
    break;
    int flag=0;
    for(int i=0;i<n;i++){
    scanf("%d%d",&a[i],&b[i]);
    }
    sort(a,a+n);
    sort(b,b+n);
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}





}
