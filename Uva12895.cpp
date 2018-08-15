#include<bits/stdc++.h>
using namespace std;
#define llu unsigned long long int
llu power(llu save,llu tm){
   llu p=1;
for(int i=1;i<=tm;i++){
    p*=save;
}
return p;
}
int main(){
llu n,t,tm,save;
cin>>t;
while(cin>>n){
       llu sum=0,temp=n;
    tm=log10(n)+1;
    while(n!=0){
        save=n%10;
        sum+=power(save,tm);
        n=n/10;
    }
    if(sum==temp)
        cout<<"Armstrong"<<endl;
    else
        cout<<"Not Armstrong"<<endl;
}

}
