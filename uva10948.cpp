#include<bits/stdc++.h>
#define mx 1000002
using namespace std;
vector<int>prime;
int mark[mx],first,second;
void sieve(){
int limit=sqrt(mx)+1;
for(int i=4;i<=mx;i+=2){
    mark[i]=1;
}
prime.push_back(2);
for(int i=3;i<=mx;i+=2){
    if(!mark[i]){
        prime.push_back(i);
        if(i<=limit){
            for(int j=i+i;j<=mx;j+=i)
                mark[j]=1;
        }
    }
}
}
void Twin(int n){
int temp=0,store,flag=0,flag2=0,lv;
for(int i=0;i<prime.size();i++){
    temp=0,flag=0;
    if(prime[i]>n)
         break;
    store=n-prime[i];
    //cout<<"store "<<store<<endl;
    for(int j=0;j<prime.size();j++){
            if(prime[j]>store)
                   break;
            // cout<<store<<" "<<prime[i]<<endl;
        if(store==prime[j]){
            flag=1;
            break;
        }
    }

    if(flag==1 && store+prime[i]==n){

            flag2=1;
        lv=abs(store-prime[i]);
        if(lv>=temp){
        first=store;
        second=prime[i];
        // cout<<first<<" X"<<second<<endl;
        temp=lv;
        }
    }
}
if(flag2==1)
printf("%d:\n%d+%d\n",n,first,second);
else
printf("%d:\nNO WAY!\n",n);

}
int main(){
sieve();
int m;
while(cin>>m){
    if(m==0)
        break;
    Twin(m);
}

}
