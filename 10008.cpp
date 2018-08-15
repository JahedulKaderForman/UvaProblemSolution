#include<bits/stdc++.h>
using namespace std;
int a[26],n,i;
char cletter[26],sletter[26],temp1='A',temp2='a',c;
void store(){
for(i=0;i<26;i++){
  cletter[i]=temp1++;
  sletter[i]=temp2++;
  a[i]=0;
}
}
void sortt(){
int store2;
char store1;
for(int i=0;i<26-1;i++){
    for(int j=i+1;j<26;j++){
        if(a[i]<a[j]){
            store1=cletter[i];
            cletter[i]=cletter[j];
            cletter[j]=store1;
            store2=a[i];
            a[i]=a[j];
            a[j]=store2;

        }
        else if(a[i]==a[j] && cletter[i]>cletter[j] ){
            store1=cletter[i];
            cletter[i]=cletter[j];
            cletter[j]=store1;
        }
    }
}
}
int main(){
store();
string T;
scanf("%d%c",&n,&c);
while(n--){
    getline(cin,T);
    for(i=0;T[i];i++){
        for(int j=0;j<26;j++){
            if(sletter[j]==T[i] || cletter[j]==T[i])
                a[j]++;
        }
    }
}
   sortt();
    for(i=0;i<26;i++){
        if(a[i]!=0)
  cout<<cletter[i]<<" "<<a[i]<<endl;
}


}
