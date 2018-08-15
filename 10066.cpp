#include<bits/stdc++.h>
using namespace std;
int dp[300][300];
string a,b;
int lcs(int i,int j){

if(i==0 || j==0)
    return 0;

if(dp[i][j]!=-1)
    return dp[i][j];
if(a[i-1]==b[j-1]){
    dp[i][j]=1+lcs(i-1,j-1);
    return dp[i][j];
}
else{
    int temp1=0,temp2=0;
    temp1=lcs(i-1,j);
    temp2=lcs(i,j-1);
    if(temp1>=temp2){
        dp[i][j]=temp1;
    }
    else{
        dp[i][j]=temp2;
    }
    return dp[i][j];
}

}
int main(){
int n1,n2,j=1,k;
while(getline(cin,a)){
        if(a=="#")
        break;
        getline(cin,b);
    memset(dp,-1,sizeof dp);
        n1=a.size();
        n2=b.size();
        k=lcs(n1,n2);
        printf("Case #%d: you can visit at most %d cities.\n",j,k);
        j++;

}


}
