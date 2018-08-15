#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    freopen("Input.in","r",stdin);
     freopen("Output.out","w",stdout);
    int n,i,j,arr[105][105],a[1000],c[1000],sum1,sum2,num1,num2;
    int rowodd, columodd, rowstore,columstore,flag,flag2,flag3;
    while(scanf("%d",&n)){
            rowodd=0;columodd=0;
        if(n==0)
            break;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(i=0;i<n;i++){
            sum1=0;
        for(j=0;j<n;j++){
            sum1+=arr[i][j];
        }
        a[i]=sum1;
    }
    for(i=0;i<n;i++){
            sum2=0;
        for(j=0;j<n;j++){
            sum2+=arr[j][i];
        }
        c[i]=sum2;
    }
    for(i=0;i<n;i++){
        flag=0;
        if((a[i]%2)!=0){
            rowodd++;
            num1=a[i];
            rowstore=i;
        }
        if((c[i]%2)!=0){
            columodd++;
            num2=c[i];
            columstore=i;
        }
        if(rowodd>1 || columodd>1){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"Corrupt"<<endl;
    }
    else if(rowodd==1 && columodd==1){
        flag2=0;flag3=0;
        if((num1<<1)%2==0)
            flag2=1;
        if((num2<<1)%2==0)
            flag3=1;
        if(flag2==1 && flag3==1){
            printf("Change bit (%d,%d)\n",rowstore+1,columstore+1);
        }
        else{
            cout<<"Corrupt"<<endl;
        }
    }
    else{
        cout<<"OK"<<endl;
    }
}
}
