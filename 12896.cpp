#include<bits/stdc++.h>
using namespace std;
string s[10];
int a[1000],b[1000];
int main(){
s[0]=" ";
s[1]=".,?";
s[2]="abc";
s[3]="def";
s[4]="ghi";
s[5]="jkl";
s[6]="mno";
s[7]="pqrs";
s[8]="tuv";
s[9]="wxyz";
int t,n;
cin>>t;
while(t--){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]==1 && b[i]==4){
            printf("%c",34);
        }
        else{
        for(int j=0;j<s[a[i]].size();j++){
            if(b[i]-1==j){
                cout<<s[a[i]][j];
                break;
            }
        }
        }
    }
    cout<<endl;
}



}
