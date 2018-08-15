#include<bits/stdc++.h>
using namespace std;
int main(){
long long int i,j,a,b,cn=0,n,max=0,temp,store,t;
cin>>t;
while(t--){
    cn=0;max=0;
cin>>a>>b;
for(i=a;i<=b;i++){
        cn=0;
        n=sqrt(i);
    for(j=1;j<=n;j++){
        if(i%j==0){
            int m=i/j;
            if(m==i/m){
                cn++;
            }
            else{
            cn+=2;
            }
        }
    }
    if(cn>max){
        store=cn;
        temp=i;
        max=cn;
    }
}
printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",a,b,temp,store);
}

}
