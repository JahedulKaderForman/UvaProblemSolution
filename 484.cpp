#include<bits/stdc++.h>
using namespace std;
vector<int>v;
map<int,int>m;
map<int,int>mark;
int main(){
int n;
while(cin>>n){
 v.push_back(n);
 m[n]++;
 mark[n]=0;
}
for(int i=0;i<v.size();i++){
    if(mark[v[i]]!=1){
        cout<<v[i]<<" "<<m[v[i]]<<endl;
        mark[v[i]]=1;
    }
}


}
