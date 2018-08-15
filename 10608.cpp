#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100000];
int visited[100000];
int ans=0,cn=0;

void dfs(int u){
cn++;
int s;
visited[u]=1;
for(int i=0;i<adj[u].size();i++){
        s=adj[u][i];
    if(visited[s]==2){
        dfs(s);
    }
}
ans=max(ans,cn);
}


int main(){
int test,node,edge,x,y;
cin>>test;

while(test--){
        ans=0,cn=0;
    cin>>node>>edge;
    for(int i=0;i<edge;i++){
        cin>>x>>y;
        visited[x]=2;
        visited[y]=2;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i=0;i<=30003;i++){
            cn=0;
        if(visited[i]==2){
            dfs(i);
        }
    }
    cout<<ans<<endl;
     for(int i=0;i<edge;i++){
            adj[i].clear();
     }

}
}
