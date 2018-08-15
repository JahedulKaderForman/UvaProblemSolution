#include<bits/stdc++.h>
#define mx 1000006
using namespace std;
int prime[300000],mark[1000006];
int m=0;
void sieve(){
int limit=(int)sqrt(mx)+2;
mark[1]=1;
for(int i=4;i<=mx;i+=2)
    mark[i]=1;
prime[0]=2;
int temp;
for(int i=3;i<=mx;i+=2){
   if(mark[i]==0){
   if(i==524287){
    cout<<"yes"<<endl;
   }
   if(i<=limit){
    for(int j=i+i;j<=mx;j+=i)
        mark[j]=1;
   }
   }
}

}
int main(){
sieve();
for(int i=0;i<=10;i++)
    cout<<prime[i]<<" ";
}
