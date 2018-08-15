#include<bits/stdc++.h>
using namespace std;
int a[100000];
int binary_sh(int temp,int n){
int big,mid,index,end;
big=0;
index=-1;
end=n-1;
while(big<=end){
    mid=(big+end)/2;
    if(temp==a[mid]){
        index=mid;
       end=mid-1;
    }
    else if(temp>a[mid]){
        big=mid+1;
    }
    else if(temp<a[mid]){
        end=mid-1;
    }
}
if(index==-1){
    return -1;
}
else{
return (index+1);
}
}
int main(){
int  n,q,temp,val,t=1,store;
while(cin>>n>>q){
        if(n==0 && q==0)
           break;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    printf("CASE# %d:\n",t);
    while(q--){
        scanf("%d",&temp);
        store=binary_sh(temp,n);
        if(store==-1)
            cout<<temp<<" not found"<<endl;
        else
        cout<<temp<<" found at "<<store<<endl;

    }
    t++;
}


}
