#include<bits/stdc++.h>
using namespace std;
int arr[1000000],store[100000],k;
void seive(){
arr[0]=1;
    arr[1]=1;
    for(int i=2;i<=sqrt(1000000);i++){
        if(arr[i]==0){
            for(int j=2;i*j<=1000000;j++){
               arr[i*j]=1;
            }
        }
    }
    for(int i=0;i<=1000000;i++){
        if(arr[i]==0){
            store[k++]=i;
        }
    }
}
void prime(int n){
    int item=n,flag=0,flag2=0,temp=0;
for(int i=0;i<78498;i++){
    if(n==store[i]){
        flag=1;
        break;
    }
}
if(flag==1){
    while(n!=0){
    temp=temp*10+(n%10);
    n=n/10;
    }
    for(int i=0;i<78498;i++){
        if(temp==store[i]){
            flag2=1;
            break;
        }
    }
    if(temp!=item && flag2==1){
        cout<<item<<" is emirp."<<endl;
    }
    else{
        cout<<item<<" is prime."<<endl;
    }
}
else{
    cout<<item<<" is not prime."<<endl;
}

}
int main(){
    freopen("Input.in","r",stdin);
    freopen("output.out","w",stdout);
    int n;
    seive();
    while(cin>>n){
        prime(n);
    }
}
