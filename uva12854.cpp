#include<bits/stdc++.h>
using namespace std;
int a[6],b[6];
int main(){
while(cin>>a[0]){
    for(int i=1;i<5;i++){
        cin>>a[i];
    }
    for(int i=0;i<5;i++){
        cin>>b[i];
    }
    int flag=0;
    for(int i=0;i<5;i++){
        if(a[i]==b[i]){
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"Y"<<endl;
    else
        cout<<"N"<<endl;
}


}
