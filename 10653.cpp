#include<bits/stdc++.h>
#define pii pair<int,int>
using namespace std;
int row,col;
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
char cell[1002][1002];
int visited[1002][1002],level[1002][1002],cn;
void bfs(int p,int r,int d1,int d2){
    memset(visited,0,sizeof visited);
    memset(level,0,sizeof level);
visited[p][r]=1;
level[p][r]=0;
queue<pii>q;
int flag1=0;
q.push(pii(p,r));
while(!q.empty()){
    pii top=q.front();
    q.pop();
    for(int k=0;k<4;k++){
        int tx=top.first+fx[k];
        int ty=top.second+fy[k];
        if(tx>=0 && tx<row && ty>=0 && ty<col && cell[tx][ty]!='b' && visited[tx][ty]==0){
            visited[tx][ty]=1;
            level[tx][ty]=level[top.first][top.second]+1;
            if(tx==d1 && ty==d2){
                flag1=1;
                break;
            }
            q.push(pii(tx,ty));
        }
    }
    if(flag1==1){
        break;
    }
}

}
int main(){
int r,n,m,x,s1,s2,d1,d2;
while(cin>>row>>col){
        memset(cell,0,sizeof cell);
    if(row==0 && col==0)
        break;
    scanf("%d",&r);
    for(int i=0;i<r;i++){
        scanf("%d%d",&n,&m);
        for(int j=0;j<m;j++){
            scanf("%d",&x);
            cell[n][x]='b';
        }

    }
    scanf("%d%d",&s1,&s2);
    scanf("%d%d",&d1,&d2);
    bfs(s1,s2,d1,d2);
    cout<<level[d1][d2]<<endl;

}





}
