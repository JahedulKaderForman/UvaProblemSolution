#include<stdio.h>
int main(){
    unsigned long long int n,store=1,m=1,i,result;
    scanf("%llud",&n);
    for(i=1;i<=2*n;i++){
        store=store*i;
    }
     for(i=1;i<=n;i++){
        m=m*i;
    }
    n=m*(n+1);
    result=store/(n*m);
    printf("%llu",result);
}
