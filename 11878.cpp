#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
int eq,neg,pos,a,b,c,cn=0,flag;
while(cin>>s){
        a=b=c=flag=0;
    eq=s.find("=");
    pos=s.find("+");
    neg=s.find("-");
    if(s[eq+1]=='?'){
        continue;
    }
    for(int i=eq+1;i<s.size();i++){
        if(s[i]=='-'){
            flag=1;
            continue;
        }
        c=c*10+(s[i]-'0');
    }
    if(flag==1)
        c=c*(-1);
    if(pos!=-1){
        for(int j=0;j<pos;j++){
            a=a*10+(s[j]-'0');
        }
         for(int j=pos+1;j<eq;j++){
            b=b*10+(s[j]-'0');
        }
    }
    else{
        for(int j=0;j<neg;j++){
            a=a*10+(s[j]-'0');
        }
         for(int j=neg+1;j<eq;j++){
            b=b*10+(s[j]-'0');
        }

    }
    if(pos!=-1){
        if(a+b==c){
           cn++;
        }
    }
    else if(neg!=-1){
        if(a-b==c){
            cn++;
        }
    }
    //cout<<a<<" "<<b<<" "<<c<<endl;

}
cout<<cn<<endl;

}
