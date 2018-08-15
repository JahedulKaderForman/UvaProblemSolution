#include<bits/stdc++.h>
using namespace std;
int a[500000];
int main(){
int j,k,r,x;
while(cin>>j>>r){
    memset(a,0,sizeof(a));
        k=0;
    for(int i=1;i<=j*r;i++){
        cin>>x;
        a[k]+=x;
        if(i%j==0){
            k=0;
        }
        else
        k++;
    }
    int temp=0,maxx;
    for(int i=0;i<j;i++){
        if(a[i]>=temp){
            maxx=i+1;
            temp=a[i];
        }
    }
    cout<<maxx<<endl;
}


}
