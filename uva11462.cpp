#include<bits/stdc++.h>
using namespace std;
long long int a[2000003];
int main(){
int n;
while(cin>>n){
        if(n==0)
        break;
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(i!=0){
            printf(" ");
        }
        printf("%lld",a[i]);
    }
    printf("\n");
}
}
