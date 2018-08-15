#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int n,long long int m){
long long int s,c;
while(m!=0){
    c=n%m;
    if(c==0)
    {
        s=m;
        break;
    }
    n=m;
    m=c;
}
return s;

}
int main(){
long long int test,x,y,a,b,n1,n2,res;
cin>>test;
for(int i=1;i<=test;i++){
    cin>>x>>y>>a>>b;
    n1=abs(a-x);
    n2=abs(b-y);
    res=gcd(n1,n2)+1;
    printf("Case %d: %llu\n",i,res);

}



}
