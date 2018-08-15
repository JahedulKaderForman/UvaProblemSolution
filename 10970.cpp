#include<bits/stdc++.h>
using namespace std;
int main(){
int cn,m,n;
while(cin>>m>>n){
        cn=0;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cn++;
        }
    }
    cout<<cn-1<<endl;
}


}
