#include<bits/stdc++.h>
using namespace std;
int main(){
int t,tm;
string s;
cin>>t;
cin.ignore();
while(t--){
    int cn=0,sum=0;
    cin>>s;
   tm=((s[0]-'A')*676)+((s[1]-'A')*26)+((s[2]-'A')*1);
   for(int i=4;i<8;i++){
    if(s[i]!='0')
        break;
    cn++;
   }
   for(int j=4+cn;j<8;j++){
    sum=sum*10+(s[j]-'0');
   }
   if(abs(tm-sum)<=100)
    cout<<"nice"<<endl;
   else
    cout<<"not nice"<<endl;
}
}
