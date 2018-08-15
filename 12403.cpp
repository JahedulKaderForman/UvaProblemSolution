#include<iostream>
#include<cstring.h>
//#include<cstdio.h>
using namespace std;
int main(){
    char s[8],e[]="donate",f[]="report",
    int n,c=0,k,i,g;
    cin>>n;
    for(i=1;i<n;i++){
        cin>>s;
        if(g=strcmp(s,e)==0){
            cin>>k;
        }

        else if(g=strcmp(s,f)==0){
            cout<<c;
        }
        c=c+k;

    }
}
