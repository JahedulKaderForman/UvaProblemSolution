#include<bits/stdc++.h>
using namespace std;
map<int,vector<int> >mp;
map<int,int>level,visited;
map<int,vector<int> >:: iterator it;
long long int bfs(long long int s,long long int t){
long long int cn=0;
level[s]=0;
visited[s]=1;
queue<long long int>q;
q.push(s);
while(!q.empty()){
    long long int top=q.front();
    q.pop();
    for(int j=0;j<mp[top].size();j++){
       long long int u=mp[top][j];
        if(visited[u]==0){
                visited[u]=1;
            level[u]=level[top]+1;

            if(level[u]>t){

                cn++;
            }
            q.push(u);
        }
    }
}

return cn;
}

int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
long long int n,x,y,k=0,source,ttl,j=0;
while(cin>>n){
    if(n==0)
        break;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        mp[x].push_back(y);
        mp[y].push_back(x);
    }
    while(cin>>source>>ttl){

            int flag=0;
        if(source==0 && ttl==0)
            break;
       for(it=mp.begin();it!=mp.end();it++){
        if(it->first==source){
            flag=1;
            break;
        }

       }
        j++;
       if(flag==1){

         k= bfs(source,ttl);

         for(it=mp.begin();it!=mp.end();it++){
        if(visited[it->first]==0){
           k++;
        }
       }
        printf("Case %lld: %lld nodes not reachable from node %lld with TTL = %lld.\n",j,k,source,ttl);

       }
       else{
          k=mp.size();
         printf("Case %lld: %lld nodes not reachable from node %lld with TTL = %lld.\n",j,k,source,ttl);
       }
       visited.clear();
       level.clear();
    }
    mp.clear();
}
}
