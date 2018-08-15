#include<stdio.h>
#include<math.h>
int main(){
    long long int t,n,c,i;
    scanf("%lld",&t);
    for(i=1;i<=t;i++){
    scanf("%lld",&n);
    if(n>0&&n<=180000){
        c=ceil((n*0)/100.0);
        printf("Case %lld: %lld\n",i,c);
    }
    else if(n>180000 && n<=480000){
        c=ceil(((n-180000)*10)/100.0);
        if(c<2000){
            printf("Case %lld: %lld\n",i,2000);
        }
        else
            printf("Case %lld: %lld\n",i,c);
    }
    else if(n>480000 && n<=880000){
        c=ceil(((n-480000)*15)/100.0+(300000*10)/100.0);
         printf("Case %lld: %lld\n",i,c);
    }
     else if(n>880000 && n<=1180000){
        c=ceil(((n-880000)*20)/100.0+(400000*15)/100.0+(300000*10)/100.0);
         printf("Case %lld: %lld\n",i,c);
    }
    else if(n>1180000){
        c=ceil((n-1180000)*25/100.0+(300000*20)/100.0+(400000*15)/100.0+(300000*10)/100.0);
         printf("Case %lld: %lld\n",i,c);
    }
    }
    return 0;
}
