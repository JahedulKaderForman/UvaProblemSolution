#include<bits/stdc++.h>
using namespace std;
vector<long long int>a(100000000);
void store(){
unsigned long long int j=1,i;

for(i=5;i<100;i+=2){
    a[j]=a[j-1]+(30+(12*(j-1)));
    j++;
}
cout<<j<<i<<endl;
}
int main(){
store();
unsigned long long int n;
while(cin>>n){
    cout<<a[n]<<endl;
}
}
