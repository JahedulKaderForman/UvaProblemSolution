#include<stdio.h>
#include<iostream>

using namespace std;
int main(){
    freopen("Input.in","r",stdin);
     freopen("output.out","w",stdout);
    int a,b,c,sum,i,j,flag;
    while(scanf("%d %d",&a,&b)==2){
            sum=0;
        for(i=1;i<=a;i++){
                 flag=0;
            for(j=1;j<=b;j++){
                scanf("%d",&c);
                if(c==0){
                    flag=1;
                }
            }
            if(flag==1)
                sum++;
        }
        cout<<a-sum<<"\n";
    }
    return 0;
}
