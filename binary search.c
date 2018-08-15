#include<stdio.h>

int main(){
    int a[15], n,i,start,end,mid,item;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    printf("enter which is find");
    scanf("%d",&item);
    start=0;
    end=n-1;
    mid=(start+end)/2;
    while(start<=end && a[mid]!=item){
        if(item<a[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
         mid=(start+end)/2;
    }
    if(a[mid]==item){
        printf("positon = %d",mid+1);
    }
    else
         printf("Not found");



return 0;

}
