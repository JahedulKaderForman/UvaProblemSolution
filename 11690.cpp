#include<bits/stdc++.h>
using namespace std;
int frnd[60000];
vector<int>adj[60000];
set<int>mark;
set<int>:: iterator it;
int visited[60000];
long long int sum=0;
void dfs(int s){
sum+=frnd[s];
visited[s]=1;
for(int i=0;i<adj[s].size();i++){
        int v =adj[s][i];
    if(visited[v]==0){
        dfs(v);
    }
}



}
int main(){
int n,m,t,x,y;
cin>>t;
while(t--){
cin>>n>>m;
memset(visited,0,sizeof visited);
memset(frnd,0,sizeof frnd);
for(int i=0;i<n;i++){
    scanf("%d",&frnd[i]);
}
for(int j=0;j<m;j++){
    scanf("%d%d",&x,&y);
    adj[x].push_back(y);
    adj[y].push_back(x);
    mark.insert(x);
    mark.insert(y);
//cout<<"x"<<endl;
}
int flag=0;
for(it=mark.begin();it!=mark.end();it++){
    int q= *it;
    //cout<<"q "<<q<<" "<<visited[q]<<endl;
    if(visited[q]==0){
        dfs(q);
       // cout<<sum<<endl;
        if(sum!=0){
            flag=1;
        }
    }
    sum=0;
}
if(flag==0){
    cout<<"POSSIBLE"<<endl;
}
else{
    cout<<"IMPOSSIBLE"<<endl;
}
for(it=mark.begin();it!=mark.end();it++){
        int j= *it;
        adj[j].clear();
}
}
mark.clear();

}
