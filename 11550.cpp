#include<bits/stdc++.h>
using namespace std;
int main(){
int t,x,y;
cin>>t;
for(int i=1;i<=t;i++){
    int a[100][100],sum,flag=0;
    cin>>x>>y;
    for(int j=0;j<x;j++){
        for(int k=0;k<y;k++){
            cin>>a[j][k];
        }
    }
     for(int j=0;j<y;j++){
            sum=0;
        for(int k=0;k<x;k++){
            sum+=a[k][j];
        }
     if(sum!=2){
        flag=1;
        break;
     }
    }
    if(flag==0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}

}
