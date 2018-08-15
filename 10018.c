#include<stdio.h>
int main(){
    long long int a,i,n,rev=0,first,num,start,c,d=0,count=1;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
            start=0;rev=0;count=1;
    scanf("%lld",&a);
    start=a;
    while(a!=0){
        num=a%10;
        rev=rev*10+num;
        a=a/10;
    }
    a=start+rev;
    start=a;
    d=0;
    while(a!=0){
        num=a%10;
        d=d*10+num;
        a=a/10;
    }
    rev=d;
    while(start!=rev){
            c=0;
            count++;
        a=start+rev;
        start=a;
        while(a!=0){
        num=a%10;
        c=c*10+num;
        a=a/10;
    }
    rev=c;
    }
    printf("%lld %lld\n",count,start);
    }
    return 0;
}
