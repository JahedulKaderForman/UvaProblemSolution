#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
int visited[200][200],cn;
char grap[200][200];
int row,col;
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
int bfs(int sx,int sy){
cn=1;
int tx,ty;
visited[sx][sy]=1;
queue<pii>q;
q.push(pii(sx,sy));
while(!q.empty()){
    pii top=q.front();
    q.pop();
    for(int i=0;i<4;i++){
         tx=top.first+fx[i];
         ty=top.second+fy[i];
        if(tx>=0 and tx<row and ty>=0 and ty<col and visited[tx][ty]==0 && grap[tx][ty]=='.'){
            visited[tx][ty]=1;
            q.push(pii(tx,ty));
            cn++;
        }
    }
}

return cn;
}
int main(){
int res,test;
cin>>test;
for(int c=1;c<=test;c++){
        cin>>col>>row;
        memset(visited,0,sizeof(visited));
        cin.ignore();
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>grap[i][j];
        }
    }
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(visited[i][j]==0 && grap[i][j]=='@'){
                res=bfs(i,j);
            }
        }
    }
    printf("Case %d: %d\n",c,res);
}





}
