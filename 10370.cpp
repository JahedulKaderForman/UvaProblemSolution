#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int t,n,i,a[100000],sum,c;
    double result,d;
    cin>>t;
    while(t--){
            c=0;sum=0;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        d=sum/n;

        for(i=0;i<n;i++){
            if(a[i]>d){
                c++;
            }
        }
        result=(c/(n*1.0))*100;
        printf("%0.3lf%%\n",result);
    }


}
