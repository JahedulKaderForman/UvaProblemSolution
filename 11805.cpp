#include<stdio.h>
#include<cmath>
#include<iostream>

using namespace std;
int main(){
    freopen("Input.in","r",stdin);
     freopen("output.out","w",stdout);
    int t,N,K,P,result,num,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d%d%d",&N,&K,&P);
        if((K+P)>N){
        num=N-K;
        result=abs(P-num);
        while(result>=N){
            result=result-N;
        }
        if(result==0){
            printf("Case %d: %d\n",i,N);
        }
        else
            printf("Case %d: %d\n",i,result);
        }
        else{
            printf("Case %d: %d\n",i,K+P);
        }
    }
    return 0;
}
