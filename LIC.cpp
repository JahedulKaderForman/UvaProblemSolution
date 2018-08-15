#include<bits/stdc++.h>
using namespace std;
int main(){
int a[7]={3,4,-1,0,6,2,3},b[10];
int j;
for(int i=0;i<7;i++){
    b[i]=1;
}
for(int k=1;k<7;k++){
        j=0;
    while(j<k){
        if(a[j]<=a[k]){
            b[k]=max(b[k],b[j]+1);
        }
        j++;
    }
}
for(int i=0;i<7;i++){
    cout<<b[i]<<endl;
}

}
