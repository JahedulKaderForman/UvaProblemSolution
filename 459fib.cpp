#include<bits/stdc++.h>
using namespace std;

string rev(string a){
    string c="";
for(int i=a.length()-1;i>=0;i--){
    c+=a[i];
}
return c;


}
string fib(string e,string f){
    string a,b;
    a=rev(e);
    b=rev(f);
    int temp=0,sum,s,x,y;
    string c="";
    string d;
for(int i=0;i<a.length();i++){
    if(i<b.length()){
       x=  a[i]-'0';
       y=b[i]-'0';
      sum=x+y+temp;
      s=sum%10;
      c+=s+'0';
      temp=0;
      if(sum>9)
        temp=1;
        if(i==a.length()-1 && temp==1)
            c+='1';

    }
    else{
        x=a[i]-'0';
        sum=x+temp;
        s=sum%10;
        c+=s+'0';
        temp=0;
        if(sum>9)
            temp=1;
         if(i==a.length()-1 && temp==1)
            c+='1';
    }
    d=rev(c);

}

return d;

}
int main(){
    map<int,string>mp;
    int n;
  mp[0]="0";
  mp[1]="1";
  for(int i=2;i<5000;i++){
    mp[i]=fib(mp[i-1],mp[i-2]);
  }
    while(cin>>n){
        cout<<"The Fibonacci number for "<<n<<" is "<<mp[n]<<endl;
    }
}



