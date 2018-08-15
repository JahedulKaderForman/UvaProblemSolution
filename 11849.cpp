#include<bits/stdc++.h>
using namespace std;
long long int a[100000],b[100000],cn;
void bi_search(int m,int high){
int low=0,key=m,mid,index=-1;
while(low<=high){
    mid=(low+high)/2;
    if(a[mid]==key){
      index=1;
      break;
    }
      else if(a[mid]>key){
        high=mid-1;
      }
      else if(a[mid]<key){
        low=mid+1;
      }
}
if(index==1){
    cn++;
}
}
int main(){
int x,y,n;
while(cin>>x>>y){
        cn=0;
    if(x==0 && y==0)
        break;
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    for(int i=0;i<y;i++){
        cin>>n;
        bi_search(n,x);
    }
cout<<cn<<endl;
}


}
