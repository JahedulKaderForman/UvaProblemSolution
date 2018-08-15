#include<bits/stdc++.h>
using namespace std;
int value[1200][1200],cost[1000],wt[1000];
int kacpnack(int i,int w){
if(i==0 || w==0)
    return 0;
if(value[i][w]!=-1)
    return value[i][w];
if(wt[i]>w){
    value[i][w]= kacpnack(i-1,w);
}
else{
    int a=0,b=0;
    a=kacpnack(i-1,w);
    b=cost[i]+kacpnack(i-1,w-wt[i]);
    if(a>=b){
        value[i][w]=a;
    }
    else{
        value[i][w]=b;
    }
}
return value[i][w];
}
int main(){
int t,n,g,k,totalw,sum;
cin>>t;
while(t--){
        sum=0;
        memset(value,-1,sizeof value);
    cin>>n;
   for(int i=1;i<=n;i++){
    cin>>cost[i]>>wt[i];
   }
   cin>>g;
   for(int i=1;i<=g;i++){
    cin>>totalw;
    k=kacpnack(n,totalw);
    sum+=k;
   }
   cout<<sum<<endl;
}


}
