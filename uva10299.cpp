#include<bits/stdc++.h>
using namespace std;
int main(){
int n,ans,st;
while(scanf("%d",&n)){
    if(n==0)
        break;
    ans=n;
    if(n==1){
        printf("%d\n",0);
        continue;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                n/=i;
            }
            ans=ans-(ans/i);
        }
    }
    if(n>1){
        ans=ans-(ans/n);
    }
    printf("%d\n",ans);
}

return 0;
}
