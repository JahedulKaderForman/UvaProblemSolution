#include<bits/stdc++.h>
using namespace std;
int a[1000000],b[1000000];
void divisor(){
long long int temp,sum,cn,n;
for(int i=1;i<=100003;i++){
        sum=0,cn=0;
    temp=sqrt(i);
    for(int j=1;j<=temp;j++){
        if(i%j==0){
            n=i/j;
            if(n!=j){
                cn+=2;
                sum+=(j+n);
            }
            else{
                cn+=1;
                sum+=j;
            }
        }
    }
    a[i]=cn;
    b[i]=sum;
}



}
int main(){
int test,x,y,z;
unsigned long long int sum1,sum2;
divisor();
cin>>test;
while(test--){
        sum1=0,sum2=0;
    scanf("%d%d%d",&x,&y,&z);
    for(int i=x;i<=y;i++){
        if(i%z==0){
            sum1+=a[i];
            sum2+=b[i];
        }
    }
    printf("%llu %llu\n",sum1,sum2);

}



}
