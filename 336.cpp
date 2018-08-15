#include<bits/stdc++.h>
#define pii map<int,int>
using namespace std;
vector<int>edge[100];
pii ::iterator it;
pii ::iterator p;
pii visited;
pii level;
void bfs(int sc){
queue<int>q;
visited[sc]=1;
level[sc]=0;
q.push(sc);
while(!q.empty()){
    int u=q.front();
    q.pop();
    for(int i=0;i<edge[u].size();i++){
           int v=edge[u][i];
           //cout<<v<<endl;
        if(visited[v]==0){
            visited[v]=1;
           //  cout<<"v "<<visited[v]<<endl;
            level[v]=level[u]+1;
         // cout<<level[v]<<endl;
            q.push(v);
        }
    }
}
}

int main(){
    freopen("input.in","r",stdin);
    freopen("output.out","w",stdout);
int num,st,ed,x,y,cn=0,q=0;
while(cin>>num){
    if(num==0)
        break;
        while(num--){
    cin>>x>>y;
    visited[x]=0;
    visited[y]=0;
    edge[x].push_back(y);
    edge[y].push_back(x);
        }
        while(cin>>st>>ed){
            q++;
                cn=0;
            if(st==0 && ed==0)
                break;
                bfs(st);
                for(it=level.begin();it!=level.end();it++){
                  //  cout<<"key "<<(*it).first<<"value "<<(*it).second<<endl;
                    if((*it).second>ed){
                        cn++;
                    }

                    for(p=visited.begin();p!=visited.end();p++){
                     if(visited[(*p).first]==0){
                            cn++;
                        }
                        cout<<"v "<<(*p).first<<" "<<visited[(*p).first]<<endl;
                }
                }
                if(cn!=0){
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",q,cn,st,ed);
                }

   visited.clear();
    level.clear();
        }
    for(int j=0;j<=100;j++){
    edge[j].clear();
    }
}


}
