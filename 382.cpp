#include<stdio.h>
#include<iostream>

using namespace std;
int main(){
    freopen("Input.in","r",stdin);
    freopen("Output.out","w",stdout);
    int i,sum,n,temp;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%d",&n)){
        sum=0;
        temp=n/2;
        if(n==0)
            break;
    for(i=1;i<=temp;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n)
        printf("%5d  PERFECT\n",n);
    else if(sum>n)
        printf("%5d  ABUNDANT\n",n);
    else
        printf("%5d  DEFICIENT\n",n);
    }
    printf("END OF OUTPUT\n");
    return 0;
}
