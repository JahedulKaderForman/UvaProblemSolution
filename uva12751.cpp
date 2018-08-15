#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
ll sum[100000];
int main(){
ll  temp=0;
for(int i=1;i<=10002;i++){
    temp+=i;
    sum[i]=temp;

}
ll t,n,x,y,j=1;;
cin>>t;
while(t--){
      ll ans=0;
    cin>>n>>x>>y;
    ans+=(sum[n]-sum[y+(x-1)])+sum[y-1];
    printf("Case %d: ",j);
    cout<<ans<<endl;
    j++;

}
}
