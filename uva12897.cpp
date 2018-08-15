#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n,v;
char x,y;
cin>>t;
for(int j=1;j<=t;j++){
    map<char,vector<int> >mp;
        cin.ignore();
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        mp[s[i]].push_back(i);
    }
    scanf("%d",&n);
    while(n--){
        cin>>x>>y;
        for(int i=0;i<mp[y].size();i++){
            v=mp[y][i];
            s[v]=x;
            mp[x].push_back(v);
        }
    }
    cout<<s<<endl;
}

}
