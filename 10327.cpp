#include<stdio.h>
#include<iostream>

using namespace std;
int main(){
    int n,a[1200],i,temp,j,c;
    while(scanf("%d",&n)!=EOF){
        c=0;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                c++;
            }
        }
    }
    cout<<"Minimum exchange operations : "<<c<<endl;
    }

}
