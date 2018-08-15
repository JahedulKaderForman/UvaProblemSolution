#include<bits/stdc++.h>
using namespace std;
int f(int m){
if(m%10>0)
    return m%10;
if(m==0)
    return 0;
return f(m/10);
}
int main(){
int sum=0,n,x,y;
while(cin>>x>>y){
    sum=0;
        if(x==-1 && y==-1)
        break;
for(int i=x;i<=y;i++){
    n=f(i);
    cout<<n<<endl;
    sum+=n;
}
cout<<sum<<endl;
}


}
