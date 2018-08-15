#include<iostream>
#include<stdio.h>
using namespace std;
long long int mod(long long int B,long long int P,long long int M){
    long long t;
    if(P==0)
        return 1;
    else if(P%2==0){
        t=mod(B,P/2,M);
        return(((t%M)*(t%M))%M);
    }
    else
    return(((B%M)*(mod(B,P-1,M))%M)%M);
}
int main(){
    long long int result,B,P,M;
    while((scanf("%lld%lld%lld",&B,&P,&M))!=EOF){
    result=mod(B,P,M);
    printf("%lld\n",result);
    }
    return 0;

}
