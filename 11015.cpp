#include<bits/stdc++.h>
using namespace std;
int n,e,x,y,w;
int d[1000][1000];
void folyad(){
for(int k=1;k<=n;k++){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(d[i][j]>d[i][k]+d[k][j])
                d[i][j]=d[i][k]+d[k][j];
        }
    }
}


}
map<int,string>mp;
int main(){
int l=1;
while(cin>>n>>e){
    if(n==0 && e==0)
        break;
        string s;
    for(int i=1;i<=n;i++){
        cin>>s;
        mp[i]=s;
    }
     for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        d[i][j]=99999999;
        if(i==j)
            d[i][j]=0;
    }
    }
    for(int i=1;i<=e;i++){
        cin>>x>>y>>w;
    d[x][y]=w;
    d[y][x]=w;
    }
    folyad();
    int sum,res=1000000000,temp;
    for(int i=1;i<=n;i++){
            sum=0;
    for(int j=1;j<=n;j++){
       sum+=d[i][j];
    }
    if(res>sum){
        temp=i;
        res=sum;
    }
}
printf("Case #%d : ",l);
cout<<mp[temp]<<endl;
l++;
}


}
