#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int c[]={1,5,10,25,50};
ll dp[6][40000];
ll make(int i,int amount){
if(i>=5){
    if(amount==0)
        return 1;
    else
        return 0;
}
if(dp[i][amount]!=-1)
    return dp[i][amount];
ll ret1=0,ret2=0;
if(amount-c[i]>=0)
    ret1=make(i,amount-c[i]);
ret2=make(i+1,amount);
return dp[i][amount]=ret1+ret2;


}
int main(){
ll n,res;
memset(dp,-1,sizeof(dp));
while(scanf("%lld",&n)!=EOF){
res=make(0,n);
if(res<2){
    printf("There is only %lld way to produce %lld cents change.\n",res,n);
}
else{
    printf("There are %lld ways to produce %lld cents change.\n",res,n);

}
}
}
