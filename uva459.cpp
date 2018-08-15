#include<bits/stdc++.h>
using namespace std;
int ran[1000],cn[200];
char parent[1000];
void make_set(char ch){
for(char i='A';i<=ch;i++){
    parent[i]=i;
    ran[i-'A']=0;
}
}
char find_frnd(char x){
    if(parent[x]==x)
        return x;
    else
        return parent[x]=find_frnd(parent[x]);
}
void uni(char a,char b){
    if(ran[a-'A']>ran[b-'A'])
        parent[b]=a;
    else{
        parent[a]=b;
         if(ran[a-'A']==ran[b-'A'])
            ran[b-'A']++;
    }

}
int main(){
int t,k=1,res;
char ch,a,b;
string s;
scanf("%d\n\n",&t);
while(t--){
memset(cn,0,sizeof(cn));
memset(ran,0,sizeof(ran));
scanf("%c",&ch);
res=(ch-'A')+1;
getchar();
make_set(ch);
while(getline(cin,s)){
    if(s.size()==0)
    break;
    a=find_frnd(s[0]);
    b=find_frnd(s[1]);
    if(a!=b){
        uni(a,b);
        res--;
    }

}
if(k!=1)
    printf("\n");
k++;
cout<<res<<endl;
}

}
