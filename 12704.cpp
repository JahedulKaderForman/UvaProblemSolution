#include<bits/stdc++.h>
using namespace std;
int main(){
long long int test,x,y,r;
double n,ans1,ans2;
cin>>test;
while(test--){
    cin>>x>>y>>r;
    n=sqrt((x*x)+(y*y));
    ans1=r-n;
    ans2=n+r;
    printf("%0.2lf %0.2lf\n",ans1,ans2);
}



}
