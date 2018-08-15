#include<bits/stdc++.h>
using namespace std;
int temp[26];
int main(){
string a;
while(getline(cin,a)){
    memset(temp,0,sizeof(temp));
    if(a=="*")
        break;
    transform(a.begin(),a.end(),a.begin(),::tolower);
    int cn=0;
    for(int i=0;i<a.size();i++){
        if(i==0){
            temp[a[i]-'a']++;
            cn++;
        }
        else if(a[i]==' '){
            temp[a[i+1]-'a']++;
            cn++;
        }
    }
    int flag=0;
    for(int i=0;i<26;i++){
        if(temp[i]==cn){
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout<<"Y"<<endl;
    else
        cout<<"N"<<endl;
}

}
