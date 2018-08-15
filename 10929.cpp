#include<bits/stdc++.h>
using namespace std;
string a;
long long int oddsum,evensum,n;
int main(){
while(cin>>a){
    if(a=="0")
        break;
        oddsum=evensum=0;
    for(int i=0;i<a.size();i++){
        n=a[i]-'0';
        if(i%2==0)
            evensum+=n;
        else
            oddsum+=n;
    }
    if(abs(oddsum-evensum)%11==0){
        cout<<a;
        printf(" is a multiple of 11.\n");
    }
    else{
        cout<<a;
        printf(" is not a multiple of 11.\n");
    }
}



}
