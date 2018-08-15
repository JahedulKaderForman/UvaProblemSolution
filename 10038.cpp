#include<bits/stdc++.h>
using namespace std;

int main(){
freopen("ttt.in","r",stdin);
freopen("outt.out","w",stdout);
int n,i,k;
while(cin>>n){
        vector<int>a;
        vector<int>b;
    for(i=0;i<n;i++){
        cin>>k;
        a.push_back(k);
    }
    if(a.size()==1){
         cout<<"Jolly"<<endl;
    }
    else{
    for(i=0;i<a.size()-1;i++){
        int store=abs(a[i]-a[i+1]);
        b.push_back(store);
    }

     sort(b.begin(),b.end());
     int j=0,flag=1;
     for(i=1;i<=n-1;i++){
            if(i==b[j]){
               j++;
            }
            else{
                flag=0;
                break;
            }
     }
     if(flag==0)
        cout<<"Not jolly"<<endl;
     else
        cout<<"Jolly"<<endl;


}
}
}
