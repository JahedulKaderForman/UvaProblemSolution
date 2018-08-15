#include<bits/stdc++.h>
using namespace std;
int recursive(int n){
    if(n>=101){
        return (n-10);
    }
    else{
        recursive(recursive(n+11));
    }


}
int main(){
int n,store;
while(cin>>n){
    if(n==0)
        break;
    store=recursive(n);
   printf("f91(%d) = %d\n",n,store);
}

}
