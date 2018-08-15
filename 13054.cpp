#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll a[100005],visited[100005];
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
int t,N,H,ta,td;
//cin>>t;
scanf("%d",&t);
for(int i=1;i<=t;i++){
        memset(visited,0,sizeof(visited));
        ll sum=0,cn=0,time=0;
    //cin>>N>>H>>ta>>td;
    scanf("%d %d %d %d",&N,&H,&ta,&td);
    for(int j=0;j<N;j++){
        scanf("%lld",&a[j]);
    }
    sort(a,a+N);
    if(2*ta<td){
        time+=N*ta;
    printf("Case %d: ",i);
    printf("%lld\n",time);
    }
    else{
    for(int k=N-1;k>=0;k--){
            int flag=0;
            sum=H-a[k];
            if(visited[k]==0){
        for(int j=0;j<k;j++){
            if(visited[j]==0 && a[j]<sum){
                visited[j]=1;
                visited[k]=1;
                flag=1;
               // cout<<a[j]<<" "<<a[k]<<endl;
                    time+=td;

                break;
            }

        }
            }
            if(visited[k]!=1 && flag==0)
                cn++;
    }
//cout<<cn<<endl;
    time+=cn*ta;
    printf("Case %d: ",i);
    printf("%lld\n",time);
    }

}
}
