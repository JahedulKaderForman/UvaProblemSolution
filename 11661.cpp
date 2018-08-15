#include<stdio.h>
#include<iostream>
#include<cmath>

using namespace std;
int main(){
    char a[2000002],store;
    int n,temp=3000000,D,R,i,mini,result,flag;
    while(scanf("%d%c",&n,&store)){
            result=0,mini=0,flag=0;
            D=0;R=0;temp=3000000;
            if(n==0)
                break;
         for(i=1;i<=n;i++){
            cin>>a[i];
         }
         for(i=1;i<=n;i++){
            if(a[i]=='D')
                D=i;
            else if(a[i]=='R')
                R=i;
            else if(a[i]=='Z'){
                flag=1;
                break;
            }
            if(D!=0 && R!=0){
                result=abs(D-R);
                if(result<temp){
                    mini=result;
                    temp=result;
                }
            }
         }
         if(flag==1)
            cout<<0<<endl;
         else
         cout<<mini<<endl;
}
}
