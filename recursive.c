#include<stdio.h>
int foo(int i,int j,int *n,int *a){

    if(i==*n){
        *n=j;
        return ;
    }
    if(a[i]%2==0)
        a[j++]=a[i];
    foo(i+1,j,n,a);



}
int main(){

    int a[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    foo(0,0,&n,a);
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;



}
